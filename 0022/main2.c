#include<stdio.h>
int main(){
    int a;
    while(1){
        scanf("%d",&a);
        if(a==0)return 0;
        int n[5000];
        for(int i=0;i<a;i++)scanf("%d",n+i);
        int dp[5000];
        dp[0]=n[0];
        int max=0;
        for(int i=1;i<a;i++){
            if(dp[i-1]>0)dp[i]=dp[i-1]+n[i];
            else dp[i]=n[i];
            if(max<dp[i])max=dp[i];
        }
        printf("%d\n",max);
    }
}