#include <stdio.h>
#include <math.h>
int main() 
{
    int num, original_num, remainder, n = 0, result = 0, power;
    printf("Enter an integer: ");
    scanf("%d", &num);
    original_num = num;
    while (original_num != 0) 
	{
        original_num /= 10;
        ++n;
    }
    original_num = num;
    while (original_num != 0)
	 {
        remainder = original_num % 10;
        power = round(pow(remainder, n));
        result += power;
        original_num /= 10;
    }
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}
