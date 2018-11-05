#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[100];
    int array[100];
    int i = 0;
    int j;
    
    while(fgets(str, sizeof(str), stdin)){
        int n = atoi(str);
        if(n > 0 && i == 0 && n <= 100)
        {
           	array[0] = n;
          	i++;
       	}
	else if(n > 0 && i > 0 && n <= 100)
        {
            	for(j = i; j > 0; j--)
            	{
                	array[j] = array[j - 1];
            	}
            	array[0] = n;
            	i++;
        }
        else if(n == 0)
    	{
           	for(j = 0; j < i; j++)
           	{
               		printf("%d",array[j]);
              		if(j < i - 1)
               		{
                		printf(",");
               		}
           	}
           	printf("\n");
       	}
        else if(n == -1)
        {
                printf("%d",array[0]);
            	for(j = 0; j < i - 1; j++)
            		{
                		array[j] = array[j + 1];
		        }
			i--;
			printf("\n");   
        }
    }
    return 0;
}
/*
0: 現在のスタックに格納されている全てのデータをスタックの上から順に「,」で区切って表示する
-1: スタックからデータを取り出す
それ以外の値: スタックにデータを追加する
*/
