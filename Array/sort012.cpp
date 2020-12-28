void sort012(int a[], int n)
{
int low = 0, mid = 0, high = n-1;

while(mid<=high)
{
switch(a[mid])
{
case 0: swap(a[low],a[mid]);
low++; mid++;
break;
case 1: mid++;
break;
case 2: swap(a[mid],a[high]);
high--;
break;
}
}
}
