/*给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。

你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。

你可以按任意顺序返回答案。

*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
	
	//键入目标值 
	int initTarget(int target);
	//判断并输出
	void judgeNum(int* num, int target, int lengthNum);
	 
	int lengthNum, j = 1;
	int initValue;
	int target;
	bool isflag = true;
	printf("请输入整数数组的个数:");
	scanf("%d", &lengthNum);
	int nums[lengthNum + 1];
	target = initTarget(target);
	printf("请输入整数数组\n");
	while(isflag == true)
	{
		if( j == lengthNum)
		{
			isflag = false;
		}
		printf("请输入第%d个数字", j);
		scanf("%d", &initValue);
		nums[j] = initValue;
		j++;

	}
	judgeNum(nums,target,lengthNum);
	return 0;
}


int initTarget(int target)
{
	printf("请输入目标值target:");
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