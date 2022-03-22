#include <stdio.h>
#include <ctype.h> 
#include <string.h>

int pal(char arrPal[], int i, int j){
    int palLen = strlen(arrPal);
    if (i == palLen/2){
        return 1;
    }
    //printf("%c %c\n", arrPal[i], arrPal[j]);

    if(arrPal[i] == arrPal[j]){
        pal(arrPal, i+1, j-1);
    } else {
        return 0;
    }
}

int main(){
    char arr[1000];
    gets(arr);
    int len = strlen(arr);

    for (int i = 0; i < len; i++)
    {
        arr[i] = tolower(arr[i]);
        //delete space
        if (arr[i] == 32)
        {
           for (int j = i; j < len; j++)
           {
               arr[j] = arr[j+1];
           }
           len--;
        }
    }

    //printf("%d", len);

    if(pal(arr, 0, len-1)){
        printf("Palindrome");
    } else {
        printf("Bukan Palindrome");
    }
    

}