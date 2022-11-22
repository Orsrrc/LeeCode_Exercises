int* twoSum(int* nums, int numsSize, int target, int* returnSize){

     int x = 0, y = 0;
     int *result = (int *) malloc (sizeof(int) * 2);
     for(x; x < numsSize; x++)
     {
         for(y = x + 1; y < numsSize; y++)
         {
             if(nums[x] + nums[y] == target)
             {
                 result[0] = x;
                 result[1] = y;
                 *returnSize = 2;
                 return result;
             }
         }
    }
    *returnSize = 0;
    return NULL;
}
    