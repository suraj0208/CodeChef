#include <stdio.h>
/*
After a long and successful day of preparing food for the banquet, it is time to
clean up. There is a list of n jobs to do before the kitchen can be closed for
the night. These jobs are indexed from 1 to n.

Most of the cooks have already left and only the Chef and his assistant are left
to clean up. Thankfully, some of the cooks took care of some of the jobs before
they left so only a subset of the n jobs remain. The Chef and his assistant divide
up the remaining jobs in the following manner. The Chef takes the unfinished job
with least index, the assistant takes the unfinished job with the second least
index, the Chef takes the unfinished job with the third least index, etc. That is,
if the unfinished jobs were listed in increasing order of their index then the
Chef would take every other one starting with the first job in the list and the
assistant would take every other one starting with the second job on in the list.

The cooks logged which jobs they finished before they left. Unfortunately, these
jobs were not recorded in any particular order. Given an unsorted list
of finished jobs, you are to determine which jobs the Chef must complete and
which jobs his assitant must complete before closing the kitchen for the
evening.
Input

The first line contains a single integer T ≤ 50 indicating the number of test
cases to follow. Each test case consists of two lines. The first line contains
two numbers n,m satisfying 0 ≤ m ≤ n ≤ 1000. Here, n is the total number of jobs
that must be completed before closing and m is the number of jobs that have
already been completed. The second line contains a list of m distinct integers
between 1 and n. These are the indices of the jobs that have already been
completed. Consecutive integers are separated by a single space.
Output

The output for each test case consists of two lines. The first line is a list of
the indices of the jobs assigned to the Chef. The second line is a list of the
indices of the jobs assigned to his assistant. Both lists must appear in
increasing order of indices and consecutive integers should be separated by a
single space. If either the Chef or the assistant is not assigned any jobs, then
their corresponding line should be blank.
Example

Input:
3
6 3
2 4 1
3 2
3 2
8 2
3 8

Output:
3 6
5
1

1 4 6
2 5 7

*/
int main()
{

    int m,n,cj,i,counter,ccount,acount;
    int visited[1001]={0};
    int jchefs[501]={0};
    int jassis[501]={0};
    int cases;
    bool cora;

    scanf("%d",&cases);

    while(cases--)
    {
        scanf("%d%d",&n,&m);

        for(i=0;i<m;i++)
        { scanf("%d",&cj);
            visited[cj]++;
        }


        counter=1;
        ccount=0;acount=0;
        cora=true;
        while(counter<=n)
        {
            if(visited[counter]!=0)
            {
                visited[counter]=0;
                counter++;
                continue;
            }
            if(cora)
            {
                jchefs[ccount++]=counter;
            }else
            {
                jassis[acount++]=counter;
            }
            cora=!cora;
            counter++;
        }
        for(i=0;i<ccount;i++){
            printf("%d ",jchefs[i]);
            jchefs[i]=0;
        }
        printf("\n");

        for(i=0;i<acount;i++){
            printf("%d ",jassis[i]);
            jassis[i]=0;
        }
        printf("\n");

    }

    return 0;
}
