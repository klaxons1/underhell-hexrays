void __thiscall sub_1016FE40(int this)
{
  double v2; // st7
  int v3; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // ebx
  int v7; // ecx
  int v8; // esi
  int v9; // eax
  int v10; // [esp+14h] [ebp-8h]
  float v11; // [esp+18h] [ebp-4h]

  if ( !*(_WORD *)(this + 70)
    || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 104))(dword_1041315C) )
  {
    return;
  }
  v2 = *((float *)off_103DC81C + 4);
  v11 = *((float *)off_103DC81C + 4);
  dword_10443C4C = ((_BYTE)dword_10443C4C + 1) & 0x1F;
  if ( 0.0 != v2 )
  {
    v6 = *(unsigned __int16 *)(this + 64);
    if ( v6 == 0xFFFF )
      return;
    while ( 1 )
    {
      v7 = *(_DWORD *)(this + 52);
      v8 = *(_DWORD *)(v7 + 8 * (unsigned __int16)v6);
      v10 = *(unsigned __int16 *)(v7 + 8 * (unsigned __int16)v6 + 6);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 748))(v8)
        && (*(unsigned __int8 (__thiscall **)(int, float, int))(*(_DWORD *)v8 + 752))(
             v8,
             COERCE_FLOAT(LODWORD(v11)),
             dword_10443C4C) )
      {
        if ( sub_1016B7A0((_DWORD *)v8) )
          goto LABEL_15;
        v9 = *(_DWORD *)(v8 + 1980);
        if ( (v9 & 0x2000) != 0 )
          goto LABEL_15;
        *(float *)(v8 + 1984) = *((float *)off_103DC81C + 3);
        *(_DWORD *)(v8 + 1980) = v9 & 0xFFFFFF7F;
      }
      sub_1016FC90((int *)this, v6);
LABEL_15:
      v6 = v10;
      if ( v10 == 0xFFFF )
        return;
    }
  }
  v3 = *(unsigned __int16 *)(this + 64);
  if ( v3 != 0xFFFF )
  {
    v4 = *(_DWORD *)(this + 52);
    do
    {
      v5 = 8 * (unsigned __int16)v3;
      sub_1016B7A0(*(_DWORD **)(v4 + v5));
      v4 = *(_DWORD *)(this + 52);
      v3 = *(unsigned __int16 *)(v4 + v5 + 6);
    }
    while ( v3 != 0xFFFF );
  }
}
