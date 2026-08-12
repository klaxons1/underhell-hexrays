float *__thiscall sub_101F96B0(_DWORD *this, int a2, float a3, float *a4, float *a5, float *a6)
{
  double v8; // st7
  int v9; // ecx
  double v10; // st6
  double v11; // st5
  double v12; // st2
  int v13; // eax
  float v14; // ebx
  int v15; // eax
  int v16; // edi
  float v17; // ebp
  double v18; // st7
  double v19; // st6
  double v20; // st5
  long double v21; // st4
  double v22; // st7
  double v23; // st7
  double v24; // st7
  double v25; // st6
  double v26; // st5
  double v27; // st7
  double v28; // st5
  double v29; // st7
  double v30; // st6
  double v31; // st5
  double v32; // rt1
  double v33; // st5
  double v34; // rtt
  float *result; // eax
  float v36; // [esp+0h] [ebp-50h]
  float v37; // [esp+0h] [ebp-50h]
  float v38; // [esp+0h] [ebp-50h]
  float v39; // [esp+14h] [ebp-3Ch]
  float v40; // [esp+18h] [ebp-38h]
  float v41; // [esp+1Ch] [ebp-34h]
  float v42; // [esp+20h] [ebp-30h]
  int v43; // [esp+2Ch] [ebp-24h] BYREF
  float v44; // [esp+30h] [ebp-20h]
  float v45; // [esp+34h] [ebp-1Ch]
  int v46; // [esp+38h] [ebp-18h] BYREF
  float v47; // [esp+3Ch] [ebp-14h]
  float v48; // [esp+40h] [ebp-10h]
  int v49; // [esp+44h] [ebp-Ch] BYREF
  float v50; // [esp+48h] [ebp-8h]
  float v51; // [esp+4Ch] [ebp-4h]
  int v52; // [esp+54h] [ebp+4h]
  float v53; // [esp+58h] [ebp+8h]

  sub_101F8ED0((int)this, *(_DWORD *)a2, a3, (float *)&v43);
  sub_101F8ED0((int)this, *(_DWORD *)(a2 + 4), a3, (float *)&v46);
  v8 = *(float *)(a2 + 16);
  v9 = *(_DWORD *)(a2 + 8);
  v10 = *(float *)&v46 - *(float *)&v43;
  v39 = *(float *)&v43 + v10 * v8;
  v11 = v47 - v44;
  v40 = v44 + v11 * v8;
  v12 = v48 - v45;
  v41 = v8 * v12 + v45;
  if ( !v9 )
  {
    v38 = -*(float *)(a2 + 12);
    sub_101F7390(this, 0, v38, *(float *)(a2 + 12), (float *)&v49);
    v29 = *(float *)&v49 + v39;
    v30 = v50 + v40;
    v31 = v51 + v41;
LABEL_11:
    v32 = v31;
    v33 = v29;
    v27 = v30;
    v34 = v33;
    v28 = v32;
    v25 = v34;
    goto LABEL_12;
  }
  v13 = *(_DWORD *)a2;
  *(float *)&v49 = v10;
  v50 = v11;
  v51 = v12;
  v53 = 0.0;
  if ( v9 == 2 )
    v13 = *(_DWORD *)(a2 + 4);
  v14 = *(float *)&this[17 * v13 + 29];
  v15 = (int)&this[17 * v13 + 28];
  v16 = *(_DWORD *)v15;
  v17 = *(float *)(v15 + 8);
  v42 = *(float *)v15;
  v36 = v11 * v11 + v12 * v12 + v10 * v10;
  v18 = off_103EDFE0(v36);
  *(float *)&v52 = v18;
  v19 = v17;
  v20 = v14;
  if ( v18 <= 0.000001 )
  {
    v22 = v42;
  }
  else
  {
    v21 = 1.0 - fabs(1.0 / v18 * v51 * v19 + v50 * (1.0 / v18) * v20 + *(float *)&v49 * (1.0 / v18) * v42);
    v22 = v42;
    v53 = v21;
  }
  v49 = v16;
  v50 = v14;
  v51 = v17;
  v37 = v22 * v22 + v19 * v19 + v20 * v20;
  v23 = off_103EDFE0(v37);
  if ( v23 <= 0.000001 )
  {
    v29 = v39;
    v30 = v40;
    v31 = v41;
    goto LABEL_11;
  }
  v24 = *(float *)(a2 + 12) * *(float *)&v52 * v53 / v23;
  v25 = v42 * v24 + v39;
  v26 = v24 * v51;
  v27 = v50 * v24 + v40;
  v28 = v26 + v41;
LABEL_12:
  *a4 = *(float *)&v43;
  a4[1] = v44;
  a4[2] = v45;
  *a5 = v25;
  a5[1] = v27;
  a5[2] = v28;
  result = a6;
  *a6 = *(float *)&v46;
  a6[1] = v47;
  a6[2] = v48;
  return result;
}
