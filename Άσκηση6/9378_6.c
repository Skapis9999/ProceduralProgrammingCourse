#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 8

void f(int arr[][],int *a, int p, int K, int *a2, int p2, int *a3, int p3, int *a4, int p4) //arr: matrix, p=0: pointer and a: if p=0 then it is an invalid formation. if p=1 it is valid. K is the number of the row
{
    for(int j=0; j<N; j++)                   //!!!!!!!!!!!!!!checks only row!!!!!!!!!!!!!!!
    {
        int sum=0;
        if(arr[K][j]==1)                    //every time a queen is in this row sum=+ If sum=0 this means no queen so no problem. If sum=1 one queen so no problem. If sum>1 then invalid formation
            sum++;
        if(sum>1)
        {
            break;                      //so if invalid break p stays 0 FALSE
        }
        else
        {
            p=*a;                      //so valid formation and p pointer becoming a globally. p=1 (since i have made a=1) TRUE
        }
    }
    for(int i=0; i<N; i++)                       //!!!!!!!!!!checks only column!!!!!!
    {
        int sum2=0;
        if(arr[i][K])
            sum2++;
        if(sum2>1)
        {
            break;
        }
        else
        {
            p2=*a2;
        }
    }
    for (int i=8; i>0; i--)                         //!!!!!!!!!!checks only diagonials from left to right!!!!!!
    {
        int sumd1=0;
        for (int j=1; j+i<10; j++)
        {
            if(arr[i][j]==1)
            {
                sumd1++;
                if(sumd1>=2)
                {
                    break;
                }
                else
                {
                    p3=*a3;
                }

            }
        }
    }
    for (int i=8; i>0; i--)                         //!!!!!!!!!!checks only diagonials from right to left!!!!!!
    {
        int sumd2=0;
        for (int j=1; j+i<10; j++)
        {
            if(arr[j][i]==1)
            {
                sumd2++;
                if(sumd2>=2)
                {
                    break;
                }
                else
                {
                    p4=*a4;
                }

            }
        }
    }
}

int main()
{
    int **arr=malloc(N* sizeof(unsigned int));
    if(arr==NULL)
    {
        printf ("Error \n");
        return NULL;
    }
    for (unsigned int q=0; q<N; ++q)
    {
        if((arr[q]=malloc(N*sizeof(int)))==NULL)
        {
            return 2;
        }
    }
    memset(arr, 0, sizeof arr);                   //make the entire array 0
    //unsigned int x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6, y6,x7,y7,x8,y8;
    int x,y;
    printf("Enter the coordinations of the boxes of your 8 queens: \n");
    for (int i=0; i<N; i++)
    {
        scanf("%d", &x);
        scanf("%d", &y);
        arr[x][y]=1;


    }
    //scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4,&x5,&y5,&x6,&y6,&x7,&y7,&x8,&y8 );
    //arr[x1][y1]=arr[x2][y2]=arr[x3][y3]=arr[x4][y4]=arr[x5][y5]=arr[x6][y6]=arr[x7][y7]=arr[x8][y8]=1;
    int a=1;
    int p=0;
    int a2=1;
    int p2=0;
    int a3=1;
    int p3=0;
    int a4=1;
    int p4=0;
    int status=0;                                             //New TRUE and FALSE. If status=0 no problem until here. If status>0 invalid formation
    int status2=0;
    int status3=0;
    int status4=0;
    int counter;
    for(unsigned int counter=0; counter<N; counter++)
    {
        f(arr, *a, p, counter, *a2, p2, *a3, p3);
        if(p==0)
        {
            status=1;
            printf("Your solution is wrong");
        }
        else
        {
            if(p2==0)
         {
           status2=1;
           printf("Your solution is wrong")  ;
         }
        }
    }
     if(status==1)
     {
         free(arr);
         return 0;
    if(status2==1)
     {
         free(arr);
         return 0;
     }
    if(p3==0)
        {
            status3=1;
            printf("Your solution is wrong");
         //Edo tora tha kano to idio gia stiles kai diagonious> mallon prepei na kano ena programma gia ola ta check kai na min xahaso return kai free
     }
     if(status3==1)
     {
         free(arr);
         return 0;
     if(p4==0)
        {
            status4=1;
            printf("Your solution is wrong");
        }
    if(status4==1)
     {
         free(arr);
         return 0;
     }





}
     }
}
