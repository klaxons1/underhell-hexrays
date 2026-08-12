unsigned int _ioterm()
{
  int *v0; // edi
  unsigned int result; // eax
  struct _RTL_CRITICAL_SECTION *v2; // esi

  v0 = dword_10709BA0;
  do
  {
    result = *v0;
    if ( *v0 )
    {
      if ( result < result + 2048 )
      {
        v2 = (struct _RTL_CRITICAL_SECTION *)(result + 12);
        do
        {
          if ( v2[-1].SpinCount )
            DeleteCriticalSection(v2);
          v2 = (struct _RTL_CRITICAL_SECTION *)((char *)v2 + 64);
        }
        while ( (unsigned int)&v2[-1].OwningThread < *v0 + 2048 );
      }
      result = sub_10184660(*v0);
      *v0 = 0;
    }
    ++v0;
  }
  while ( (int)v0 < (int)&dword_10709CA0 );
  return result;
}
