int __thiscall sub_1007E560(int this, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v7; // esi
  int i; // eax
  int v9; // eax

  if ( (unsigned __int16)a2 >= *(int *)(this + 36) )
    return -1;
  if ( (unsigned int)(unsigned __int16)a2 > *(_DWORD *)(this + 60) )
    return -1;
  v4 = *(_DWORD *)(this + 32);
  v5 = 36 * (unsigned __int16)a2;
  if ( *(unsigned __int16 *)(v4 + v5 + 32) == (unsigned __int16)a2
    && *(unsigned __int16 *)(v4 + v5 + 34) != (unsigned __int16)a2 )
  {
    return -1;
  }
  if ( *(_WORD *)(*(_DWORD *)(this + 32) + v5 + 20) == 0xFFFF )
    return -1;
  v7 = 0;
  for ( i = *(unsigned __int16 *)(*(int (__cdecl **)(int))(this + 176))(a2);
        i != 0xFFFF;
        i = *(unsigned __int16 *)(*(_DWORD *)(this + 140) + v9 + 10) )
  {
    v9 = 12 * i;
    *(_DWORD *)(a3 + 4 * v7++) = *(_DWORD *)(v9 + *(_DWORD *)(this + 140));
    if ( v7 >= 128 )
      break;
  }
  return v7;
}
