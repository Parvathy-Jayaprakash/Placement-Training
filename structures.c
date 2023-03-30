void main()
{
    struct employee
    {
        int id;
        char name[50];
    }e;
    e.id=2003;
    strcpy(e.name,"Jake");
    printf("%d  %s",e.id,e.name);       
}