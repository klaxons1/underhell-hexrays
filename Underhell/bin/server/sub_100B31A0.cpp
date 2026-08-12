bool __thiscall sub_100B31A0(_DWORD *this, float *a2, float *a3)
{
  int v4; // eax
  int v5; // edi
  int v6; // eax
  float *v7; // eax
  double v9; // st7
  float v10; // [esp+0h] [ebp-30h]
  float v11; // [esp+4h] [ebp-2Ch]
  float v12[3]; // [esp+18h] [ebp-18h] BYREF
  int v13[3]; // [esp+24h] [ebp-Ch] BYREF
  float v14; // [esp+38h] [ebp+8h]

  v4 = this[1];
  if ( v4 )
    *(_DWORD *)(v4 + 2716) |= 8u;
  v5 = this[1];
  if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
    sub_100DAE60(this[1]);
  *(float *)v13 = *(float *)(v5 + 580) - *a2;
  *(float *)&v13[1] = *(float *)(v5 + 584) - a2[1];
  *(float *)&v13[2] = *(float *)(v5 + 588) - a2[2];
  off_10689714();
  if ( sub_1007EF40(*(_DWORD **)(this[1] + 2588), a3, (float *)v13, 120.0, 120.0, COERCE_FLOAT(1)) )
    return 1;
  v6 = sub_100B2C20(this, a2);
  if ( v6 != -1 )
  {
    v7 = sub_100B2900(this, v12, v6);
    *a3 = *v7;
    a3[1] = v7[1];
    a3[2] = v7[2];
    return 1;
  }
  v14 = sub_100737B0(*(_DWORD *)(this[1] + 1676));
  v9 = sub_100737B0(*(_DWORD *)(this[1] + 1676));
  v11 = v14 + v14;
  v10 = v9 * 4.0;
  return sub_1007EF40(*(_DWORD **)(this[1] + 2588), a3, (float *)v13, v10, v11, COERCE_FLOAT(1)) != 0;
}
