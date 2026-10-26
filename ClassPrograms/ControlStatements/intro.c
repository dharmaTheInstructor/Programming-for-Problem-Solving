/*
predefined Datatype:
 Integer - int, short, signed, unsigned, long
 Floating - float, double, long
 Chararcter - char, short

Array:
* Array is a derived datatype.
* Array is a collection of homogeneous/similar datatype elements with contineous memory location
* syntax for array declaration:
            <datatype> <array_name>[<no_of_elements>];

    Example:
            int subject[6];
            float per[64];
            char sec[5];
                 1 - A
                 2 - B
                 3 - C
                 4 - D
                 5 - \0
 * Initialization:
    - Array will be initiutalized in two ways:
        1. compiletime/static: will be done at declaration.
                    int subject[6]={12,16,28,45,6,60};
                    float per[5]={2.4,5.3,6.7,8.5,9};
                    char sec[5]={'A','B',,'C','D','\0'};
        2. Runtime/Dynamic: will be done at execution.
                    int subject[6];
                    int i;
                    for(i=0;i<=5;i++)
                    scanf("%d",&subject[i]);



*/