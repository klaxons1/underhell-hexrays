char __thiscall sub_100B6780(int this, int a2, int a3)
{
  int v4; // eax
  int v6; // esi
  int v7; // edx
  int *v8; // ecx
  _DWORD *i; // eax
  _DWORD v10[2]; // [esp+Ch] [ebp-8h] BYREF

  v10[0] = a2;
  if ( sub_100B4A40((_WORD *)(this + 108), (int)v10) == -1 )
    return 0;
  v10[0] = a2;
  v4 = *(_DWORD *)(*(_DWORD *)(this + 112) + 16 * (unsigned __int16)sub_100B4A40((_WORD *)(this + 108), (int)v10) + 12);
  if ( !v4 )
    return 0;
  if ( *(_BYTE *)v4 && !a3 )
  {
    *(_BYTE *)v4 = 0;
    return 1;
  }
  v6 = *(_DWORD *)(v4 + 16);
  v7 = 0;
  if ( v6 <= 0 )
    return 0;
  v8 = (int *)(v4 + 4);
  for ( i = *(_DWORD **)(v4 + 4); a3 != *i; ++i )
  {
    if ( ++v7 >= v6 )
      return 0;
  }
  sub_100B40F0(v8, v7);
  return 1;
}
