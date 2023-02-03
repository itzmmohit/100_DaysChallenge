bool isMonotonic(int* nums, int numsSize) 
{
    int i=0,c=0;
    
    if(numsSize==1)
        return true;

    if(numsSize==2)
    {
        if(nums[i]>=nums[i+1])
            return true;
        else if(nums[i]<=nums[i+1])
            return true;
        else
            return false;
    }

    if(numsSize>5)
    {
        if(nums[i]<=nums[i+1] && nums[i+1]<=nums[i+2] && nums[i+2]<=nums[i+3] && nums[i+3]<=nums[i+4] && nums[i+4]<=nums[i+5])
        {
            for(i=0;i<numsSize-1;i++)
            {
                if(nums[i]<=nums[i+1])
                    continue;
                else
                {
                    c=1;
                    break;
                }
            }
            if(c==1)
                return false;
            else
                return true;
        }
        else if(nums[i]>=nums[i+1] && nums[i+1]>=nums[i+2] && nums[i+2]>=nums[i+3] && nums[i+3]>=nums[i+4] && nums[i+4]>=nums[i+5])
        {
            for(i=0;i<numsSize-1;i++)
            {
                if(nums[i]>=nums[i+1])
                    continue;
                else
                {
                    c=1;
                    break;
                }
            }
            if(c==1)
                return false;
            else
                return true;
        }
    }

    if(numsSize>2)
    {
        if(nums[i]<=nums[i+1] && nums[i+1]<=nums[i+2])
        {
            for(i=0;i<numsSize-1;i++)
            {
                if(nums[i]<=nums[i+1])
                    continue;
                else
                {
                    c=1;
                    break;
                }
            }
            if(c==1)
                return false;
            else
                return true;
        }
        else if(nums[i]>=nums[i+1] && nums[i+1]>=nums[i+2])
        {
            for(i=0;i<numsSize-1;i++)
            {
                if(nums[i]>=nums[i+1])
                    continue;
                else
                {
                    c=1;
                    break;
                }
            }
            if(c==1)
                return false;
            else
                return true;
        }
    }

    return false;
}
