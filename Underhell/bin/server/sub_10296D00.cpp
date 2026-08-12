bool __thiscall sub_10296D00(int *this, int a2, int a3)
{
  int v4; // eax
  int v5; // eax

  if ( a2 == -1 )
    return 0;
  v4 = dword_106DB118 + 56 * a2;
  if ( !v4 )
    return 0;
  if ( *(_DWORD *)(v4 + 4 * a3 + 16) )
    return sub_100BDF40(this[1], *(char **)(v4 + 4 * a3 + 16)) != -1;
  v5 = *(_DWORD *)(v4 + 4 * a3 + 4);
  return v5 != -1 && sub_10022CA0((_DWORD *)this[1], v5);
}
