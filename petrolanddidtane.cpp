// C program to find circular tour for a truck
#include <stdio.h>
 
// A petrol pump has petrol and distance to next petrol pump
struct petrolPump
{
  int petrol;
  int distance;
};
int printtour(struct petrolpump arr[], int n)
{
	int start = 0;
	int end =  1;
    int curr_petrol = arr[start].petrol - arr[start].distance;
    while (end != start || curr_petrol < 0)
    {
        // If curremt amount of petrol in truck becomes less than 0, then
        // remove the starting petrol pump from tour
        while (curr_petrol < 0 && start != end)
        {
            // Remove starting petrol pump. Change start
            curr_petrol -= arr[start].petrol - arr[start].distance;
            start = (start + 1)%n;
 
            // If 0 is being considered as start again, then there is no
            // possible solution
            if (start == 0)
               return -1;
        }
 
        // Add a petrol pump to current tour
        curr_petrol += arr[end].petrol - arr[end].distance;
 
        end = (end + 1)%n;
    }
 
    // Return starting point
    return start;
}
}
int main()
{
    struct petrolPump arr[] = {{6, 4}, {3, 6}, {7, 3}};
 
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = printTour(arr, n);
 
    (start == -1)? printf("No solution"): printf("Start = %d", start);
 
    return 0;
}
