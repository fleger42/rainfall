char* p()
{
    fflush(stdout);
    void var_50;
    gets(&var_50);
    if ((__return_addr & 0xb0000000) != 0xb0000000)
    {
        puts(&var_50);
        return strdup(&var_50);
    }
    printf("(%p)\n", __return_addr);
    _exit(1);
    /* no return */
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    return p();
}