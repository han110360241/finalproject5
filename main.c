#include<stdio.h>
#include<stdlib.h>

int main()
{
	int skill1,skill2, HP1,HP2, bullet1, bullet2;
	printf("007�p�C��\n=======================\n�W�h����\n1.�ݭn�ˤl�u�~��g\n2.�@�H���T���R�䤤�@�H���`�C������\n3.�O�@�i��פ@������\n4.�ϼu�i�ϼu����\n========================\n");
	srand(time(NULL));
	int i = 1;
	bullet1 = 0;
	bullet2 = 0;
	HP1 = 3;
	HP2 = 3;
	while (HP1 != 0 && HP2 != 0)
	{
		printf("��%d��\n==========================================================\n",i);
		printf("1:�ˤl�u    2:�g���A    3:�O�@    4:�ϼu\n");
		printf("�п�J�A�n���ۦ�:");
		scanf_s("%d", &skill1);
		printf("\n");
		skill2 = rand() % 4 + 1;
		printf("�q���ҨϥΪ��ޯ�O%d\n", skill2);


		if (skill1 == 1 && skill2 == 1)
		{
			printf("����ˤl�u�ҥH�S��\n1�����a�l�u+1\n2�����a�l�u+1\n");
			bullet1++;
			bullet2++;
			printf("\n");
		}


		if (skill1 == 1 && skill2 == 2)
		{
			if (bullet2 == 0)
			{
				printf("2�����a�L�l�u�ҥH�L��\n1�����a�l�u+1");
				bullet1++;
			}
			else
			{
				printf("2�����a��1�����a�g���A�ҥH1�����aHP-1\n1�����a�l�u+1\n2�����a�l�u-1\n");
				HP1--;
				bullet1++;
				bullet2--;
			}
			printf("\n");
		}

		if (skill1 == 1 && skill2 == 3)
		{
			printf("1���ˤl�u�ҥH1�����a�l�u+1\n2�����a�O�@�L��\n");
			bullet1++;
			printf("\n");
		}

		if (skill1 == 1 && skill2 == 4)
		{
			printf("1���ˤl�u�ҥH1�����a�l�u+1\n2�����a�ϼu�L��\n");
			bullet1++;
			printf("\n");
		}

		if (skill1 == 2 && skill2 == 1)
		{
			if (bullet1 == 0)
			{
				printf("1�����a�L�l�u�ҥH�L��\n");
			}
			else
			{
				printf("1�����a��2�����a�g���A�ҥH2�����aHP-1�A1�����a�l�u-1\n2�����a�ˤl�u�A�l�u+1\n");
				HP2--;
				bullet1--;
				bullet2++;
			}
			printf("\n");
		}

		if (skill1 == 2 && skill2 == 2)
		{
			if (bullet1 == 0 && bullet2 == 0)
			{
				printf("1�����a�B2�����a�L�l�u�ҥH�L��\n");
			}
			if (bullet1 > 0 && bullet2 == 0)
			{
				printf("1�����a��2�����a�g���A2�����aHP-1\n2�����a�L�l�u�ҥH�L��");
				bullet1--;
				HP2--;
			}
			if (bullet1 == 0 && bullet2 > 0)
			{
				printf("2�����a��1�����a�g���A1�����aHP-1\n1�����a�L�l�u�ҥH�L��");
				bullet2--;
				HP1--;
			}
			if (bullet1 > 0 && bullet2 > 0)
			{
				printf("1�����a�M2�����a���g\n1�����aHP-1 �l�u-1\n2�����aHP-1 �l�u-1");
				HP1--;
				HP2--;
				bullet1--;
				bullet2--;
			}
			printf("\n");
		}

		if (skill1 == 2 && skill2 == 3)
		{
			if (bullet1 == 0)
			{
				printf("1�����a�L�l�u�ҥH�L��");
			}
			else
			{
				printf("1�����a�g��2�����a\n2�����a�O�@�ͮġA1�����a�g���L��\n1�����a�l�u-1");
				bullet1--;
			}
			printf("\n");
		}

		if (skill1 == 2 && skill2 == 4)
		{
			if (bullet1 == 0)
			{
				printf("1�����a�L�l�u�ҥH�L��");
			}
			else
			{
				printf("1�����a�g��2�����a�A2�����a�ϼu�ͮ�\n1�����a�l�u-1 HP-1");
				bullet1--;
				HP1--;
			}
			printf("\n");
		}

		if (skill1 == 3 && skill2 == 1)
		{
			printf("2���ˤl�u�ҥH2�����a�l�u+1\n2�����a�O�@�L��\n");
			bullet2++;
			printf("\n");
		}

		if (skill1 == 3 && skill2 == 2)
		{
			if (bullet2 == 0)
			{
				printf("2�����a�L�l�u�ҥH�L��");
			}
			else
			{
				printf("2�����a�g��1�����a\n1�����a�O�@�ͮġA2�����a�g���L��\n1�����a�l�u-1");
				bullet2--;
			}
			printf("\n");
		}

		if (skill1 == 3 && skill2 == 3)
		{
			printf("����O�@�A�L��");
			printf("\n");
		}

		if (skill1 == 3 && skill2 == 4)
		{
			printf("1�����a�O�@�A2�����a�����A�L��");
			printf("\n");
		}

		if (skill1 == 4 && skill2 == 1)
		{
			printf("2���ˤl�u�ҥH2�����a�l�u+1\n4�����a�ϼu�L��\n");
			bullet2++;
			printf("\n");
		}

		if (skill1 == 4 && skill2 == 2)
		{
			if (bullet2 == 0)
			{
				printf("2�����a�L�l�u�ҥH�L��");
			}
			else
			{
				printf("2�����a�g��1�����a�A1�����a�ϼu�ͮ�\n2�����a�l�u-1 HP-1");
				bullet2--;
				HP2--;
			}

			printf("\n");
		}

		if (skill1 == 4 && skill2 == 3)
		{
			printf("2�����a�O�@�A1�����a�����A�L��");
			printf("\n");
		}

		if (skill1 == 4 && skill2 == 4)
		{
			printf("���ۤ����A�L��");
			printf("\n");
		}
	


		printf("1�����aHP  :%d\n",HP1);
		printf("       �l�u:%d\n", bullet1);
		printf("2�����aHP  :%d\n", HP2);
		printf("       �l�u:%d\n", bullet2);
		i++;
		printf("\n");
	}



	if (HP1 == 0)
	{
		printf("�C������");
		printf("�A��F!");
	}
	if (HP2 == 0)
	{
		printf("�C������");
		printf("�AĹ�F!");
	}








	system("pause");
	return 0;
}