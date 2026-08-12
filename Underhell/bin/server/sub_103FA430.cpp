double __thiscall sub_103FA430(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  _DWORD v9[1024]; // [esp+Ch] [ebp-1000h] BYREF

  v3 = this[2068];
  if ( v3 == -1 )
    return 0.0;
  v4 = &off_1061BE18[4 * (this[2068] & 0xFFF) + 1];
  if ( v4[1] != v3 >> 12 )
    return 0.0;
  v5 = *v4;
  if ( !*v4 )
    return 0.0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 68))(a2) != v5 )
    return 0.0;
  v6 = (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v5 + 624))(v5, v9, 1024);
  v7 = 0;
  if ( v6 <= 0 )
    return 0.0;
  while ( v9[v7] != a2 )
  {
    if ( ++v7 >= v6 )
      return 0.0;
  }
  return *(float *)&this[v7 + 1044];
}
