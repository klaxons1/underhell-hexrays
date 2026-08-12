int __thiscall sub_101E5A60(float *this, int a2)
{
  float *v3; // edi
  int result; // eax
  _DWORD *v5; // ebx
  int v6; // eax
  double v7; // st7
  double v8; // st7
  _BYTE *v9; // eax
  double v10; // st7
  float v11; // [esp+20h] [ebp-84h]
  __int64 v12; // [esp+20h] [ebp-84h]
  float v13; // [esp+28h] [ebp-7Ch]
  float v14; // [esp+28h] [ebp-7Ch]
  int v15; // [esp+38h] [ebp-6Ch] BYREF
  float v16; // [esp+3Ch] [ebp-68h]
  float v17; // [esp+40h] [ebp-64h]
  float v18; // [esp+44h] [ebp-60h]
  float v19; // [esp+6Ch] [ebp-38h]
  float v20[3]; // [esp+88h] [ebp-1Ch] BYREF
  int v21[3]; // [esp+94h] [ebp-10h] BYREF
  float v22; // [esp+A0h] [ebp-4h]
  int savedregs; // [esp+A4h] [ebp+0h] BYREF

  if ( this && (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 320))(this) )
    v3 = this;
  else
    v3 = 0;
  v20[0] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             -5.0,
             -10.0);
  v20[1] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             5.0,
             10.0);
  v20[2] = 0.0;
  sub_100F7A60(this, v20);
  sub_1023D4B0(16, a2 + 12, 400, 0.2, (int)v3, 0, 0);
  result = sub_101E3110(v3, 4u, 0, 4u);
  v5 = *(_DWORD **)(a2 + 76);
  if ( v5 )
  {
    sub_100F5A30(v3, (int)v21, 0, 0);
    off_10689714();
    v6 = *((_DWORD *)v3 + 63) >> 12;
    v22 = *(float *)(dword_106BB8D4 + 44);
    if ( (v6 & 1) != 0 )
      sub_100DAFD0((int)v3);
    v13 = v3[120] * v3[120] + v3[119] * v3[119] + v3[121] * v3[121];
    v7 = off_10689708(v13);
    v8 = v7 * 0.0099999998 * v22;
    v22 = v8;
    if ( v8 < *(float *)(dword_106BB8D4 + 44) )
      goto LABEL_12;
    if ( ((_DWORD)v3[63] & 0x1000) != 0 )
    {
      sub_100DAFD0((int)v3);
      v8 = v22;
    }
    if ( v3[120] * *(float *)&v21[1] + v3[119] * *(float *)v21 + v3[121] * *(float *)&v21[2] < 0.0 )
LABEL_12:
      v8 = *(float *)(dword_106BB8D4 + 44);
    v11 = v8;
    sub_10248110((int)this, (int)this, v11, 128, 0);
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v5 + 284))(v5) )
    {
      if ( ((_DWORD)v3[63] & 0x1000) != 0 )
        sub_100DAFD0((int)v3);
      v14 = v3[121] * v3[121] + v3[119] * v3[119] + v3[120] * v3[120];
      if ( *(float *)(dword_106E0734 + 44) + 1.0 <= off_10689708(v14) )
      {
        v19 = 100.0;
        sub_102DEF10(20.0);
      }
      sub_1023C380((int)"HL2Player.kick_body", 0.0, 0);
      sub_10247F80(&v15);
    }
    else
    {
      sub_1023C380((int)"HL2Player.kick_wall", 0.0, 0);
    }
    v9 = (_BYTE *)__RTDynamicCast(
                    (int)v5,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                    (int)&CBasePropDoor `RTTI Type Descriptor',
                    0);
    v22 = *(float *)&v9;
    if ( v9 && !v9[1720] && v9[1730] )
      (*(void (__thiscall **)(float, float *, float *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v9 + 852))(
        COERCE_FLOAT(LODWORD(v22)),
        this,
        this,
        0,
        *(_DWORD *)(a2 + 24),
        *(_DWORD *)(a2 + 28),
        *(_DWORD *)(a2 + 32));
    HIDWORD(v12) = this;
    LODWORD(v12) = this;
    sub_1010DD80(v5 + 194, v12, 0.0);
    sub_10248690((int)&v15, (int)v21, a2 + 12, 1.0);
    v10 = *(float *)(dword_106BB91C + 44);
    v16 = v16 * v10;
    v17 = v17 * v10;
    v18 = v10 * v18;
    sub_100E8760(v5, (int)&v15, (int)v21, a2);
    sub_10248230();
    sub_10023860((int)&savedregs, (int)&v15, (float *)a2, (float *)(a2 + 12), v21);
    result = (*(int (__thiscall **)(_DWORD *))(*v5 + 288))(v5);
    if ( result )
      return (*(int (__thiscall **)(int, float *, int, const char *, int *))(*(_DWORD *)off_10627F88 + 120))(
               off_10627F88,
               v3,
               1,
               "weapon_kick",
               &v15);
  }
  return result;
}
