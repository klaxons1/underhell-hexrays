char __thiscall sub_10296D70(int this, int a2)
{
  int v3; // eax
  int v5; // eax

  v3 = dword_106DB118 + 56 * *(_DWORD *)(this + 56);
  if ( !v3 )
    return 0;
  if ( *(_DWORD *)(v3 + 4 * a2 + 16) )
  {
    sub_100374A0(*(_DWORD **)(this + 4), *(char **)(v3 + 4 * a2 + 16));
    sub_10039F40(*(int **)(this + 4), 171);
    return 1;
  }
  v5 = *(_DWORD *)(v3 + 4 * a2 + 4);
  if ( v5 == -1 )
    return 0;
  sub_10039F40(*(int **)(this + 4), v5);
  return 1;
}
