#include <stdio.h>

/*Lapindrome is defined as a string which when split in the middle, gives two halves having the same
 * characters and same frequency of each character. If there are odd number of characters in the
 * string, we ignore the middle character and check for lapindrome. For example gaga is a lapindrome,
 * since the two halves ga and ga have the same characters with same frequency. Also, abccab, rotor
 * and xyzxy are a few examples of lapindromes. Note that abbaab is NOT a lapindrome. The two halves
 *  contain the same characters but their frequencies do not match.
Your task is simple. Given a string, you need to tell if it is a lapindrome.
Input:

First line of input contains a single integer T, the number of test cases.

Each test is a single line containing a string S composed of only lowercase English alphabet.


Output:

For each test case, output on a separate line: "YES" if the string is a lapindrome and "NO" if i
t is not.

Constraints:

    1 ≤ T ≤ 100
    2 ≤ |S| ≤ 1000, where |S| denotes the length of S

Example:

Input:

6
gaga
abcde
rotor
xyzxy
abbaab
ababc


Output:

YES
NO
YES
YES
NO
NO

*/

int main()
{
    char c;
    char str[1000];
    int count=0,i=0;

    int cases;
    scanf("%d ",&cases);

    while(cases--)
    {
        count=0;
        i=0;
        int visited[26]={0};
        int arr[26]={0};
        c = getchar();
        while(c!='\n')
        {
            str[count]=c;
            count++;
            switch (visited[c%97]) {

            case 0:
                arr[c%97]++;
                visited[c%97]++;
                break;
            default:
                arr[c%97]--;
                visited[c%97]--;
                break;
            }
            c=getchar();
        }

        if(count%2==0)
        {
            for(i=0;i<26;i++)
            {
                if(arr[i]!=0)
                    break;
            }
            switch (i) {
            case 26:
                printf("YES\n");
                break;
            default:
                printf("NO\n");
                break;
            }
        }else
        {
            for(i=0;i<26;i++)
            {
                if(i==(str[(count/2)]%97))
                    continue;

                if(arr[i]!=0)
                    break;
            }
            switch (i) {
            case 26:
                printf("YES\n");
                break;
            default:
                printf("NO\n");
                break;
            }

        }

    }
    return 0;
}
