//�������ƣ�lwyGuessNumber
//��Ϸ���ߣ�����һ
//��ϵ��ʽ��1119183912@qq.com
//����ʱ�䣺2017-7-5
//��Ϸ��飺�м�����������һ��������maxnum����������Ҳ�һ����ans����ȷ��Ϊanswer
//��Ϸ�汾��V1.0
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
        printf("\n������һ��0-99֮�������\n");
        scanf("%d",&ans);
        while(ans!=answer){
           if(ans>answer)
            printf("��µ���ƫ��\n");
            else
            printf("��µ���ƫС\n");
            printf("������һ���µ�0-99֮�������\n");
            scanf("%d",&ans);
            cnt=cnt+1; 
        }
        printf("��ϲ��¶��ˣ�������%d�Σ���Ϊ%d",cnt,answer);

}
