BOOL __stdcall sub_1021CF60(_DWORD *a1, int a2)
{
  _BYTE *v2; // eax

  if ( a2 == 4 )
    return *a1 == 0;
  v2 = a1;
  if ( a1 >= (_DWORD *)((char *)a1 + a2) )
    return 1;
  while ( !*v2++ )
  {
    if ( v2 >= (_BYTE *)a1 + a2 )
      return 1;
  }
  return 0;
}
