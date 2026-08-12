int __thiscall sub_10109BF0(int this, int a2, _DWORD *a3, int a4)
{
  int v5; // eax
  _DWORD *i; // edx

  if ( !*(_BYTE *)(this + 20) )
    return 0;
  if ( (*(_WORD *)(*(_DWORD *)(this + 24) + 18) & 0x400) != 0 )
    return 1;
  v5 = 0;
  if ( a4 <= 0 )
    return 1;
  for ( i = a3; *(_DWORD *)((char *)i + a2 - (_DWORD)a3) == *i; ++i )
  {
    if ( ++v5 >= a4 )
      return 1;
  }
  sub_10109720(
    this,
    "int differs (net %i pred %i) diff(%i)\n",
    a3[v5],
    *(_DWORD *)(a2 + 4 * v5),
    *(_DWORD *)(a2 + 4 * v5) - a3[v5]);
  return 0;
}
