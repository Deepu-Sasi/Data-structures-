#include<stdio.h>
int binarySearch(int a[], int search, int f, int l);
int main()
{
    int a[100],n,i,search,temp,size,s,f,l,mid,x=0;
    do
    {
     x=x+2;
    printf("Enter the number of elements\n");
    x++;
    scanf("%d",&n);
    x++;
    size=n-1;
    x++;
    f=0;
    x++;
    l=(n-1);
    x++;
    printf("Enter the elements in asending or decending order\n");
    x++;
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        x++;

    }
    x++;
    printf("Enter the number to be searched :");
    x++;
    scanf("%d", &search);
    x++;
    temp=binarySearch(a, search, 0,size);
    x++;
    if(temp!=-1)
    {
        printf("%d found in the array :%d\n",search, (temp+1));
        x++;
    }
    else
    {
        printf("%d is not found\n", search);
        x++;
    }
    x++;

        printf("Enter 1 to continue searching or 0 to stop\n");
        x++;
        scanf("%d", &s);
        x++;
        printf("Space complexity is %d\n",((4*n)+40));
        x=x+2;
        printf("Time complexity is %d\n",x);
        x++;
    }
    while(s==1);
    return 0;

}
int binarySearch(int a[], int search, int f, int l)
{
    int mid,x;
    while(f<=l)
    {

        mid=((l+f)/2);
        x++;

        if(search==a[mid])
        {
            return mid;
            x++;

        }

        else if(search<a[mid])
        {
            l=mid-1;
            x++;
        }

        else
        {
            f=mid+1;
            x++;
        }


    }
    x++;
    return -1;

}
