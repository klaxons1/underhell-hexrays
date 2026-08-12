int __thiscall sub_10405CF0(int this, int a2, float a3)
{
  unsigned int v4; // eax
  int *v5; // ecx
  int result; // eax
  int v7; // eax
  int v8; // esi
  int v9; // edi
  double v10; // st6
  double v11; // st5
  double v12; // st7
  double v13; // st6
  int v14; // eax
  int v15; // esi
  float v16; // [esp+0h] [ebp-A0h]
  _BYTE v17[44]; // [esp+10h] [ebp-90h] BYREF
  float v18; // [esp+3Ch] [ebp-64h]
  float v19[3]; // [esp+64h] [ebp-3Ch] BYREF
  float v20[3]; // [esp+70h] [ebp-30h] BYREF
  float v21[3]; // [esp+7Ch] [ebp-24h] BYREF
  float v22[3]; // [esp+88h] [ebp-18h] BYREF
  float v23[3]; // [esp+94h] [ebp-Ch] BYREF
  int savedregs; // [esp+A0h] [ebp+0h] BYREF

  v4 = *(_DWORD *)(this + 1412);
  if ( v4 != -1 )
  {
    v5 = &off_1061BE18[4 * (*(_DWORD *)(this + 1412) & 0xFFF) + 1];
    if ( v5[1] == v4 >> 12 )
    {
      if ( *v5 )
        return 0;
    }
  }
  v7 = sub_100D1940((_DWORD *)this);
  v8 = sub_100D7680(v7);
  if ( v8 )
  {
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 368))(v8);
    if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
      sub_100DAE60(v8);
    if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
      sub_100DAE60(v9);
    v10 = *(float *)(v9 + 584) - *(float *)(v8 + 584);
    v11 = *(float *)(v9 + 580) - *(float *)(v8 + 580);
    v16 = v11 * v11 + v10 * v10;
    v12 = off_10689708(v16);
  }
  else
  {
    v12 = a3;
  }
  if ( *(float *)(this + 1216) <= (double)*(float *)(this + 1212) )
    v13 = *(float *)(this + 1216);
  else
    v13 = *(float *)(this + 1212);
  if ( v13 > v12 )
    return 38;
  if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 1132) )
    return 0;
  v14 = sub_100D1940((_DWORD *)this);
  v15 = sub_100D7680(v14);
  if ( !v15 )
    return 21;
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)v15 + 968))(v15, v23);
  (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v15 + 2104))(v15, v19, v23);
  v22[0] = 24.0;
  v22[1] = 24.0;
  v22[2] = 24.0;
  v21[0] = -24.0;
  v21[1] = -24.0;
  v21[2] = -24.0;
  v20[0] = v19[0] * 120.0 + v23[0];
  v20[1] = v19[1] * 120.0 + v23[1];
  v20[2] = 120.0 * v19[2] + v23[2];
  sub_10023240(COERCE_FLOAT(&savedregs), v15, v23, v20, v21, v22, 33701899, 0, (int)v17);
  result = 45;
  if ( 1.0 == v18 )
    return 21;
  return result;
}
