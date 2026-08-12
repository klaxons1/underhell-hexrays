float *__thiscall sub_1020DBD0(int this, char *a2, int a3, int a4, int a5, int a6)
{
  bool v7; // zf
  float v8; // eax
  float v9; // ecx
  float v10; // edx
  float *result; // eax
  float v12; // ecx
  float v13; // edx
  float *v14; // edi
  float *v15; // ebx
  double v16; // st7
  int v17; // eax
  float v18; // [esp+8h] [ebp-98h]
  float *v19; // [esp+24h] [ebp-7Ch]
  float v20; // [esp+28h] [ebp-78h] BYREF
  __int64 v21; // [esp+2Ch] [ebp-74h]
  float v22; // [esp+34h] [ebp-6Ch] BYREF
  float v23; // [esp+38h] [ebp-68h]
  float v24; // [esp+3Ch] [ebp-64h]
  float v25; // [esp+40h] [ebp-60h]
  float v26; // [esp+44h] [ebp-5Ch]
  float v27; // [esp+48h] [ebp-58h]
  float v28; // [esp+4Ch] [ebp-54h]
  float v29; // [esp+50h] [ebp-50h]
  float v30; // [esp+54h] [ebp-4Ch]
  float v31; // [esp+58h] [ebp-48h] BYREF
  float v32; // [esp+5Ch] [ebp-44h]
  float v33; // [esp+60h] [ebp-40h]
  float v34; // [esp+64h] [ebp-3Ch] BYREF
  float v35; // [esp+68h] [ebp-38h]
  float v36; // [esp+6Ch] [ebp-34h]
  int v37[12]; // [esp+70h] [ebp-30h] BYREF

  v7 = *(_BYTE *)(this + 80) == 0;
  v8 = *(float *)(this + 44);
  v9 = *(float *)(this + 48);
  v10 = *(float *)(this + 52);
  v28 = v8;
  result = *(float **)(this + 56);
  v29 = v9;
  v12 = *(float *)(this + 60);
  v30 = v10;
  v13 = *(float *)(this + 64);
  v25 = *(float *)&result;
  v26 = v12;
  v27 = v13;
  if ( !v7 )
  {
    v28 = *(float *)(this + 56);
    v29 = *(float *)(this + 60);
    v30 = *(float *)(this + 64);
    v25 = *(float *)(this + 44);
    v26 = *(float *)(this + 48);
    v27 = *(float *)(this + 52);
  }
  for ( ; a4; v15[8] = v36 )
  {
    v14 = (float *)(*((_DWORD *)a2 + 1517) + 4 * ((a3 & 3) + a3 / 4 * *((_DWORD *)a2 + 1581)));
    --a4;
    v15 = (float *)(*((_DWORD *)a2 + 1519) + 4 * ((a3 & 3) + a3 / 4 * *((_DWORD *)a2 + 1583)));
    v19 = (float *)(*((_DWORD *)a2 + 1525) + 4 * ((a3 & 3) + a3 / 4 * *((_DWORD *)a2 + 1589)));
    if ( 0.0 == *(float *)(this + 72) )
    {
      v17 = *((_DWORD *)a2 + 1655);
      *((_DWORD *)a2 + 1655) = v17 + 1;
      sub_10204B20(a2, v17, (float *)(this + 44), (float *)(this + 56), &v22);
    }
    else
    {
      v18 = *(float *)(this + 76) + *(float *)(this + 72);
      v16 = sub_100260E0(
              *(float *)(*((_DWORD *)a2 + 1525) + 4 * ((a3 & 3) + a3 / 4 * *((_DWORD *)a2 + 1589))),
              *(float *)(this + 76),
              v18,
              0.0,
              1.0);
      v22 = v28 + (v25 - v28) * v16;
      v23 = v29 + (v26 - v29) * v16;
      v24 = v16 * (v27 - v30) + v30;
    }
    sub_101F8FA0(a2, *(_DWORD *)(this + 68), *v19, (float *)v37);
    v20 = flt_10459240;
    v21 = qword_10459244;
    v31 = *v14;
    v32 = v14[4];
    v33 = v14[8];
    v34 = *v15;
    v35 = v15[4];
    v36 = v15[8];
    sub_101ED8C0(&v31, (float *)v37, &v20);
    v20 = v20 * v22;
    *(float *)&v21 = *(float *)&v21 * v23;
    *((float *)&v21 + 1) = *((float *)&v21 + 1) * v24;
    sub_101ED860(&v20, (float *)v37, &v31);
    sub_101ED8C0(&v34, (float *)v37, &v20);
    v20 = v20 * v22;
    *(float *)&v21 = *(float *)&v21 * v23;
    *((float *)&v21 + 1) = *((float *)&v21 + 1) * v24;
    *(float *)&result = COERCE_FLOAT(sub_101ED860(&v20, (float *)v37, &v34));
    *v14 = v31;
    v14[4] = v32;
    v14[8] = v33;
    ++a3;
    *v15 = v34;
    v15[4] = v35;
  }
  return result;
}
