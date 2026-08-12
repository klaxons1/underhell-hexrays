float *__thiscall sub_10159490(int this, int a2, float a3)
{
  float *result; // eax
  unsigned int v5; // edi
  int v6; // ecx
  unsigned int v7; // ebx
  double v8; // st6
  int v9; // ecx
  float *v10; // eax
  int v11; // ecx
  float *v12; // eax
  double v13; // st7
  double v14; // st6
  double v15; // st5
  float *v16; // eax
  float *v17; // eax
  long double v18; // st6
  long double v19; // rtt
  long double v20; // st6
  double v21; // st6
  float *v22; // edi
  double v23; // st7
  double v24; // st4
  double v25; // st5
  double v26; // st2
  double v27; // st3
  double v28; // st1
  float *v29; // ebx
  float v30; // [esp+0h] [ebp-40h]
  float v31[3]; // [esp+10h] [ebp-30h] BYREF
  float v32; // [esp+1Ch] [ebp-24h] BYREF
  float v33; // [esp+20h] [ebp-20h]
  float v34; // [esp+24h] [ebp-1Ch]
  float v35; // [esp+28h] [ebp-18h]
  float v36; // [esp+2Ch] [ebp-14h]
  float v37; // [esp+30h] [ebp-10h]
  float v38; // [esp+34h] [ebp-Ch]
  int v39; // [esp+38h] [ebp-8h]
  int v40; // [esp+3Ch] [ebp-4h]
  int v41; // [esp+48h] [ebp+8h]
  float v42; // [esp+48h] [ebp+8h]
  float v43; // [esp+4Ch] [ebp+Ch]

  result = (float *)a2;
  v5 = this + 24 * a2 + 2368;
  v6 = *(_DWORD *)(this + 24 * a2 + 2372);
  v7 = this + 24 * v6 + 2368;
  if ( v5 < v7 )
  {
    v8 = *(float *)(this + 24 * v6 + 2376) + a3;
    v38 = v8;
    *(float *)(this + 24 * v6 + 2376) = v8;
    *(float *)(v5 + 8) = v8;
    v9 = *(_DWORD *)(this + 7556) * *(_DWORD *)(this + 7552);
    v40 = a2 / v9;
    v39 = a2 / v9 * v9;
    v10 = sub_101591E0(
            this,
            &v32,
            a2 - a2 % v9 / *(_DWORD *)(this + 7556) * *(_DWORD *)(this + 7556) - v39,
            a2 % v9 / *(_DWORD *)(this + 7556),
            a2 / v9);
    v11 = *(_DWORD *)(this + 7556) * *(_DWORD *)(this + 7552);
    v35 = *v10 - *(float *)(this + 1432);
    v36 = v10[1] - *(float *)(this + 1436);
    v41 = *(_DWORD *)(v5 + 4);
    v37 = v10[2] - *(float *)(this + 1440);
    v39 = v41 / v11;
    v40 = v41 / v11 * v11;
    v12 = sub_101591E0(
            this,
            v31,
            v41 - v41 % v11 / *(_DWORD *)(this + 7556) * *(_DWORD *)(this + 7556) - v40,
            v41 % v11 / *(_DWORD *)(this + 7556),
            v41 / v11);
    v13 = *v12 - *(float *)(this + 1432);
    v32 = v13;
    v14 = v12[1] - *(float *)(this + 1436);
    v33 = v14;
    v15 = v12[2] - *(float *)(this + 1440);
    v34 = v15;
    if ( v38 < (double)*(float *)(v5 + 12) )
    {
      v18 = (cos((v38 + v38) * 1.5707964 / *(float *)(v5 + 12)) + 1.0) * 0.5;
      v42 = v18;
      v19 = v18;
      v20 = 1.0 - v18;
      v43 = v20;
      *(float *)(*(_DWORD *)v5 + 32) = v20 * (*(float *)(v7 + 16) - *(float *)(v5 + 16)) + *(float *)(v5 + 16);
      *(float *)(*(_DWORD *)v7 + 32) = v19 * (*(float *)(v7 + 16) - *(float *)(v5 + 16)) + *(float *)(v5 + 16);
      v30 = v20;
      sub_10159040((unsigned __int8 *)(v5 + 20), (unsigned __int8 *)(v7 + 20), (_BYTE *)(*(_DWORD *)v5 + 37), v30);
      result = (float *)sub_10159040(
                          (unsigned __int8 *)(v5 + 20),
                          (unsigned __int8 *)(v7 + 20),
                          (_BYTE *)(*(_DWORD *)v7 + 37),
                          v42);
      v21 = v35;
      v22 = *(float **)v5;
      v23 = v32 - v35;
      v24 = v36;
      v25 = v33 - v36;
      v26 = v37;
      v27 = v34 - v37;
      v32 = v23 * v43;
      v33 = v25 * v43;
      v35 = v32 + v35;
      v28 = v33 + v36;
      v37 = v43 * v27 + v37;
      v22[3] = v35;
      v22[4] = v28;
      v22[5] = v37;
      v29 = *(float **)v7;
      v29[3] = v21 + v23 * v42;
      v29[4] = v24 + v25 * v42;
      v29[5] = v26 + v27 * v42;
    }
    else
    {
      *(_DWORD *)(v7 + 4) = -1;
      *(_DWORD *)(v5 + 4) = -1;
      v16 = *(float **)v5;
      v16[3] = v13;
      v16[4] = v14;
      v16[5] = v15;
      v17 = *(float **)v7;
      v17[3] = v35;
      v17[4] = v36;
      v17[5] = v37;
      result = *(float **)v5;
      *(_DWORD *)v5 = *(_DWORD *)v7;
      *(_DWORD *)v7 = result;
    }
  }
  return result;
}
