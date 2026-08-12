char __thiscall sub_1018D020(char *this, int a2, int a3)
{
  char *v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  bool v7; // zf
  int v8; // eax

  v3 = &this[36 * a3];
  v4 = *((_DWORD *)v3 + 170);
  if ( v4 == -1 )
    return 0;
  v5 = *((_DWORD *)v3 + 167);
  while ( 1 )
  {
    v6 = 3 * v4;
    v7 = a2 == *(_DWORD *)(v5 + 4 * v6);
    v8 = v5 + 4 * v6;
    if ( v7 )
      break;
    v4 = *(_DWORD *)(v8 + 8);
    if ( v4 == -1 )
      return 0;
  }
  return 1;
}
