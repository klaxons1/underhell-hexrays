void __thiscall sub_100F4B90(int this, int a2)
{
  _BYTE *v2; // ebx
  double v4; // st7
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // eax
  float *v8; // esi
  _DWORD *v9; // [esp+4h] [ebp-C4h]
  float v10; // [esp+Ch] [ebp-BCh]
  float v11; // [esp+Ch] [ebp-BCh]
  _BYTE v12[84]; // [esp+18h] [ebp-B0h] BYREF
  int v13[20]; // [esp+6Ch] [ebp-5Ch] BYREF
  _BYTE v14[4]; // [esp+BCh] [ebp-Ch] BYREF
  double v15; // [esp+C0h] [ebp-8h] BYREF

  v2 = (_BYTE *)a2;
  if ( (*(_BYTE *)(a2 + 356) & 0x28) == 0 && v2 != (_BYTE *)sub_100F4030((_DWORD *)this) )
  {
    if ( v2[225] )
    {
      v4 = *(float *)(dword_106B31C8 + 12);
      if ( v4 > *(float *)(this + 2116) )
      {
        if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
          sub_100DAFD0(this);
        sub_100D7A40((float *)(this + 476));
        if ( v4 > 100.0 )
        {
          if ( sub_1026A890(this + 2136) )
          {
            v5 = sub_101C46A0();
            sub_1007A030((int)v12, v5);
            sub_10247FD0();
            sub_104222B0(this + 728, v14, 0, 0);
            v6 = sub_1026A890(this + 2136);
            sub_10248110(this, v6, 1.0, 128, 0);
            v9 = sub_10019640((_DWORD *)this);
            v7 = sub_10019660((_DWORD *)this);
            sub_10248690((int)v13, (int)v7, (int)v9, 1.0);
            sub_100E8760(v2, (int)v13, (int)v14, (int)v12);
            sub_10248230();
          }
          v15 = *(float *)(dword_106B31C8 + 12) + 1.0;
          sub_100F4650((float *)(this + 2116), &v15);
        }
      }
    }
    if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
      sub_100DAFD0(this);
    if ( !*(_BYTE *)(this + 2108) )
    {
      v10 = *(float *)(this + 476) * *(float *)(this + 476)
          + *(float *)(this + 480) * *(float *)(this + 480)
          + *(float *)(this + 484) * 0.45 * (*(float *)(this + 484) * 0.45);
      if ( off_10689708(v10) <= 60.0 )
      {
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        sub_1023D4B0(8, this + 580, (int)(*(float *)(this + 2128) * 2.5), 0.30000001, this, 0, 0);
        *(_BYTE *)(this + 2108) = 1;
      }
    }
    if ( (*(_BYTE *)(this + 256) & 1) == 0 )
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 1160))(this);
    if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
      sub_100DAFD0(this);
    v11 = *(float *)(this + 484) * *(float *)(this + 484)
        + *(float *)(this + 476) * *(float *)(this + 476)
        + *(float *)(this + 480) * *(float *)(this + 480);
    v8 = (float *)(this + 864);
    v15 = off_10689708(v11) * 0.005;
    sub_10045730(v8, &v15);
    if ( *v8 <= 1.0 )
    {
      if ( *v8 < 0.5 )
      {
        a2 = 0;
        sub_1002AB40(v8, &a2);
      }
    }
    else
    {
      a2 = 1;
      sub_1002AB40(v8, &a2);
    }
  }
}
