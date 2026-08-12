int __thiscall sub_10109B90(int this, int a2, _WORD *a3, int a4)
{
  int v5; // ecx
  _WORD *i; // eax

  if ( !*(_BYTE *)(this + 20) )
    return 0;
  if ( (*(_WORD *)(*(_DWORD *)(this + 24) + 18) & 0x400) != 0 )
    return 1;
  v5 = 0;
  if ( a4 <= 0 )
    return 1;
  for ( i = a3; *(_WORD *)((char *)i + a2 - (_DWORD)a3) == *i; ++i )
  {
    if ( ++v5 >= a4 )
      return 1;
  }
  return 0;
}
