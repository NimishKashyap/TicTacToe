#include<stdio.h>
#include<conio.h>
//TIC-TAC-TOE GAME: Source Code By Nicky(Nimish Kashyap)
void renderBoard(char arr[])
{
    system("cls");
    printf("| %c | %c | %c |\n",arr[0],arr[1],arr[2]);
    printf(" ___ ___ ___ \n");
    printf("| %c | %c | %c |\n",arr[3],arr[4],arr[5]);
    printf(" ___ ___ ___ \n");
    printf("| %c | %c | %c |\n",arr[6],arr[7],arr[8]);   
}
int checkWin(char arr[])
{
    if(arr[0]==arr[1] && arr[1]==arr[2] && (arr[0] == 'X' || arr[0]=='O'))
    {
        if(arr[0] =='X')
        {
            return 1;
        }
        else
        {
            return 2;
        }
        
    }
    if(arr[3]==arr[4] && arr[4]==arr[5] && (arr[3] == 'X' || arr[3]=='O') )
    {
        if(arr[3] =='X')
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    if(arr[6]==arr[7] && arr[7]==arr[8] && (arr[6] == 'X' || arr[6]=='O') )
    {
        if(arr[6] =='X')
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    if(arr[0]==arr[3] && arr[3]==arr[6] && (arr[0] == 'X' || arr[0]=='O') )
    {
        if(arr[0] =='X')
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    if(arr[1]==arr[4] && arr[4]==arr[7] && (arr[1] == 'X' || arr[1]=='O'))
    {
        if(arr[1] =='X')
        {
            return 1;
        }
        else
        {
            return 2;
        }   
    } 
    if(arr[2]==arr[5] && arr[5]==arr[8] && (arr[2] == 'X' || arr[2]=='O'))
    {
        if(arr[2] =='X')
        {
            return 1;
        }
        else
        {
            return 2;
        }    
    }
    if(arr[0]==arr[4] && arr[4]==arr[8] && (arr[0] == 'X' || arr[0]=='O'))
    {
        if(arr[0] =='X')
        {
            return 1;
        }
        else
        {
            return 2;
        }        
    }
    if(arr[2]==arr[4] && arr[4]==arr[6] && (arr[2] == 'X' || arr[2]=='O'))
    {
        if(arr[2] =='X')
        {
            return 1;
        }
        else
        {
            return 2;
        }    
    }
    return 0;
}

int main()
{
    int player, pos, counter = 0;
    int result;
    char board[9] = {'0', '0','0','0','0','0','0','0','0'};
    renderBoard(board);
    while(1)

    {
        counter++;
        player = (counter%2 ==0)? 2: 1;
        printf("Enter position for player: %d\n",player);
        scanf("%d",&pos);
        if(player == 1)
        {
            if(board[pos-1]!='X' && board[pos -1] != 'O')
                board[pos-1] = 'X';
            else
            {
                printf("Already filled! Exiting.....");
                break;
            }
        }
        else
        
        {
            if(board[pos-1]!='X' && board[pos -1] != 'O')
                 board[pos-1] = 'O';
            else
            {
                printf("Already filled! Exiting.....");
                break;
            }        
                    
        }
        renderBoard(board);
        result =  checkWin(board);
        if(result == 1)
        {
            printf("Player 1 has won!");
            break;
        }
        else if(result ==2)
        {
            printf("Player 2 has won!");
            break;
        }
        
        
    }
    _getch();
    return 0;
}
