#include<stdio.h>
int main()
{
    int i,n,x,a[100],index;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    printf("Enter the elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }

    index=linear_search(a,n,x);
    if(index==-1)
        printf("value not found");
    else
        printf("value found at the position %d",(index+1));

}
int linear_search(int a[], int n, int x)
{
    printf("Enter the element to be searched :");
    scanf("%d",&x);
    int i;
    for(i=0;i<n;i++)
        if(x==a[i])
        return i;
    return -1;
}
