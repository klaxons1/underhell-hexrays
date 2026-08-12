char __thiscall sub_1016FD50(int this)
{
  int v1; // edi
  int v2; // edx
  int v4; // edx
  int *v5; // ecx
  int v6; // ebx
  int v7; // esi
  _DWORD *v8; // eax

  v1 = *(unsigned __int16 *)(this + 64);
  if ( v1 == 0xFFFF )
    return 0;
  v2 = *(_DWORD *)(this + 52);
  while ( *(_DWORD *)(*(_DWORD *)(v2 + 8 * (unsigned __int16)v1) + 2012) )
  {
    v1 = *(unsigned __int16 *)(v2 + 8 * (unsigned __int16)v1 + 6);
    if ( v1 == 0xFFFF )
      return 0;
  }
  v4 = *(_DWORD *)(this + 52);
  v5 = (int *)(this + 52);
  v6 = 8 * (unsigned __int16)v1;
  v7 = *(_DWORD *)(v6 + v4);
  if ( v7 )
  {
    sub_1003A300(v5, v1);
    *(_WORD *)(*(_DWORD *)(this + 52) + v6 + 6) = *(_WORD *)(this + 68);
    *(_WORD *)(this + 68) = v1;
    sub_10036200((unsigned __int16 *)v7);
    if ( (*(_DWORD *)(v7 + 1980) & 0x8000000) != 0 )
    {
      if ( !*(_BYTE *)(v7 + 2088) )
        sub_100EA4D0((_DWORD *)(v7 + 444), 0, 0, 0);
      v8 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
      sub_1009C130(off_103DCD78, *v8);
    }
    sub_1016FC20((int)&dword_103E9D04, v7);
    (**(void (__thiscall ***)(int, _DWORD))v7)(v7, 0);
    sub_1022FD10(v7);
  }
  return 1;
}
