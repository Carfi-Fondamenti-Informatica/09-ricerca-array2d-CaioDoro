
bool match(const char *ptr1, const char* ptr2)
{
    // zero bytes at ends
    while (*ptr1 != 0 && *ptr2 != 0)
    {
        if (*ptr1 != *ptr2) {
            return false;
        }
        ++ptr1;
        ++ptr2;
    }
    return (*ptr1 == *ptr2);
}
