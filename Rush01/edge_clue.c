void    edge_clue_init(int *arr)
{
    arr[6] = { X , a, b, c, d , Y }

    if (arr[0] == 4)
    {
        arr[1] = 1;
        arr[2] = 2;
        arr[3] = 3;
        arr[4] = 4;
    }
    if (arr[5] == 4)
    {
        arr[4] = 1;
        arr[3] = 2;
        arr[2] = 3;
        arr[1] = 4;
    }
    if (arr[0] == 1)
        arr[1] = 4;
    if (arr[5] == 1)
        arr[4] = 4;
    if (arr[0] == 2 && arr[5] == 3)
        arr[2] = 4;
    if (arr[0] == 3 && arr[5] == 2)
        arr[3] = 4;
    if (arr[0] == 1 && arr[5] == 2)
        arr[4] = 3;
    if (arr[0] == 2 && arr[5] == 1)
        arr[1] = 3;
    if (arr[0] == 1 && arr[5] == 3)
        arr[4] = 2;
    if (arr[0] == 3 && arr[5] == 1)
        arr[1] = 2;
}
