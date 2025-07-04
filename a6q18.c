#include <stdio.h>
int a[100], n, i, j, key;
void arraydel(int a[],int n)
{
    printf("\nEnter which number want to delete :");
    scanf("%d", &key);
    
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            for (j = i ; j < n - 1; j++)
                a[j] = a[j + 1];
            n--;
            break;
        }
    }
    
    for (i = 0; i < n; i++)
    printf("\t%d\t", a[i]);

}
int main()
{
    printf("how meny element you want to enter :");
    scanf("%d", &n);
    printf("Enter %d elements :\n", n);

    for (i = 0; i < n; i++){
    scanf("%d",&a[i]);
    }

    printf("Array is :");
    for (i = 0; i < n; i++)
    printf("\t%d\t", a[i]);
    arraydel(a,n);
    

    return 0;
}