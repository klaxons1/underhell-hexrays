int __thiscall sub_100D51F0(int this, char a2)
{
  int v3; // ecx
  int v4; // edi
  int v5; // eax
  unsigned int v6; // ebx
  int *v7; // ecx
  int result; // eax
  int v9; // [esp+8h] [ebp-4h]

  v9 = 0;
  if ( *(_DWORD *)(this + 1120) != -1
    && off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 2] == *(_DWORD *)(this + 1120) >> 12 )
  {
    v3 = off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 1];
    if ( v3 )
    {
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 288))(v3);
      if ( v4 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) )
          v9 = sub_101E7EA0(*(_DWORD *)(this + 1128));
      }
    }
  }
  if ( a2 )
  {
    v5 = *(_DWORD *)(this + 192);
    v6 = v5 & 0xFFFFFFDF;
    if ( v5 != (v5 & 0xFFFFFFDF) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v7 = *(int **)(this + 24);
        if ( v7 )
          sub_100194B0(v7, 192);
      }
      *(_DWORD *)(this + 192) = v6;
    }
    if ( *(_DWORD *)(this + 24) )
      **(_DWORD **)(this + 24) |= 0x80u;
    result = sub_100D8500(this);
    if ( v9 )
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 864))(v9, 32);
  }
  else
  {
    result = sub_100EAB80(this, 32);
    if ( v9 )
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 860))(v9, 32);
  }
  return result;
}
