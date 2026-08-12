unsigned int sub_102AF3A0()
{
  unsigned int v0; // ecx
  int *v1; // edx

LABEL_1:
  v0 = 0;
  v1 = &dword_10489AF0;
  while ( *v1 || _InterlockedCompareExchange(v1, 1, 0) )
  {
    ++v0;
    ++v1;
    if ( v0 >= 0x20 )
    {
      ThreadSleep(0);
      goto LABEL_1;
    }
  }
  return v0;
}
