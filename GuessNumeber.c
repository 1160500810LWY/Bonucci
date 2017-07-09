//程序名称：lwyGuessNumber
//游戏作者：刘文一
//联系方式：1119183912@qq.com
//开发时间：2017-7-5
//游戏简介：有计算机随机产生一个不大于maxnum的数，有玩家猜一个数ans，正确答案为answer
//游戏版本：V1.0
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
main(){
        FILE *fp;
        char a;
        if((fp=fopen("ReadMe.txt","r"))==NULL){
        printf("Cannot open ReadMe!\n");
        exit(0);}
        while((a=fgetc(fp))!=EOF)
        putchar(a);
        fclose(fp);
        int maxnum=100;
        int answer;
        int ans;
        int cnt=1;
        srand( (unsigned)time( NULL ) );
        answer=rand()%100;
        printf("\n请输入一个0-99之间的数：\n");
        scanf("%d",&ans);
        while(ans!=answer){
           if(ans>answer)
            printf("你猜的数偏大\n");
            else
            printf("你猜的数偏小\n");
            printf("请输入一个新的0-99之间的数：\n");
            scanf("%d",&ans);
            cnt=cnt+1; 
        }
        printf("恭喜你猜对了，共猜了%d次，答案为%d",cnt,answer);

}
