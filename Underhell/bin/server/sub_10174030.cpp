int __thiscall sub_10174030(_DWORD *this, int a2, int *a3)
{
  int result; // eax
  char *v5; // eax
  int *v6; // ecx

  result = this[a2];
  if ( result != *a3 )
  {
    v5 = (char *)(this - 1232);
    if ( *((_BYTE *)this - 4844) )
    {
      v5[88] |= 1u;
      result = *a3;
      this[a2] = *a3;
    }
    else
    {
      v6 = (int *)*((_DWORD *)v5 + 6);
      if ( v6 )
        sub_100194B0(v6, (_WORD)this + 4 * a2 - (_WORD)v5);
      result = *a3;
      this[a2] = *a3;
    }
  }
  return result;
}
