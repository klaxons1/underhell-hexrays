void __thiscall sub_103AC700(int this)
{
  int v2; // eax
  int v3; // ecx
  double v4; // st7
  double v5; // st6
  double v6; // st5
  int v7; // ecx
  double v8; // st6
  double v9; // st7
  int v10[14]; // [esp+24h] [ebp-B0h] BYREF
  int v11[14]; // [esp+5Ch] [ebp-78h] BYREF
  float v12; // [esp+94h] [ebp-40h]
  int v13[3]; // [esp+98h] [ebp-3Ch] BYREF
  int v14; // [esp+A4h] [ebp-30h] BYREF
  float v15; // [esp+A8h] [ebp-2Ch]
  float v16; // [esp+ACh] [ebp-28h]
  float v17; // [esp+B0h] [ebp-24h] BYREF
  float v18; // [esp+B4h] [ebp-20h]
  float v19; // [esp+B8h] [ebp-1Ch]
  float v20; // [esp+BCh] [ebp-18h] BYREF
  float v21; // [esp+C0h] [ebp-14h]
  float v22; // [esp+C4h] [ebp-10h]
  float v23; // [esp+C8h] [ebp-Ch] BYREF
  float v24; // [esp+CCh] [ebp-8h]
  float v25; // [esp+D0h] [ebp-4h]

  if ( (sub_1007DFF0(*(_DWORD **)(this + 2588)) & 1) == 0
    && !sub_10023D10((_DWORD *)this, 13)
    && sub_10023D10((_DWORD *)this, 28) )
  {
    v2 = sub_1007DFE0(*(_DWORD **)(this + 2588));
    v14 = *(int *)v2;
    v3 = *(_DWORD *)(this + 252);
    v15 = *(float *)(v2 + 4);
    v16 = *(float *)(v2 + 8);
    if ( (v3 & 0x800) != 0 )
      sub_100DAE60(this);
    v4 = *(float *)&v14 - *(float *)(this + 580);
    v17 = v4;
    v5 = v15 - *(float *)(this + 584);
    v18 = v5;
    v6 = v16 - *(float *)(this + 588);
    v19 = v6;
    if ( v6 * v6 + v5 * v5 + v4 * v4 > 3600.0 )
    {
      v12 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              30.0,
              60.0);
      off_10689714();
      v20 = 0.0;
      v21 = 0.0;
      v22 = 1.0;
      sub_1001EFB0(&v17, &v20, &v23);
      if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1) )
      {
        v23 = v23 * -1.0;
        v24 = v24 * -1.0;
        v25 = -1.0 * v25;
      }
      v7 = *(_DWORD *)(this + 252) >> 11;
      v20 = v17 * 60.0;
      v21 = v18 * 60.0;
      v22 = 60.0 * v19;
      if ( (v7 & 1) != 0 )
        sub_100DAE60(this);
      v8 = *(float *)(this + 584) + v21 + v24 * v12;
      v9 = *(float *)(this + 588) + v22 + v12 * v25;
      *(float *)v13 = *(float *)(this + 580) + v20 + v23 * v12;
      *(float *)&v13[1] = v8;
      *(float *)&v13[2] = v9;
      memset(v11, 0, sizeof(v11));
      memset(v10, 0, sizeof(v10));
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      sub_1007C550(
        *(_DWORD **)(this + 2600),
        0,
        (float *)(this + 580),
        (float *)v13,
        33701899,
        0,
        100.0,
        0,
        (float *)v11);
      sub_1007C550(*(_DWORD **)(this + 2600), 0, (float *)v13, (float *)&v14, 33701899, 0, 100.0, 0, (float *)v10);
      if ( v11[0] >= 0 && v10[0] >= 0 )
        sub_1007DD40((int)v13, 0, 1);
    }
  }
}
