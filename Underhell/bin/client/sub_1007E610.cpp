char __thiscall sub_1007E610(int this, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int v6; // ecx
  int v8; // eax
  int v9; // eax

  if ( (unsigned __int16)a2 >= *(int *)(this + 36) )
    return 0;
  if ( (unsigned int)(unsigned __int16)a2 > *(_DWORD *)(this + 60) )
    return 0;
  v6 = *(_DWORD *)(this + 32) + 36 * (unsigned __int16)a2;
  if ( *(unsigned __int16 *)(v6 + 32) == (unsigned __int16)a2 && *(unsigned __int16 *)(v6 + 34) != (unsigned __int16)a2 )
    return 0;
  if ( !a3 )
    return 0;
  if ( a4 )
  {
    if ( *a4 != 0xFFFF )
    {
      v8 = *(unsigned __int16 *)(*(_DWORD *)(this + 140) + 12 * *a4 + 10);
      if ( v8 != 0xFFFF )
      {
        if ( a5 )
          *a5 = v8;
        *a3 = *(_DWORD *)(*(_DWORD *)(this + 140) + 12 * v8);
        return 1;
      }
    }
    return 0;
  }
  v9 = *(unsigned __int16 *)(*(int (__cdecl **)(int))(this + 176))(a2);
  if ( v9 == 0xFFFF )
    return 0;
  *a3 = *(_DWORD *)(*(_DWORD *)(this + 140) + 12 * v9);
  if ( a5 )
    *a5 = v9;
  return 1;
}
