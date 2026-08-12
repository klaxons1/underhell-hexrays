char __thiscall sub_10094DF0(_DWORD *this)
{
  int v2; // eax
  unsigned __int8 (__thiscall *v3)(_DWORD *, _DWORD *); // edx
  int v4; // eax
  _DWORD *v5; // eax
  _DWORD v7[5]; // [esp+4h] [ebp-24h] BYREF
  unsigned int v8; // [esp+18h] [ebp-10h]
  int v9; // [esp+20h] [ebp-8h]
  int v10; // [esp+24h] [ebp-4h] BYREF

  if ( this[1089] )
    return 0;
  if ( sub_10023D10(this, 64) )
    return 0;
  v2 = this[581];
  if ( v2 != 1 && v2 != 2 )
    return 0;
  v3 = *(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD *))(*this + 2324);
  v8 = 15;
  v7[4] = 0;
  LOBYTE(v7[0]) = 0;
  v9 = 0;
  v10 = -1;
  if ( !v3(this, v7) )
  {
    if ( v8 >= 0x10 )
      sub_10184660(v7[0]);
    return 0;
  }
  v4 = sub_1026A890(&v10);
  if ( v4 )
    this[1093] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
  else
    this[1093] = -1;
  v5 = (_DWORD *)v7[0];
  if ( v8 < 0x10 )
    v5 = v7;
  sub_10092D30(this, (int)v5, v9);
  if ( v8 >= 0x10 )
    sub_10184660(v7[0]);
  return 1;
}
