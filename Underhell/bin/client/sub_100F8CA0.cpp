void __thiscall sub_100F8CA0(int this, int a2, float *a3, float a4)
{
  double v6; // st7
  double v7; // st5
  double v8; // rt0
  double v9; // st5
  double v10; // st7
  double v11; // st6
  double v12; // st5
  double v13; // rt2
  double v14; // st5
  double v15; // st7
  double v16; // st5
  double v17; // st4
  double v18; // st4
  double v19; // st7
  int v20; // ecx
  float *v21; // eax
  double v22; // st7
  double v23; // st5
  double v24; // st4
  double v25; // st3
  double v26; // rt1
  double v27; // st3
  double v28; // st2
  double v29; // st7
  double v30; // st6
  double v31; // rt0
  float v32; // [esp+24h] [ebp-28h]
  float v33; // [esp+28h] [ebp-24h]
  float v34; // [esp+2Ch] [ebp-20h]
  float v35; // [esp+30h] [ebp-1Ch]
  float v36; // [esp+34h] [ebp-18h]
  float v37; // [esp+38h] [ebp-14h]
  int v38; // [esp+3Ch] [ebp-10h] BYREF
  float v39; // [esp+40h] [ebp-Ch]
  float v40; // [esp+44h] [ebp-8h]
  float v41; // [esp+48h] [ebp-4h] BYREF
  int v42; // [esp+54h] [ebp+8h]
  int v43; // [esp+54h] [ebp+8h]
  _BYTE *v44; // [esp+5Ch] [ebp+10h]

  (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, float *))(*(_DWORD *)dword_10436258 + 16))(
    *(__int16 *)(a2 + 64),
    0,
    0,
    0,
    &v41);
  v6 = *(float *)(this + 476) * v41;
  *(float *)&v42 = v6;
  v7 = a4;
  if ( a4 > 0.89999998 )
    v7 = 0.89999998;
  v8 = v7;
  v9 = v6;
  v10 = v8;
  if ( v9 <= 0.89999998 )
  {
    if ( v9 < v10 )
      *(float *)&v42 = v10;
  }
  else
  {
    *(float *)&v42 = 0.89999998;
  }
  sub_10038150(this);
  sub_100F7980((float *)(this + 244), (float *)(a2 + 24), (float *)&v38, 2.0);
  v11 = *(float *)&v38 * *(float *)&v42;
  *(float *)&v38 = v11;
  v12 = v39 * *(float *)&v42;
  v39 = v12;
  v13 = v12;
  v14 = *(float *)&v42 * v40;
  v15 = v13;
  v40 = v14;
  *a3 = *(float *)(this + 284) + v11;
  a3[1] = v13 + *(float *)(this + 288);
  v16 = v14 + *(float *)(this + 292);
  a3[2] = v16;
  v17 = a3[1] * a3[1] + *a3 * *a3 + v16 * v16;
  *(float *)&v43 = v17;
  if ( *(float *)(a2 + 32) > 0.69999999 )
  {
    v18 = *(float *)(this + 296);
    v44 = *(_BYTE **)(a2 + 76);
    if ( 0.0 == v18 )
      v18 = 1.0;
    if ( v18 * *(float *)(dword_10434644 + 44) * *((float *)off_103DC81C + 4) > v16 )
    {
      v40 = 0.0;
      *a3 = v11 + *(float *)(this + 284);
      a3[1] = v15 + *(float *)(this + 288);
      v19 = *(float *)(this + 292);
      a3[2] = *(float *)(this + 292);
      *(float *)&v43 = v19 * v19 + a3[1] * a3[1] + *a3 * *a3;
    }
    sub_100399E0(this, (float *)&v38);
    if ( *(float *)&v43 >= 900.0 )
    {
      v37 = *(float *)(this + 292);
      v32 = *(float *)(this + 284) - *(float *)&v38;
      v35 = *(float *)(this + 284);
      v36 = *(float *)(this + 288);
      v33 = v36 - v39;
      v34 = v37 - v40;
      off_103EDFEC();
      v21 = (float *)off_103DC81C;
      v22 = v36 * v33 + v32 * v35 + v37 * v34;
      v23 = (1.0 - *(float *)(a2 + 44)) * *((float *)off_103DC81C + 4);
      v24 = *(float *)&v38 * v23;
      *a3 = v24;
      v25 = v39 * v23;
      a3[1] = v25;
      v26 = v25;
      a3[2] = v23 * v40;
      v27 = *(float *)(this + 284) * v22;
      v28 = v22;
      v29 = v22 * *(float *)(this + 288);
      v30 = v28 * *(float *)(this + 292);
      v31 = (1.0 - *(float *)(a2 + 44)) * v21[4];
      *a3 = v24 + v27 * v31;
      a3[1] = v26 + v29 * v31;
      a3[2] = v31 * v30 + a3[2];
      sub_100F71F0(this, a3, a2);
      return;
    }
    if ( sub_1000EA80((int)v44, (int)v44) )
      sub_100F8AA0((_DWORD *)this, v44);
    v20 = this;
    goto LABEL_18;
  }
  v20 = this;
  if ( v17 < 900.0 )
  {
LABEL_18:
    sub_100399E0(v20, &flt_10459240);
    sub_10034C40((float *)this, &flt_1045924C);
    return;
  }
  sub_100399E0(this, (float *)&v38);
}
