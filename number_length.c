int number_length(int number)
{
    int i;
    i = 0;
    while (number)
    {
        i++;
        number /= 10; 
    }
    return (i);
}