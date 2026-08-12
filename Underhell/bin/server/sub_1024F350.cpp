void __thiscall sub_1024F350(int this, int a2, float *a3, float *a4, int a5, float a6)
{
  float *v8; // eax
  double v9; // st7
  double v10; // st4
  double v11; // st7
  double v12; // st4
  double v13; // st5
  double v14; // st7
  double v15; // st4
  double v16; // st6
  double v17; // st4
  double v18; // st5
  double v19; // st6
  float v20; // [esp+0h] [ebp-64h]
  float v21; // [esp+0h] [ebp-64h]
  int v22[4]; // [esp+10h] [ebp-54h] BYREF
  int v23[4]; // [esp+20h] [ebp-44h] BYREF
  int v24; // [esp+30h] [ebp-34h] BYREF
  _DWORD v25[3]; // [esp+34h] [ebp-30h] BYREF
  int v26[3]; // [esp+40h] [ebp-24h] BYREF
  float v27; // [esp+4Ch] [ebp-18h] BYREF
  int v28; // [esp+50h] [ebp-14h]
  int v29; // [esp+54h] [ebp-10h]
  float v30; // [esp+58h] [ebp-Ch] BYREF
  int v31; // [esp+5Ch] [ebp-8h]
  int v32; // [esp+60h] [ebp-4h]
  int v33; // [esp+70h] [ebp+Ch]
  float v34; // [esp+74h] [ebp+10h]

  sub_101AD430(a3, &v27, 1.0 == *(float *)(this + 872));
  sub_101887F0(&v27);
  if ( a4 )
  {
    v8 = (float *)sub_101AD430(a4, v25, 1.0 == *(float *)(this + 872));
    v30 = *v8;
    v31 = *((int *)v8 + 1);
    v32 = *((int *)v8 + 2);
    sub_101887F0(&v30);
    v9 = v27;
  }
  else
  {
    v9 = v27;
    v30 = v27;
    v31 = v28;
    v32 = v29;
  }
  if ( (*(_BYTE *)(this + 248) & 1) != 0 )
    v30 = v9;
  *(float *)&v33 = 0.0;
  if ( a3 && (v30 != v9 || *(float *)&v28 != *(float *)&v31 || *(float *)&v29 != *(float *)&v32) )
  {
    v10 = a4[179] - a3[179];
    v11 = v10 * v10;
    v12 = a4[180] - a3[180];
    v13 = a4[181] - a3[181];
    v20 = v13 * v13 + v12 * v12 + v11;
    v14 = off_10689708(v20);
    if ( 0.0 != v14 )
    {
      v15 = *(float *)(this + 720) - a3[180];
      v16 = v15 * v15;
      v17 = *(float *)(this + 716) - a3[179];
      v18 = v16;
      v19 = *(float *)(this + 724) - a3[181];
      v21 = v17 * v17 + v18 + v19 * v19;
      v34 = v14;
      *(float *)&v33 = off_10689708(v21) / v34;
    }
  }
  if ( a2 == 3 )
    *(float *)&v33 = 3.0 * (*(float *)&v33 * *(float *)&v33)
                   - *(float *)&v33 * (*(float *)&v33 * *(float *)&v33 + *(float *)&v33 * *(float *)&v33);
  sub_10423260(&v27, v22);
  sub_10423260(&v30, v23);
  *(float *)v26 = v30;
  v26[1] = v31;
  v26[2] = v32;
  if ( 0.0 != sub_10425220(v22, v23) )
  {
    sub_104251E0((int)v22, (int)v23, *(float *)&v33, (int)&v24);
    sub_104252C0(&v24, v26);
  }
  if ( (*(_BYTE *)(this + 248) & 1) != 0 )
    *(float *)v26 = v27;
  sub_1024E260(this, (float *)(this + 728), (float *)v26, a6);
}
