// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
int isValide(int num){
    if(isgraph(num) != isgraph())
        while( num <= 1){
             printf("please enter the number > 1 and please not enter the char ! :");
             scanf("%d", &num);
        }
    return num;
}
bool isPremier(int num){
    int x = isValide(num);
    int i, sum = 0;
        for(i = 1; i < x; i++){
            if(x%i == 0){
                sum++;
            }
        }
        if(sum == 1){
            return true;
        }else {
            return false;
        }
}

int main() {
    int num;
    sizeof(int)==4;
    sizeof(char) == 1;
    printf("please enter the number : ");
    scanf("%d", &num);
    if(isPremier(num)){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}
