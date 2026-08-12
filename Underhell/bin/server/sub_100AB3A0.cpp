char __thiscall sub_100AB3A0(_DWORD *this, int a2)
{
  int v3; // esi
  char v4; // al
  int v5; // ecx
  int *v6; // ecx
  float v8[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( (*(_BYTE *)(this[1] + 248) & 1) == 0 )
    return 0;
  v3 = a2;
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
    return 1;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3);
  v8[0] = 0.0;
  v8[1] = 0.0;
  v8[2] = 0.0;
  if ( (v4 != 0 ? v3 : 0) == 0 )
    return 1;
  v5 = v4 != 0 ? v3 : 0;
  if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 876))(v5, this[1])
    || !(unsigned __int8)sub_10169370(v3, this[1], v8, 0.0) )
  {
    return 1;
  }
  v6 = (int *)(this[1] + 248);
  a2 = -2;
  sub_100332F0(v6, &a2);
  return 0;
}
