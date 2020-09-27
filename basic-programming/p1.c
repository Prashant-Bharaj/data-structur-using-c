/*
You are conducting a contest at your college. This contest consists of two problems and  participants. You know the problem that a candidate will solve during the contest.

You provide a balloon to a participant after he or she solves a problem. There are only green and purple-colored balloons available in a market. Each problem must have a balloon associated with it as a prize for solving that specific problem. You can distribute balloons to each participant by performing the following operation:

Use green-colored balloons for the first problem and purple-colored balloons for the second problem
Use purple-colored balloons for the first problem and green-colored balloons for the second problem
You are given the cost of each balloon and problems that each participant solve. Your task is to print the minimum price that you have to pay while purchasing balloons.
*/

#include <stdio.h>
int main()
{
    int n,purple_cost, green_cost, cost1 = 0, cost2 = 0, i,j,no_of_participants;
    scanf("%d", &n);
    while (n--)
    {
		cost1 = 0, cost2 = 0;
        scanf("%d %d", &green_cost, &purple_cost);
        scanf("%d", &no_of_participants);
		    int arr[no_of_participants][2];
        for (i = 0; i < no_of_participants; i++)
        {
            for (j = 0; j < 2; j++)
            {
                scanf("%d", &arr[i][j]);
                if (j == 0)
                {
                    cost1 += arr[i][0] * green_cost;
                    cost2 += arr[i][0] * purple_cost;
                }
                else
                {
                    cost1 += arr[i][1] * purple_cost;
                    cost2 += arr[i][1] * green_cost;
                }
            }
        }
		if(cost1>cost2)
			printf("%d", cost2);
		else
			printf("%d", cost1);
		printf("\n");
    }
	return 0;
}