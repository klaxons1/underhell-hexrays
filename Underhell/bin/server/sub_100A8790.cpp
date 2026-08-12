bool __thiscall sub_100A8790(_DWORD *this, _DWORD *a2)
{
  int v4; // esi

  if ( this[233] == 2 )
    return 1;
  if ( !a2[2] || !*a2 )
    return 1;
  v4 = sub_100D7680(*a2);
  if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 876))(v4, a2[2])
    && (*(unsigned __int8 (__thiscall **)(int, _DWORD, int, _DWORD))(*(_DWORD *)v4 + 548))(v4, a2[2], 16449, 0)
    && (*(unsigned __int8 (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v4 + 1432))(v4, a2[2], 0) )
  {
    return this[233] == 1;
  }
  else
  {
    return this[233] == 0;
  }
}
