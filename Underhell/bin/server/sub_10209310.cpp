char __thiscall sub_10209310(int this, int a2, int a3, int a4)
{
  __int16 v4; // ax
  int v5; // esi
  int *v6; // edi
  unsigned int v7; // eax
  int v8; // ecx

  v4 = *(_WORD *)(this + 356);
  if ( (v4 & 4) == 0 )
    return 0;
  if ( (v4 & 2) == 0 )
    return 0;
  if ( (*(_BYTE *)(this + 356) & 1) == 0 )
    return 0;
  v5 = 0;
  v6 = (int *)(this + 1552);
  if ( *(int *)(this + 1552) <= 0 )
    return 0;
  while ( 1 )
  {
    v7 = *(_DWORD *)(sub_101BCB30(v6, v5) + 4);
    if ( v7 != -1 && off_1061BE18[4 * (v7 & 0xFFF) + 2] == v7 >> 12 )
    {
      v8 = off_1061BE18[4 * (v7 & 0xFFF) + 1];
      if ( v8 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int, int, int, int))(*(_DWORD *)v8 + 48))(v8, a2, a3, a4) )
          break;
      }
    }
    if ( ++v5 >= *v6 )
      return 0;
  }
  return 1;
}
