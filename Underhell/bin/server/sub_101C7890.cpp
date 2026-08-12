void __thiscall sub_101C7890(int this, float *a2, float *a3, float a4)
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
  int v21; // eax
  double v22; // st7
  double v23; // st5
  double v24; // st4
  double v25; // st3
  double v26; // st1
  double v27; // rt2
  double v28; // rtt
  float v29; // [esp+24h] [ebp-28h]
  float v30; // [esp+28h] [ebp-24h]
  float v31; // [esp+2Ch] [ebp-20h]
  float v32; // [esp+30h] [ebp-1Ch]
  float v33; // [esp+34h] [ebp-18h]
  float v34; // [esp+38h] [ebp-14h]
  int v35; // [esp+3Ch] [ebp-10h] BYREF
  float v36; // [esp+40h] [ebp-Ch]
  float v37; // [esp+44h] [ebp-8h]
  float v38; // [esp+48h] [ebp-4h] BYREF
  float v39; // [esp+54h] [ebp+8h]
  float v40; // [esp+54h] [ebp+8h]
  _DWORD *v41; // [esp+5Ch] [ebp+10h]

  (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, float *))(*(_DWORD *)dword_106BAFF8 + 16))(
    *((__int16 *)a2 + 32),
    0,
    0,
    0,
    &v38);
  v6 = *(float *)(this + 560) * v38;
  v39 = v6;
  v7 = a4;
  if ( a4 > 0.89999998 )
    v7 = 0.89999998;
  v8 = v7;
  v9 = v6;
  v10 = v8;
  if ( v9 <= 0.89999998 )
  {
    if ( v9 < v10 )
      v39 = v10;
  }
  else
  {
    v39 = 0.89999998;
  }
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  sub_101C49D0((float *)(this + 476), a2 + 6, (float *)&v35, 2.0);
  v11 = *(float *)&v35 * v39;
  *(float *)&v35 = v11;
  v12 = v36 * v39;
  v36 = v12;
  v13 = v12;
  v14 = v39 * v37;
  v15 = v13;
  v37 = v14;
  *a3 = v11 + *(float *)(this + 464);
  a3[1] = *(float *)(this + 468) + v13;
  v16 = v14 + *(float *)(this + 472);
  a3[2] = v16;
  v17 = a3[1] * a3[1] + *a3 * *a3 + v16 * v16;
  v40 = v17;
  if ( a2[8] > 0.69999999 )
  {
    v18 = *(float *)(this + 552);
    v41 = (_DWORD *)*((_DWORD *)a2 + 19);
    if ( 0.0 == v18 )
      v18 = 1.0;
    if ( v18 * *(float *)(dword_106B6F0C + 44) * *(float *)(dword_106B31C8 + 16) > v16 )
    {
      v37 = 0.0;
      *a3 = v11 + *(float *)(this + 464);
      a3[1] = v15 + *(float *)(this + 468);
      v19 = *(float *)(this + 472);
      a3[2] = *(float *)(this + 472);
      v40 = v19 * v19 + a3[1] * a3[1] + *a3 * *a3;
    }
    sub_100DD660(this, (float *)&v35);
    if ( v40 >= 900.0 )
    {
      v33 = *(float *)(this + 468);
      v29 = *(float *)(this + 464) - *(float *)&v35;
      v32 = *(float *)(this + 464);
      v34 = *(float *)(this + 472);
      v30 = v33 - v36;
      v31 = v34 - v37;
      off_10689714();
      v21 = dword_106B31C8;
      v22 = v33 * v30 + v29 * v32 + v34 * v31;
      v23 = (1.0 - a2[11]) * *(float *)(dword_106B31C8 + 16);
      v24 = *(float *)&v35 * v23;
      *a3 = v24;
      v25 = v36 * v23;
      a3[1] = v25;
      a3[2] = v23 * v37;
      v26 = *(float *)(this + 472);
      v27 = *(float *)(this + 468) * v22;
      v28 = (1.0 - a2[11]) * *(float *)(v21 + 16);
      *a3 = v24 + v22 * *(float *)(this + 464) * v28;
      a3[1] = v25 + v27 * v28;
      a3[2] = v22 * v26 * v28 + a3[2];
      sub_101C2090(this, a3, a2);
      return;
    }
    if ( sub_100E9830(v41) )
      sub_101C73D0((unsigned int *)this, (int)v41);
    v20 = this;
    goto LABEL_20;
  }
  v20 = this;
  if ( v17 < 900.0 )
  {
LABEL_20:
    sub_100DD660(v20, &flt_106F1CA8);
    sub_100D7260((float *)this, &flt_106F1CB4);
    return;
  }
  sub_100DD660(this, (float *)&v35);
}
