ShellSort(a, n) // 'a' is the given array, 'n' is the size of array  
for (interval = n/2; interval > 0; interval /= 2)  
for ( i = interval; i < n; i += 1)  
temp = a[i];  
for (j = i; j >= interval && a[j - interval] > temp; j -= interval)  
a[j] = a[j - interval];   
a[j] = temp;  
End ShellSort  
