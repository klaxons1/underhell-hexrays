char __thiscall sub_101FA3E0(int this)
{
  int v2; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // esi

  v2 = *(_DWORD *)(this + 64);
  if ( !v2 )
    return 1;
  if ( (*(_BYTE *)(this + 6592) & 1) != 0 || *(_DWORD *)(this + 40) || *(_BYTE *)(this + 76) )
    return 0;
  v4 = *(_DWORD *)(v2 + 640);
  v5 = 0;
  if ( v4 <= 0 )
  {
LABEL_10:
    v8 = *(_DWORD *)(this + 6008);
    if ( !v8 )
      return 1;
    while ( (unsigned __int8)sub_101FA3E0(v8) )
    {
      v8 = *(_DWORD *)(v8 + 5980);
      if ( !v8 )
        return 1;
    }
  }
  else
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(this + 64);
      v7 = *(_DWORD *)(4 * v5 + *(_DWORD *)(v6 + 628));
      if ( (*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)v7 + 104))(
             v7,
             this,
             *(_DWORD *)(this + 5976) + *(_DWORD *)(4 * v5 + *(_DWORD *)(v6 + 768))) )
      {
        break;
      }
      if ( ++v5 >= v4 )
        goto LABEL_10;
    }
  }
  return 0;
}
