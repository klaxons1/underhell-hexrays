void __thiscall sub_10205FA0(int this, int a2, int a3, int a4, int a5, int a6)
{
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // st4
  float *v10; // edi
  int v11; // eax
  double v12; // st4
  double v13; // rt2
  double v14; // rtt
  double v15; // st4
  double v16; // st7
  int v17; // edx
  double v18; // st4
  double v19; // st3
  double v20; // st3
  __int16 v21; // ax
  double v22; // st3
  double v23; // st6
  int v24; // [esp+20h] [ebp-34h]
  float v25[3]; // [esp+24h] [ebp-30h] BYREF
  float v26[3]; // [esp+30h] [ebp-24h] BYREF
  float v27[2]; // [esp+3Ch] [ebp-18h] BYREF
  float v28; // [esp+44h] [ebp-10h]
  float v29[3]; // [esp+48h] [ebp-Ch] BYREF

  v24 = this;
  if ( a4 )
  {
    v6 = 0.0;
    do
    {
      v7 = v6;
      --a4;
      v8 = v6;
      v9 = v6;
      v10 = (float *)(*(_DWORD *)(a2 + 6076) + 4 * ((a3 & 3) + a3 / 4 * *(_DWORD *)(a2 + 6332)));
      if ( *(_BYTE *)(this + 80) )
      {
        v11 = *(_DWORD *)(a2 + 6620);
        *(_DWORD *)(a2 + 6620) = v11 + 1;
        sub_10204B20((_DWORD *)a2, v11, (float *)(this + 56), (float *)(this + 68), v27);
        sub_101F8930(
          (float *)a2,
          *(_DWORD *)(v24 + 44),
          COERCE_INT(*(float *)(*(_DWORD *)(a2 + 6100) + 4 * ((a3 & 3) + a3 / 4 * *(_DWORD *)(a2 + 6356)))),
          v25,
          v26,
          v29);
        this = v24;
        v12 = -v27[1];
        v8 = v25[1] * v27[0] + v26[1] * v12 + v29[1] * v28;
        v6 = 0.0;
        v13 = v25[0] * v27[0] + v26[0] * v12 + v29[0] * v28;
        v9 = v27[0] * v25[2] + v12 * v26[2] + v28 * v29[2];
        v7 = v13;
      }
      v14 = v9;
      v15 = v6;
      v16 = v14;
      if ( v15 < *(float *)(this + 52) )
      {
        v17 = *(_DWORD *)(a2 + 6620);
        v18 = *(float *)(this + 48);
        v19 = *(float *)(this + 52);
        *(_DWORD *)(a2 + 6620) = v17 + 1;
        v20 = v19 - v18;
        v21 = v17 + *(_DWORD *)(a2 + 6624);
        v7 = v7 + flt_103EE7C0[v21 & 0xFFF] * v20 + v18;
        v8 = v8 + flt_103EE7C0[(v21 + 1) & 0xFFF] * v20 + v18;
        v16 = v16 + v18 + v20 * flt_103EE7C0[(v21 + 2) & 0xFFF];
        v15 = 0.0;
      }
      v22 = *(float *)(a2 + 48);
      ++a3;
      *v10 = *v10 - v7 * v22;
      v10[4] = v10[4] - v8 * v22;
      v23 = v10[8] - v16 * v22;
      v6 = v15;
      v10[8] = v23;
    }
    while ( a4 );
  }
}
