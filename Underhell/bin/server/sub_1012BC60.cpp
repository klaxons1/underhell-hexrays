char __thiscall sub_1012BC60(_DWORD *this, int a2)
{
  _DWORD *v2; // eax

  if ( !a2 )
    return 0;
  v2 = (_DWORD *)this[16385];
  if ( !v2 )
    return 0;
  while ( a2 != *v2 )
  {
    v2 = (_DWORD *)v2[3];
    if ( !v2 )
      return 0;
  }
  return 1;
}
