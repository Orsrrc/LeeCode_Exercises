/*����һ���������� nums ��һ������Ŀ��ֵ target�������ڸ��������ҳ� ��ΪĿ��ֵ target  ���� ���� ���������������ǵ������±ꡣ

����Լ���ÿ������ֻ���Ӧһ���𰸡����ǣ�������ͬһ��Ԫ���ڴ��ﲻ���ظ����֡�

����԰�����˳�򷵻ش𰸡�

*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
	
	//����Ŀ��ֵ 
	int initTarget(int target);
	//�жϲ����
	void judgeNum(int* num, int target, int lengthNum);
	 
	int lengthNum, j = 1;
	int initValue;
	int target;
	bool isflag = true;
	printf("��������������ĸ���:");
	scanf("%d", &lengthNum);
	int nums[lengthNum + 1];
	target = initTarget(target);
	printf("��������������\n");
	while(isflag == true)
	{
		if( j == lengthNum)
		{
			isflag = false;
		}
		printf("�������%d������", j);
		scanf("%d", &initValue);
		nums[j] = initValue;
		j++;

	}
	judgeNum(nums,target,lengthNum);
	return 0;
}


int initTarget(int target)
{
	printf("������Ŀ��ֵtarget:");
	scanf("%d", &target);
	return target;
}


void judgeNum(int* num, int target, int lengthNum)
{
	int i = 0, j = 1;
	bool isflag = true;
	while(isflag == true)
	{
		if( i > lengthNum)
		{
			isflag = false;	
		}
		if(i == j)
		{
			j += 1;
		}
		if( j > lengthNum)
		{
			i += 1;
			j  = i + 1;
		}
		
		if(num[i] + num[j] == target)
		{
			printf("[%d,%d] ",i - 1 , j - 1);
		}
		j++;	
	}
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize){

     int i,j;
     int *result=(int *)malloc(sizeof(int)*2);
     for(i=0;i<numsSize;i++)
     {
         for(j=i+1;j<numsSize;j++)
         {
             if(nums[i]+nums[j]==target)
             {
                 result[0]=i;
                 result[1]=j;
                 *returnSize=2;
                 return result;
             }
         }
     }
     *returnSize=0;
     return NULL;

}