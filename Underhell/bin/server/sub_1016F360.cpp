int __thiscall sub_1016F360(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // esi
  double v7; // st7
  int v8; // ecx
  int (__thiscall *v9)(int, const char *, _DWORD); // eax
  int v10; // esi
  double v11; // st7
  int v12; // eax
  float v14[17]; // [esp+20h] [ebp-54h] BYREF
  int v15; // [esp+64h] [ebp-10h]
  int v16; // [esp+68h] [ebp-Ch]
  float v17; // [esp+6Ch] [ebp-8h]
  int v18; // [esp+70h] [ebp-4h]

  memset(v14, 0, sizeof(v14));
  v2 = sub_1016ECF0(this, this[6]);
  v17 = -1.0;
  v18 = v2;
  v16 = -1;
  v15 = -1;
  if ( v2 == 0xFFFF )
    return (*(int (__thiscall **)(_DWORD *, int))(*this + 24))(this, 1);
  do
  {
    v3 = this[101];
    v4 = v3 + 20 * (unsigned __int16)v18 + 8;
    if ( *(_DWORD *)v4 >= this[13] )
      break;
    v5 = *(_DWORD *)(v3 + 20 * (unsigned __int16)v18 + 16);
    if ( !strcmp((const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5), "hltv_rank_entity") )
    {
      v6 = (*(int (__thiscall **)(_DWORD, const char *, _DWORD))(**(_DWORD **)(v4 + 8) + 24))(
             *(_DWORD *)(v4 + 8),
             "index",
             0);
      if ( v6 < 17 )
      {
        v7 = ((double (__stdcall *)(const char *, _DWORD))*(_DWORD *)(**(_DWORD **)(v4 + 8) + 28))("rank", 0.0)
           + v14[v6];
        v14[v6] = v7;
        if ( v17 < v7 )
        {
          v8 = *(_DWORD *)(v4 + 8);
          v17 = v7;
          v9 = *(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v8 + 24);
          v16 = v6;
          v15 = v9(v8, "target", 0);
        }
      }
    }
    v18 = (unsigned __int16)sub_1016DF30(this + 100, v18);
  }
  while ( v18 != 0xFFFF );
  v10 = v16;
  if ( v16 == -1 )
    return (*(int (__thiscall **)(_DWORD *, int))(*this + 24))(this, 1);
  v11 = RandomFloat(0.0, 1.0);
  v12 = 20;
  if ( v11 <= 0.5 )
    v12 = -20;
  return (*(int (__thiscall **)(_DWORD *, int, int, int, int, int, _DWORD))(*this + 36))(
           this,
           v10,
           v15,
           112,
           20,
           v12,
           0);
}
