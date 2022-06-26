#include<stdio.h>
int main()
{
    int c=0,i,n,x,a[10],mid,space;
    c++;
    char opt;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    c++;
    printf("Enter the elements:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c++;
    }
    do
    {
        int first=0,last=(n-1);
        c=c+2;
        mid=((first+last)/2);
        c++;
        printf("Enter the element to be searched:");
        scanf("%d", &x);
        c++;
        while(first<=last)
        {
            if(a[mid]==x)
            {
                printf("%d found at the location %d",x,(mid+1));
            }
            else if(a[mid]>x)
            {
                last= mid-1;
            }
            else
            {
                first=mid+1;
            }
            mid=(first+last)/2;
            c++;

        }
        if(first>last)
        {
            printf("%d is not found\n");
            c++;
        }
        printf("Do you want to search(Y/N)");
        scanf("%c",&opt);
        c++;
    }
    while(opt=='y'||opt=='N');
    printf("Time complexity of binary searchis %d\n",c);
    space=6*4+4*10;
    printf("Space complexity of binary search %d\n",space);
}
