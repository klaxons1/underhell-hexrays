volatile LONG *__cdecl _updatetlocinfoEx_nolock(volatile LONG **a1, volatile LONG *lpAddend)
{
  volatile LONG *v2; // esi

  if ( !lpAddend || !a1 )
    return 0;
  v2 = *a1;
  if ( *a1 != lpAddend )
  {
    *a1 = lpAddend;
    __addlocaleref(lpAddend);
    if ( v2 )
    {
      __removelocaleref(v2);
      if ( !*v2 && v2 != (volatile LONG *)&unk_103FE210 )
        __freetlocinfo((int *)v2);
    }
  }
  return lpAddend;
}
