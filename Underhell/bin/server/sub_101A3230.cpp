bool __thiscall sub_101A3230(int this, float *a2, float *a3, float a4, int a5)
{
  int v7; // eax
  float *v8; // edi
  double v9; // st4
  double v10; // st6
  double v11; // st4
  double v12; // st5
  double v13; // st6
  double v14; // st7
  _DWORD *v15; // edi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  float v20; // [esp+Ch] [ebp-5Ch]
  int v21[14]; // [esp+18h] [ebp-50h] BYREF
  float v22; // [esp+50h] [ebp-18h]
  float v23; // [esp+54h] [ebp-14h]
  float v24; // [esp+58h] [ebp-10h]
  int v25; // [esp+5Ch] [ebp-Ch] BYREF
  float v26; // [esp+60h] [ebp-8h]
  float v27; // [esp+64h] [ebp-4h]
  float v28; // [esp+78h] [ebp+10h]

  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this)
    || !*(_BYTE *)(this + 3837)
    || LOBYTE(a4) && *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 3888) )
  {
    return 0;
  }
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  v8 = (float *)v7;
  if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
    sub_100DAE60(v7);
  v9 = v8[146] - *(float *)(this + 584);
  v10 = v9 * v9;
  v11 = v8[145] - *(float *)(this + 580);
  v12 = v10;
  v13 = v8[147] - *(float *)(this + 588);
  v20 = v11 * v11 + v12 + v13 * v13;
  if ( off_10689708(v20) < 128.0 )
    return 0;
  v22 = *a3 - *a2;
  v23 = a3[1] - a2[1];
  v24 = a3[2] - a2[2];
  off_10689714();
  v14 = *sub_10023450((float *)this) * 0.5;
  *(float *)&v25 = *a3 - v22 * v14;
  v26 = a3[1] - v23 * v14;
  v27 = a3[2] - v14 * v24;
  memset(v21, 0, sizeof(v21));
  v15 = *(_DWORD **)(this + 2600);
  v16 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  sub_1007C550(v15, 0, a2, (float *)&v25, 147467, v16, 100.0, 0, (float *)v21);
  if ( v21[0] >= 0 )
    return 1;
  if ( !v21[7] )
    return 0;
  v17 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0);
  v18 = sub_10038080(v17);
  v19 = v21[7];
  if ( v21[7] == v18 )
  {
    v28 = fabs(*(float *)&v21[3] - v27);
    if ( ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)this + 1724))(this) >= v28 )
    {
      if ( fabs(*(float *)&v21[2] - v26) + fabs(*(float *)&v21[1] - *(float *)&v25) + fabs(*(float *)&v21[3] - v27) < 64.0 )
        return 1;
      v19 = v21[7];
      return *(_BYTE *)(v19 + 225) || *(_BYTE *)(v19 + 306) == 6;
    }
    return 0;
  }
  return *(_BYTE *)(v19 + 225) || *(_BYTE *)(v19 + 306) == 6;
}
