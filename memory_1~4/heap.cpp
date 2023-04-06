//Memory leak
//Memory fragmentation 방지

int main()
{
    int *ip;
    ip = new int;
    *ip = 100;
    delete ip;

    return 0;
}


