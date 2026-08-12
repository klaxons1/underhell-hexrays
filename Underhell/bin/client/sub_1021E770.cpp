float *__thiscall sub_1021E770(float *this, int a2, int a3, float *a4)
{
  float *v5; // edi
  int v6; // ebp
  bool v7; // cc
  int v8; // ecx
  float *v9; // edi
  double v10; // st7
  double v11; // st6
  double v12; // st5
  float *v13; // eax
  double v14; // st4
  double v15; // st3
  double v16; // st2
  double v17; // st6
  double v18; // st3
  double v19; // st4
  double v20; // rt0
  double v21; // st7
  double v22; // st7
  double v23; // st7
  double v24; // st4
  double v25; // rt2
  double v26; // st5
  double v27; // st7
  double v28; // rt0
  double v29; // st7
  float *result; // eax
  float v31; // [esp+0h] [ebp-4Ch]
  float v33; // [esp+18h] [ebp-34h]
  float v34; // [esp+1Ch] [ebp-30h] BYREF
  __int64 v35; // [esp+20h] [ebp-2Ch]
  float v36; // [esp+28h] [ebp-24h] BYREF
  float v37; // [esp+2Ch] [ebp-20h]
  float v38; // [esp+30h] [ebp-1Ch]
  float v39; // [esp+34h] [ebp-18h] BYREF
  float v40; // [esp+38h] [ebp-14h]
  float v41; // [esp+3Ch] [ebp-10h]
  float v42; // [esp+40h] [ebp-Ch] BYREF
  float v43; // [esp+44h] [ebp-8h]
  float v44; // [esp+48h] [ebp-4h]
  float v45; // [esp+50h] [ebp+4h]

  v33 = 0.0;
  v5 = this;
  v6 = 0;
  v7 = *(_DWORD *)(a2 + 40) <= 0;
  v34 = flt_10459240;
  v35 = qword_10459244;
  if ( !v7 )
  {
    do
    {
      v8 = v6 & 3;
      v9 = (float *)(*(_DWORD *)(a2 + 6068) + 4 * (v8 + v6 / 4 * *(_DWORD *)(a2 + 6324)));
      v10 = *v9;
      v11 = v9[4];
      v12 = v9[8];
      v13 = (float *)(*(_DWORD *)(a2 + 6076) + 4 * (v8 + v6 / 4 * *(_DWORD *)(a2 + 6332)));
      v14 = *v13;
      v42 = *v13;
      v15 = v13[4];
      v43 = v13[4];
      v16 = v13[8];
      v44 = v13[8];
      v17 = v11 - v15;
      v18 = 1.0 / *(float *)(a2 + 44);
      v19 = (v10 - v14) * v18;
      v39 = v19;
      v40 = v17 * v18;
      v20 = v17 * v18;
      v41 = v18 * (v12 - v16);
      v34 = v19 + v34;
      *(float *)&v35 = *(float *)&v35 + v20;
      *((float *)&v35 + 1) = *((float *)&v35 + 1) + v18 * (v12 - v16);
      v31 = v20 * v20 + v18 * (v12 - v16) * (v18 * (v12 - v16)) + v19 * v19;
      v21 = off_103EDFE0(v31);
      v45 = v21;
      v33 = v21 + v33;
      if ( *a4 != flt_10459240 || a4[1] != *(float *)&qword_10459244 || a4[2] != *((float *)&qword_10459244 + 1) )
      {
        off_103EDFF0(&v39);
        v22 = this[11];
        v36 = v39 + (*a4 - v39) * v22;
        v37 = v40 + (a4[1] - v40) * v22;
        v38 = v22 * (a4[2] - v41) + v41;
        off_103EDFF0(&v36);
        v23 = v45 + (a4[3] - v45) * this[12];
        v24 = *(float *)(a2 + 44);
        v25 = v36 * v23 * v24 + v42;
        v26 = v23 * v38 * v24;
        v27 = v37 * v23 * v24 + v43;
        v28 = v26 + v44;
        v36 = v25;
        *v9 = v36;
        v37 = v27;
        v9[4] = v37;
        v38 = v28;
        v9[8] = v38;
      }
      ++v6;
    }
    while ( v6 < *(_DWORD *)(a2 + 40) );
    v5 = this;
  }
  off_103EDFF0(&v34);
  *a4 = v34;
  *(_QWORD *)(a4 + 1) = v35;
  v29 = 1.0 / (double)*(int *)(a2 + 40) * v33;
  a4[3] = v29;
  result = (float *)*((_DWORD *)v5 + 13);
  if ( result != (float *)-1 )
  {
    v42 = v29;
    v43 = v29;
    v44 = v29;
    sub_100F16D0((_DWORD *)a2, (int)result, &v42);
    return sub_100F1810((_DWORD *)a2, *((_DWORD *)v5 + 13), a4);
  }
  return result;
}
