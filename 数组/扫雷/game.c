#include "game.h" //ͷ�ļ����ú󣬲���Ҫ�ظ����ÿ⺯��
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            board[i][j] = set;//���������̣����Ը��������set��ʼ������
        }
    }
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
    int i = 0;
    int j = 0;
    //�ڵ�һ�д�ӡ�кţ�ע��ո񣬶��������ֵ
    printf(" ");
    for (i = 1; i <= col; i++)
    {
        printf(" ");
        printf(" %d", i);
    }
    printf("\n\n");
    for (i = 1; i <= row; i++)
    {
        printf("%d ", i);//�ȴ�ӡ�к�
        for (j = 1; j <= col; j++)
        {
            printf(" %c ", board[i][j]);//�ٴ�ӡ�����ֵ
        }
        printf("\n\n");
    }
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
    int count = EASY_COUNT;
    while (count)
    {
        int x = rand() % row + 1; //ģ9��ֵ��0~8����1��1~9֮��
        int y = rand() % col + 1;
        if (board[x][y] == '0') //���ַ�1�����ף�ͬʱ�����ظ�����
        {
            board[x][y] = '1';
            count--;//��count��Ϊ0ʱ������ѭ��
        }
    }
}

int get_mine_count(char mine[ROWS][COLS], int x, int y) //��������������Χ8�����ӵ�����
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
    //��1��-��0���õ�����1
}
void show_nearby(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
    int n = get_mine_count(mine, x, y); //չ������������Χ������
    if (n != 0)
    {
        show[x][y] = n + '0';//��������������Χ���ף�ֱ����ʾ����
    }
    else
    {
        show[x][y] = '0'; //��������������Χû���ף�չ����Χ8������
        //�ݹ��ʱ��δ����ջ�������Ҫ���ϸ�����*������
        //��x��y��������Ϊ�˱�����չ������
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
    int win = row * col;//ֵ�ɱ䣬ֻ��Ϊ�˽���ѭ��
    int i = 0;
    int j = 0;
    while (win > EASY_COUNT)
    {
        win = 0;//��Ϊ����Ҫ���㣬��������Ϊ0
        printf("�������Ų��׵����꣨�к� �кţ���\n");
        scanf("%d %d", &x, &y);
        printf("\n");
        if (x >= 1 && x <= row && y >= 1 && y <= col)//���ж�����������Ƿ�Ϸ�
        {
            if (mine[x][y] == '1')//�߼�һ������ټ��ϱ�֤��һ��������
            {
                printf("���ź����ȵ�����\n");
                DisplayBoard(mine, row, col);
                printf("��Ϸ����...\n");
                break;
            }
            else
            {
                show_nearby(mine, show, x, y);//û�в��ף����ж��Ƿ����չ��
                DisplayBoard(show, row, col);//չ���󣬴�ӡ����
                for (i = 1; i <= row; i++)
                {
                    for (j = 1; j <= col; j++)
                    {
                        if (show[i][j] == '*')
                        {
                            win++;//��������ʣ��δ�ų��ļ�*��
                        }
                    }
                }
                printf("\nδ�ų���������%d\n\n", win);
            }
        }
        else
        {
            printf("��������Ƿ�������������\n");
        }
    }
    if (win == EASY_COUNT)//�ж��Ƿ������Ϊ�˱�����׺�����ѭ��
    {
        printf("��ϲ���׳ɹ���\n\n");
        DisplayBoard(mine, row, col);
    }
}
