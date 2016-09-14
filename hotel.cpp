#include <stdio.h>
#include <cstring>
/*A holiday weekend is coming up,
and Hotel Bytelandia needs to find out if it has enough rooms to accommodate all potential guests.
A number of guests have made reservations.
Each reservation consists of an arrival time, and a departure time.
The hotel management has hired you to calculate the maximum number of guests that will be at the hotel simultaneously.
Note that if one guest arrives at the same time another leaves, they are never considered to be at the hotel simultaneously
(see the second example).
Input

Input will begin with an integer T, the number of test cases.
Each test case begins with an integer N, the number of guests.
Two lines follow, each with exactly N positive integers.
The i-th integer of the first line is the arrival time of the i-th guest,
and the i-th integer of the second line is the departure time of the i-th guest
(which will be strictly greater than the arrival time).
Output

For each test case, print the maximum number of guests that are simultaneously at the hotel.
Sample Input

3
3
1 2 3
4 5 6
5
1 2 3 4 5
2 3 4 5 6
7
13 6 5 8 2 10 12
19 18 6 9 9 11 15

Sample Output

3
1
3

Constraints

    T≤100
    N≤100
    All arrival/departure times will be between 1 and 1000, inclusive
*/
int main()
{
    int cases,n,i,max,j;
    int *prev;
    int arrival[101],departure[101];

    scanf("%d",&cases);

    while(cases--)
    {
        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
            scanf("%d",&max);
            arrival[i]=max;
        }

        for(i=1;i<=n;i++)
        {
            scanf("%d",&max);
            departure[i]=max;
        }


        prev=new int[1001];
        memset(prev,0,1001*sizeof(int));
        max=0;
        for(i=1;i<=n;i++)
        {
            for(j=arrival[i]; j<departure[i]; j++)
            {
                //prev[i] stores max number of guests at j th hour
                prev[j]=prev[j]+1;
                if(prev[j]>max)
                {
                    max=prev[j];
                }
            }
        }
 /*       for(i=1;i<1001;i++)
        {
            printf("%d ",prev[i]);
        }
*/
        printf("%d\n",max);

        delete[] prev;


    }

    return 0;
}
