int __cdecl sub_1001D350(int a1, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // esi
  int v6; // esi
  int v7; // eax
  double v8; // st0
  double v9; // st0
  long double v10; // st4
  double v11; // st7
  float v12; // [esp+0h] [ebp-1C4h]
  float v13; // [esp+0h] [ebp-1C4h]
  _BYTE v14[48]; // [esp+14h] [ebp-1B0h] BYREF
  _BYTE v15[48]; // [esp+44h] [ebp-180h] BYREF
  _BYTE v16[48]; // [esp+74h] [ebp-150h] BYREF
  _BYTE v17[48]; // [esp+A4h] [ebp-120h] BYREF
  _BYTE v18[48]; // [esp+D4h] [ebp-F0h] BYREF
  _BYTE v19[48]; // [esp+104h] [ebp-C0h] BYREF
  _BYTE v20[16]; // [esp+134h] [ebp-90h] BYREF
  int v21[4]; // [esp+144h] [ebp-80h] BYREF
  int v22[4]; // [esp+154h] [ebp-70h] BYREF
  float v23; // [esp+164h] [ebp-60h] BYREF
  float v24; // [esp+168h] [ebp-5Ch]
  float v25; // [esp+16Ch] [ebp-58h]
  float v26[3]; // [esp+170h] [ebp-54h] BYREF
  float v27; // [esp+17Ch] [ebp-48h] BYREF
  float v28; // [esp+180h] [ebp-44h]
  float v29; // [esp+184h] [ebp-40h]
  float v30[3]; // [esp+188h] [ebp-3Ch] BYREF
  float v31; // [esp+194h] [ebp-30h]
  float v32; // [esp+198h] [ebp-2Ch]
  float v33; // [esp+19Ch] [ebp-28h]
  int v34; // [esp+1A0h] [ebp-24h]
  float v35; // [esp+1A4h] [ebp-20h]
  float v36; // [esp+1A8h] [ebp-1Ch]
  int v37; // [esp+1ACh] [ebp-18h] BYREF
  float v38; // [esp+1B0h] [ebp-14h]
  float v39; // [esp+1B4h] [ebp-10h]
  float v40; // [esp+1B8h] [ebp-Ch]
  float v41; // [esp+1BCh] [ebp-8h]
  float v42; // [esp+1C0h] [ebp-4h]
  int v43; // [esp+1CCh] [ebp+8h]
  float v44; // [esp+1CCh] [ebp+8h]

  result = a1 + 216 * a2;
  v5 = *(_DWORD *)(result + 168);
  v43 = result;
  if ( v5 )
  {
    v6 = result + v5;
    if ( v6 )
    {
      sub_101ED9E0(*(_DWORD *)(a3 + 4) + 48 * *(_DWORD *)v6, v15);
      sub_101ED860(v6 + 32, v15, v30);
      if ( a4 )
      {
        v7 = sub_10127BF0(*(_DWORD *)(v6 + 4));
        sub_101EDC00(*(_DWORD *)(a3 + 4) + 48 * *(_DWORD *)(v7 + 8), v7 + 12, v18);
      }
      else
      {
        sub_101ED9E0(*(_DWORD *)(a3 + 4) + 48 * *(_DWORD *)(v6 + 4), v18);
      }
      sub_101EDA00(v18, 3, v26);
      sub_101F1020(v43 + 44, &v27);
      sub_101F1750(&v27, v6 + 32, v17);
      sub_101EDC00(*(_DWORD *)(a3 + 4) + 48 * *(_DWORD *)v6, v17, v14);
      v40 = v26[0] - v30[0];
      v41 = v26[1] - v30[1];
      v42 = v26[2] - v30[2];
      off_103EDFF0();
      *(float *)&v37 = *(float *)(v6 + 12) * v42 - *(float *)(v6 + 16) * v41;
      v38 = *(float *)(v6 + 16) * v40 - v42 * *(float *)(v6 + 8);
      v39 = v41 * *(float *)(v6 + 8) - v40 * *(float *)(v6 + 12);
      off_103EDFF0();
      v12 = acos(*(float *)(v6 + 12) * v41 + *(float *)(v6 + 8) * v40 + *(float *)(v6 + 16) * v42) * 57.29578;
      sub_101EEEE0((int)&v37, v12, (int)v22);
      if ( 1.0
         - fabs(
             *(float *)(v6 + 24) * *(float *)(v6 + 12)
           + *(float *)(v6 + 8) * *(float *)(v6 + 20)
           + *(float *)(v6 + 28) * *(float *)(v6 + 16)) <= 0.00000011920929 )
      {
        sub_101F0F40(v22, v30, v19);
      }
      else
      {
        sub_101EED90(v22, v16);
        sub_101ED920(v6 + 20, v16, &v23);
        v8 = v25 * v42 + v23 * v40 + v24 * v41;
        *(float *)&v34 = v23 - v40 * v8;
        v35 = v24 - v41 * v8;
        v36 = v25 - v42 * v8;
        off_103EDFF0();
        sub_101ED920(v6 + 20, v14, &v27);
        v9 = v29 * v42 + v27 * v40 + v28 * v41;
        v31 = v27 - v40 * v9;
        v32 = v28 - v41 * v9;
        v33 = v29 - v42 * v9;
        off_103EDFF0();
        v10 = v33 * v36 + v31 * *(float *)&v34 + v32 * v35;
        if ( 1.0 - fabs(v10) <= 0.00000011920929 )
        {
          v44 = 0.0;
          v11 = v36;
          v37 = v34;
          v38 = v35;
        }
        else
        {
          v44 = acos(v10);
          *(float *)&v37 = v33 * v35 - v32 * v36;
          v38 = v36 * v31 - v33 * *(float *)&v34;
          v11 = *(float *)&v34 * v32 - v31 * v35;
        }
        v39 = v11;
        off_103EDFF0();
        v13 = v44 * 57.29578;
        sub_101EEEE0((int)&v37, v13, (int)v21);
        sub_101EECB0(v21, v22, v20);
        sub_101F0F40(v20, v30, v19);
      }
      return sub_101ED9E0(v19, *(_DWORD *)(a3 + 4) + 48 * a2);
    }
  }
  return result;
}
