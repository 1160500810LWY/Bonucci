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
        FILE *fp1;
        FILE *fp2;
        char a;
        if((fp1=fopen("ReadMe.txt","r"))==NULL){
        printf("Cannot open ReadMe!\n");
        exit(0);}
        while((a=fgetc(fp1))!=EOF)
        putchar(a);
        fclose(fp1);
        if((fp2=fopen("file1.txt","w"))==NULL){
        printf("Cannot open file1!\n");
        exit(0);}
        srand( (unsigned)time( NULL ) );
        int answer;
        int ans;
        int i;
        int maxnum;
		printf("\n��ѡ����Ҫ���еĲ�����0���������Ϸ��1����ʼ��Ϸ��\n"); 
		fprintf(fp2,"��ѡ����Ҫ���еĲ�����0���������Ϸ��1����ʼ��Ϸ��\n");
		scanf("%d",&i);
		while(i==1){
			int cnt=1;
		   	fprintf(fp2,"��ѡ���˿�ʼ��Ϸ\n");
			printf("������maxnum��ֵ��\n"); 
			fprintf(fp2,"������maxnum��ֵ��\n");
			scanf("%d",&maxnum);
			fprintf(fp2,"%d\n",maxnum);
        	answer=rand()%maxnum;
        	printf("������һ��0-%d֮�������\n",maxnum);
        	fprintf(fp2,"������һ��0-%d֮�������\n",maxnum);
        	scanf("%d",&ans);
        	fprintf(fp2,"%d\n",ans);
       	 	while(ans!=answer){
           	if(ans>answer){
            	printf("��µ���ƫ��\n");
            	fprintf(fp2,"��µ���ƫ��\n");
           	}
            else{
            printf("��µ���ƫС\n");
            fprintf(fp2,"��µ���ƫС\n");
            }
            printf("������һ���µ�0-%d֮�������\n",maxnum);
            fprintf(fp2,"������һ���µ�0-%d֮�������\n",maxnum);
            scanf("%d",&ans);
            fprintf(fp2,"%d\n",ans);
            cnt=cnt+1;
        }
        printf("��ϲ��¶��ˣ�������%d�Σ���ȷ��Ϊ%d\n",cnt,answer);
        fprintf(fp2,"��ϲ��¶��ˣ�������%d�Σ���ȷ��Ϊ%d\n",cnt,answer);
    printf("��ѡ����Ҫ���еĲ�����0���������Ϸ��1���������Ϸ��\n");
    fprintf(fp2,"��ѡ����Ҫ���еĲ�����0���������Ϸ��1���������Ϸ��\n");
    scanf("%d",&i); 
	}
	fprintf(fp2,"��ѡ���˽�����Ϸ\n");
	fclose(fp2);
}
