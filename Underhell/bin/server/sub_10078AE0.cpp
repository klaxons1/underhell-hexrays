int __thiscall sub_10078AE0(int this, int a2, float a3, float a4, int a5)
{
  bool v7; // zf
  double v8; // st7
  double v9; // st6
  int v10; // edi
  double v11; // st2
  double v12; // st5
  bool v13; // c0
  bool v14; // c3
  double v15; // st7
  float *v16; // eax
  double v17; // st6
  double v18; // st5
  float v19; // ecx
  double v20; // st5
  float v21; // eax
  double v22; // st7
  double v23; // st6
  int v24; // ecx
  int result; // eax
  int v26[3]; // [esp+18h] [ebp-18h] BYREF
  float v27; // [esp+24h] [ebp-Ch]
  float v28; // [esp+28h] [ebp-8h]
  float v29; // [esp+2Ch] [ebp-4h]
  char v30; // [esp+38h] [ebp+8h]

  if ( a4 <= (double)*(float *)(a2 + 40) )
  {
    v30 = 0;
    *(float *)(this + 16) = 0.0;
    v9 = a4;
    v8 = 0.0;
  }
  else
  {
    v7 = (*(_BYTE *)(a2 + 56) & 2) == 0;
    v30 = 1;
    v8 = 0.0;
    if ( v7 )
      *(float *)(this + 16) = (1.0 - *(float *)(a2 + 40) / a4) * *(float *)(this + 16);
    else
      *(float *)(this + 16) = 0.0;
    v9 = *(float *)(a2 + 40);
  }
  v10 = 1;
  v11 = *(float *)(a2 + 20);
  v12 = *(float *)(a2 + 16) * a3;
  *(float *)(this + 28) = *(float *)(a2 + 12) * a3;
  *(float *)(this + 32) = v12;
  *(float *)(this + 36) = a3 * v11;
  v13 = v9 < v8;
  v14 = v9 == v8;
  v15 = v9;
  if ( v13 || v14 )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)(this + 8) + 28))(this + 8, a2) )
      return 0;
  }
  else
  {
    v16 = *(float **)(this + 4);
    v17 = *(float *)(a2 + 12) * v9;
    v18 = *(float *)(a2 + 16);
    v27 = v16[179];
    v19 = v16[180];
    v20 = v18 * v15;
    v21 = v16[181];
    v22 = v15 * *(float *)(a2 + 20);
    v28 = v19;
    v29 = v21;
    *(float *)v26 = v17 + v27;
    v23 = v20 + v19;
    v24 = *(_DWORD *)(a2 + 52);
    *(float *)&v26[1] = v23;
    *(float *)&v26[2] = v22 + v21;
    result = sub_100788E0((_DWORD *)this, (int)v26, v24, -1.0, COERCE_FLOAT(1), v30, a5);
    v10 = result;
    if ( result )
      return result;
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 48))(this);
  }
  return v10;
}
