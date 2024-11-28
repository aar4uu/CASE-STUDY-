//case 4
#include<stdio.h>
int letterValidation(char arr[]);
int main()
{

    int N,i,j;

    //taking input for N
    printf("Enter the value of N lying between 1 to 100: ");
    scanf("%d",&N);
    getchar();
    int letters[N][26];
    for(i =0; i <N; i++)
    {
        for( j =0; j < 26; j++)
        {
            letters[i][j] =0;
        }
    }

    if(N>=1 && N <=100)
    {
       
       
       
        char rocks[N][100];
        //taking input for rock composition;
        for(i =0; i < N; i++)
        {
        printf("Enter rock composition : use small letters only: ");
        fgets(rocks[i],100,stdin);
        //validating element letters

        }


        for( i =0; i < N; i++)
        {
            int j=0;
            while(rocks[i][j] != '\0')
            {
                switch(rocks[i][j])
                {
                    case 'a': letters[i][0] = 1;
                                break;

                    case 'b': letters[i][1] = 1;
                                break;
                    case 'c': letters[i][2] = 1;
                                break;
                    case 'd': letters[i][3] = 1;
                                break;
                    case 'e': letters[i][4] = 1;
                                break;
                    case 'f': letters[i][5] = 1;
                                break;
                    case 'g': letters[i][6] = 1;
                                break;
                    case 'h': letters[i][7] = 1;
                                break;
                    case 'i': letters[i][8] = 1;
                                break;
                    case 'j': letters[i][9] = 1;
                                break;
                    case 'k': letters[i][10] = 1;
                                break;
                    case 'l': letters[i][11] = 1;
                                break;
                    case 'm': letters[i][12] = 1;
                                break;
                    case 'n': letters[i][13] = 1;
                                break;
                    case 'o': letters[i][14] = 1;
                                break;
                    case 'p': letters[i][15] = 1;
                                break;
                    case 'q': letters[i][16] = 1;
                                break;
                    case 'r': letters[i][17] = 1;
                                break;
                    case 's': letters[i][18] = 1;
                                break;
                    case 't': letters[i][19] = 1;
                                break;
                    case 'u': letters[i][20] = 1;
                                break;
                    case 'v': letters[i][21] = 1;
                                break;
                    case 'w': letters[i][22] = 1;
                                break;
                    case 'x': letters[i][23] = 1;
                                break;
                    case 'y': letters[i][24] = 1;
                                break;
                    case 'z': letters[i][25] = 1;
                                break;

                }
                j++;
            }
        }
        int gemElements =0;
        for(i =0; i <26; i ++)
        {   int sum =0;
            for(j =0; j < N; j++)
            {
                sum = sum + letters[j][i];
            }
            if(sum == N)
            {
                gemElements++;
            }
        }





    printf("%d",gemElements);




    }
    else
    {
        printf("Invalid Input");
    }

return 0;
}

int letterValidation (char arr[])
{
    int i =0, valid =1;
    while(arr[i] != '\0')
    {
        if(arr[i] >= 'a' && arr[i] <= 'z')
        {
            i++;
        }
        else
        {
            valid =0;
            break;
        }
    }
    return valid;
}
