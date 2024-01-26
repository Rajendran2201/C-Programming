 #include<stdio.h>

int main(){
    int start = 1;
    printNaturalNumbers(start);
    return 0;
}

void printNaturalNumbers(int num){
    if(num>50){
        return;
    }
    printf("%d",num);
    printNaturalNumbers(num+1);
}