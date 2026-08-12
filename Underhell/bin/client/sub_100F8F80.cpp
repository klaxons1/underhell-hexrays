void __thiscall sub_100F8F80(int this, int a2, float *a3)
{
  double v5; // st7
  double v6; // st6
  double v7; // st5
  _BYTE *v8; // ebx
  double v9; // st4
  double v10; // st7
  double v11; // st7
  double v12; // st6
  double v13; // st5
  double v14; // st3
  int v15; // [esp+20h] [ebp-10h] BYREF
  float v16; // [esp+24h] [ebp-Ch]
  float v17; // [esp+28h] [ebp-8h]
  float v18; // [esp+2Ch] [ebp-4h] BYREF
  float v19; // [esp+38h] [ebp+8h]

  (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, float *, _DWORD))(*(_DWORD *)dword_10436258 + 16))(
    *(__int16 *)(a2 + 64),
    0,
    0,
    &v18,
    0);
  sub_10038150(this);
  sub_100F7980((float *)(this + 244), (float *)(a2 + 24), (float *)&v15, 1.0);
  if ( *(float *)(a2 + 32) > 0.7 )
  {
    v5 = *(float *)&v15;
    *a3 = *(float *)&v15 + *(float *)(this + 284);
    v6 = v16;
    a3[1] = *(float *)(this + 288) + v16;
    v7 = *(float *)(this + 292) + v17;
    a3[2] = v7;
    v8 = *(_BYTE **)(a2 + 76);
    v19 = a3[1] * a3[1] + *a3 * *a3 + v7 * v7;
    v9 = *(float *)(this + 296);
    if ( 0.0 == v9 )
      v9 = 1.0;
    if ( v9 * *(float *)(dword_10434644 + 44) * *((float *)off_103DC81C + 4) > v7 )
    {
      v17 = 0.0;
      *a3 = v5 + *(float *)(this + 284);
      a3[1] = v6 + *(float *)(this + 288);
      v10 = *(float *)(this + 292);
      a3[2] = *(float *)(this + 292);
      v19 = v10 * v10 + a3[1] * a3[1] + *a3 * *a3;
    }
    sub_100399E0(this, (float *)&v15);
    if ( v19 >= 900.0 )
    {
      v11 = *(float *)&v15 + *(float *)(this + 284);
      *(float *)&v15 = v11;
      v12 = *(float *)(this + 288) + v16;
      v16 = v12;
      v13 = *(float *)(this + 292) + v17;
      v17 = v13;
      v14 = (1.0 - *(float *)(a2 + 44)) * *((float *)off_103DC81C + 4) * v18;
      *(float *)&v15 = v11 * v14;
      v16 = v12 * v14;
      v17 = v14 * v13;
      sub_100F71F0(this, (float *)&v15, a2);
    }
    else
    {
      if ( sub_1000EA80((int)v8, a2) )
        sub_100F8AA0((_DWORD *)this, v8);
      sub_100399E0(this, &flt_10459240);
      sub_10034C40((float *)this, &flt_1045924C);
    }
  }
  else
  {
    sub_100399E0(this, (float *)&v15);
  }
}
