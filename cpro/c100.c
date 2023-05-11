#include<stdio.h>
int main(){
    int n1,n2,n3,max;
    printf("정수 3개를 띄어쓰기로 입력하세요:");
    scanf("%d %d %d",&n1,&n2,&n3);
    max=n1;
    max=n2>max?n2:max;
    max=n3>max?n3:max;
    printf("최댓값:%d\n",max);
    return 0;
}