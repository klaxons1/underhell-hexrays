int __thiscall sub_10109C80(int this, int a2, _BYTE *a3, int a4)
{
  int v5; // ecx
  _BYTE *i; // eax

  if ( !*(_BYTE *)(this + 20) )
    return 0;
  if ( (*(_WORD *)(*(_DWORD *)(this + 24) + 18) & 0x400) != 0 )
    return 1;
  v5 = 0;
  if ( a4 <= 0 )
    return 1;
  for ( i = a3; i[a2 - (_DWORD)a3] == *i; ++i )
  {
    if ( ++v5 >= a4 )
      return 1;
  }
  return 0;
}
