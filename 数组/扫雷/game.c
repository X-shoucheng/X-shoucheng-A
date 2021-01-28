#include "game.h" //头文件引用后，不需要重复引用库函数
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            board[i][j] = set;//有两种棋盘，所以根据输入的set初始化棋盘
        }
    }
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
    int i = 0;
    int j = 0;
    //在第一行打印列号，注意空格，对齐数组的值
    printf(" ");
    for (i = 1; i <= col; i++)
    {
        printf(" ");
        printf(" %d", i);
    }
    printf("\n\n");
    for (i = 1; i <= row; i++)
    {
        printf("%d ", i);//先打印行号
        for (j = 1; j <= col; j++)
        {
            printf(" %c ", board[i][j]);//再打印数组的值
        }
        printf("\n\n");
    }
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
    int count = EASY_COUNT;
    while (count)
    {
        int x = rand() % row + 1; //模9的值在0~8，加1在1~9之间
        int y = rand() % col + 1;
        if (board[x][y] == '0') //用字符1代表雷，同时避免重复埋雷
        {
            board[x][y] = '1';
            count--;//当count减为0时，结束循环
        }
    }
}

int get_mine_count(char mine[ROWS][COLS], int x, int y) //计算输入坐标周围8个格子的雷数
{
    return mine[x - 1][y]
     + mine[x - 1][y - 1]
      + mine[x][y - 1]
       + mine[x + 1][y - 1]
        + mine[x + 1][y]
         + mine[x + 1][y + 1]
          + mine[x][y + 1]
           + mine[x - 1][y + 1]
            - 8 * '0';
    //‘1’-‘0’得到数字1
}
void show_nearby(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
    int n = get_mine_count(mine, x, y); //展开输入坐标周围的棋盘
    if (n != 0)
    {
        show[x][y] = n + '0';//如果输入的坐标周围有雷，直接显示雷数
    }
    else
    {
        show[x][y] = '0'; //如果输入的坐标周围没有雷，展开周围8个格子
        //递归的时候，未避免栈溢出，需要加上格子是*的条件
        //对x，y加限制是为了避免在展开过多
        if (x - 1 > 0 && show[x - 1][y] == '*')
        {
            show_nearby(mine, show, x - 1, y);
        }
        if (x - 1 > 0 && y - 1 > 0 && show[x - 1][y - 1] == '*')
        {
            show_nearby(mine, show, x - 1, y - 1);
        }
        if (y - 1 > 0 && show[x][y - 1] == '*')
        {
            show_nearby(mine, show, x, y - 1);
        }
        if (x + 1 < ROWS && y - 1 > 0 && show[x + 1][y - 1] == '*')
        {
            show_nearby(mine, show, x + 1, y - 1);
        }
        if (x + 1 < ROWS && show[x + 1][y] == '*')
        {
            show_nearby(mine, show, x + 1, y);
        }
        if (x + 1 < ROWS && y + 1 < COLS && show[x + 1][y + 1] == '*')
        {
            show_nearby(mine, show, x + 1, y + 1);
        }
        if (y + 1 < COLS && show[x][y + 1] == '*')
        {
            show_nearby(mine, show, x, y + 1);
        }
        if (x - 1 > 0 && y + 1 < COLS && show[x - 1][y + 1] == '*')
        {
            show_nearby(mine, show, x - 1, y + 1);
        }
    }
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
    int x = 0;
    int y = 0;
    int win = row * col;//值可变，只是为了进入循环
    int i = 0;
    int j = 0;
    while (win > EASY_COUNT)
    {
        win = 0;//因为后面要计算，所以先设为0
        printf("请输入排查雷的坐标（行号 列号）：\n");
        scanf("%d %d", &x, &y);
        printf("\n");
        if (x >= 1 && x <= row && y >= 1 && y <= col)//先判断输入的坐标是否合法
        {
            if (mine[x][y] == '1')//高级一点可以再加上保证第一步不踩雷
            {
                printf("很遗憾，踩到雷了\n");
                DisplayBoard(mine, row, col);
                printf("游戏结束...\n");
                break;
            }
            else
            {
                show_nearby(mine, show, x, y);//没有踩雷，就判断是否可以展开
                DisplayBoard(show, row, col);//展开后，打印棋盘
                for (i = 1; i <= row; i++)
                {
                    for (j = 1; j <= col; j++)
                    {
                        if (show[i][j] == '*')
                        {
                            win++;//计算棋盘剩余未排除的即*数
                        }
                    }
                }
                printf("\n未排除坐标数：%d\n\n", win);
            }
        }
        else
        {
            printf("输入坐标非法！请重新输入\n");
        }
    }
    if (win == EASY_COUNT)//判断是否相等是为了避免踩雷后跳出循环
    {
        printf("恭喜排雷成功！\n\n");
        DisplayBoard(mine, row, col);
    }
}
