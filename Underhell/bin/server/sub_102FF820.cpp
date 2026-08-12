char __thiscall sub_102FF820(int this, float *a2, float *a3)
{
  char result; // al
  int (__thiscall *v6)(int, int, int); // eax
  double v7; // st7
  double v8; // st6
  double v9; // st5
  double v10; // st7
  double v11; // st7
  double v12; // st6
  double v13; // st5
  double v14; // st7
  int v15[3]; // [esp+2Ch] [ebp-30h] BYREF
  float v16[3]; // [esp+38h] [ebp-24h] BYREF
  int v17; // [esp+44h] [ebp-18h] BYREF
  float v18; // [esp+48h] [ebp-14h]
  float v19; // [esp+4Ch] [ebp-10h]
  float v20; // [esp+50h] [ebp-Ch] BYREF
  float v21; // [esp+54h] [ebp-8h]
  float v22; // [esp+58h] [ebp-4h]
  int i; // [esp+64h] [ebp+8h]

  if ( (*(_DWORD *)(this + 248) & 0x20000) != 0 )
  {
    *a3 = *a2;
    a3[1] = a2[1];
    result = 1;
    a3[2] = a2[2];
  }
  else
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v20 = *a2 - *(float *)(this + 580);
    v21 = a2[1] - *(float *)(this + 584);
    v22 = a2[2] - *(float *)(this + 588);
    off_10689714();
    sub_10421D80(&v20, v16);
    for ( i = 0; i < 3; ++i )
    {
      *a3 = *a2;
      a3[1] = a2[1];
      a3[2] = a2[2];
      v6 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8);
      *(float *)&v17 = -v20;
      v18 = -v21;
      v19 = -v22;
      v7 = (double)v6(dword_106B31E4, 64, 128);
      v8 = *(float *)&v17 * v7;
      v9 = v18 * v7;
      v10 = v7 * v19;
      *a3 = v8 + *a3;
      a3[1] = v9 + a3[1];
      a3[2] = v10 + a3[2];
      v11 = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -128, 128);
      v12 = v16[0] * v11;
      v13 = v16[1] * v11;
      v14 = v11 * v16[2];
      *a3 = v12 + *a3;
      a3[1] = v13 + a3[1];
      a3[2] = v14 + a3[2];
      if ( sub_102FD4C0((_DWORD *)this, (int)a3, a3) )
        return 1;
    }
    if ( *(_DWORD *)(dword_106E2A04 + 48) == 1 )
    {
      *(float *)&v17 = 32.0;
      v18 = 32.0;
      v19 = 32.0;
      *(float *)v15 = -32.0;
      *(float *)&v15[1] = -32.0;
      *(float *)&v15[2] = -32.0;
      sub_1011C000(a3, (float *)v15, (float *)&v17, 255, 255, 0, 1, 2.0);
    }
    return 0;
  }
  return result;
}
