#include<stdio.h>
int main(void)
{
        int height1,height2,height3,mh;//height1,height2,height3 are known people heights,mh represent other umknown two people heights
        float average;
        {
                printf("input the heights of known three people\n");
                scanf("%d %d %d",&height1,&height2,&height3);
                printf("input the average\n");
                scanf("%f" ,&average);
                mh=((average*5)-(height1+height2+height3))/2;
                printf("mh 1 is %d\nmh 2 is %d\n",mh,mh);
        }
        return 0;
}
