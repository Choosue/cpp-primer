int main()
{
    int i = -1;
    const int ic = i;
    const int *pic = &ic;
    const int *const cpic = &ic;
    // int *const cpi = &ic;
    i = ic;
    pic = &ic;
    // cpi = pic;
    pic = cpic;
    cpic = &ic;
    ic = *cpic;
    return 0;
}