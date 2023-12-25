#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int m=0,y=0,r=0,a=0,i=0,choice;
	char candidate[100],gender[100],name[10][100],status[100],age[100],c;
	char username[20],password[20];
	do
	{
			system("cls");
			printf("\t\t\t\t\t\t\t\t\t||VOTING MENU||\n");
			printf("\n\t\t\t\t\t\t\t\t VOTING LINES ARE NOW OPEN!!!!\n");
			printf("Enter Username:");
			scanf("%s",&username);
			printf("Enter Password:");
			scanf("%s",&password);
			if(strcmp(username,"aditya") ==0){
				if(strcmp(password,"aditya1")==0){
					printf("USER VERIFIED!!\n");
				}
			else if(strcmp(password,"aditya1")==1 || strcmp(password,"ayush1")==1) {
				printf("\nWRONG PASSWORD!!");
				getch();
				return;
			}
		}
			else {
				printf("\nUSER DOESN'T EXISTS!!");
				getch();
				return;
			}
	printf("\nName of Cadidates are:");
	printf("\n1-MODIJI.\n2-YOGIJI.\n3-RAHULJI.\n4-ARVINDJI.\n");
	printf("\nSYMBOLS FOR VOTING YOUR RESPECTIVE CANDIDATE:");
	printf("\nFor MODIJI----> 'm' or 'M'.\nFor YOGIJI----> 'y' or 'Y'.\nFor RAHULJI----> 'r' or 'R'.\nFor ARVINDJI----> 'a' or 'A'.\n");
			printf("\nVoter number %d:\nPlease enter your gender (M/F):",i+1);
			fflush(stdin);
			scanf("%c",&gender[i]);
			if(gender[i]=='m'||gender[i]=='M')
			{
				printf("Mr.");
				fflush(stdin);
				gets(name[i]);
			}
			else if(gender[i]=='f'||gender[i]=='F')
			{
				printf("Are you Married or Single?(M/S):");
				fflush(stdin);
				scanf("%c",&status[i]);
				if(status[i]=='m'||status[i]=='M')
				{
					printf("Mrs.");
					fflush(stdin);
					gets(name[i]);
				}
				else if(status[i]=='s'||status[i]=='S')
				{
					printf("Ms.");
					fflush(stdin);
					gets(name[i]);
				}
			}
			printf("Enter your Age:");
			fflush(stdin);
			scanf("%d",&age[i]);
				if(age[i]<18)
				{
					printf("NOT ELIGIBLE TO VOTE.\n");
				}
				else if(age[i]>=18)
				{
					printf("ELIGIBLE TO VOTE.\n");
					printf("Select symbol for your respective candidate:\n");
					fflush(stdin);
					scanf("%c",&candidate[i]);
					if(candidate[i]=='m'||candidate[i]=='M')
					{
						m++;
					}
					else if(candidate[i]=='y'||candidate[i]=='Y')
					{
						y++;
					}
					else if(candidate[i]=='r'||candidate[i]=='R')
					{
						r++;
					}
					else if(candidate[i]=='a'||candidate[i]=='A')
					{
						a++;
					}
				}
				i++;
				printf("Do you have more candidates for voting?(Y/N):");
				fflush(stdin);
				scanf("%c",&c);
		}while(c=='y'||c=='Y');
		printf("\nTOTAL VOTES ARE:");
		printf("MODIJI---->%d\n",m);
		printf("YOGIJI---->%d\n",y);
		printf("RAHULJI---->%d\n",r);
		printf("ARVINDJI---->%d\n",a);
		if(m>y&&m>r&&m>a)
		{
			printf("\nWINNER---->MODIJI");
		}
		else if(y>m&&y>r&&y>a)
		{
			printf("\nWINNER---->YOGIJI\n");
		}
		else if(r>m&&r>y&&r>a)
		{
			printf("\nWINNER---->RAHULJI\n");
		}
		else if(a>m&&a>y&&a>r)
		{
			printf("\nWINNER---->ARVINDJI\n");
		}
		printf("\nTHANKYOU FOR VOTING!!!!");
		return 0;
}
