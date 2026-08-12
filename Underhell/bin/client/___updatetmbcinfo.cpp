volatile LONG *__updatetmbcinfo()
{
  _DWORD *v0; // edi
  volatile LONG *v1; // esi

  v0 = (_DWORD *)_getptd();
  if ( (dword_103FE0A0 & v0[28]) != 0 && v0[27] )
  {
    v1 = (volatile LONG *)v0[26];
  }
  else
  {
    _lock(13);
    v1 = (volatile LONG *)v0[26];
    if ( v1 != lpAddend )
    {
      if ( v1 && !InterlockedDecrement(v1) && v1 != (volatile LONG *)&unk_103FDB80 )
        sub_10034930((int)v1);
      v0[26] = lpAddend;
      v1 = lpAddend;
      InterlockedIncrement(lpAddend);
    }
    _unlock(13);
  }
  if ( !v1 )
    _amsg_exit(32);
  return v1;
}
