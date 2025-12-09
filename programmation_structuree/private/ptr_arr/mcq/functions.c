int val1, val2 val3;
    int myptrX, myptrY, myptr;
    myptrX = &val1;
    myptrY = &val2;
    val1 = 7;
    val2 = 2;
    val3 = 3;
    myptr = &val3
    *myptr = val1 + val2;
    *myptrX = *myptr;
    myptrX = &val2;

    /* V2 * */
    *myptr = val2 + val3;
    *myptrX = *myptr;
    myptrX = &val2;
    /* V3 * */
    *myptY = val1 + val2;
    *myptrX = *myptrY;
    myptrX = &val3;
    printf("%i", *myptrY);
