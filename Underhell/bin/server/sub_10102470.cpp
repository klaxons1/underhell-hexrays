void __cdecl sub_10102470(int *a1, float *a2, int a3, int a4, int a5, int a6, float *a7, float a8, int a9)
{
  int *v9; // edx
  int v10; // ecx
  int v11; // ebx
  double v12; // st7
  double v13; // st6
  int v14; // ecx
  int v15; // esi
  float *v16; // ecx
  float *v17; // edx
  int v18; // edi
  int v19; // eax
  char *v20; // ebx
  double v21; // st6
  float *v22; // edi
  float *v23; // esi
  int v24; // eax
  double v25; // rt0
  double v26; // st6
  double v27; // st7
  float *v28; // eax
  char *v29; // edx
  double v30; // st6
  double v31; // st5
  double v32; // rtt
  int v33; // eax
  int v34; // [esp-8h] [ebp-44h]
  float v35; // [esp+0h] [ebp-3Ch]
  int v36[4]; // [esp+14h] [ebp-28h] BYREF
  float v37; // [esp+24h] [ebp-18h]
  int v38; // [esp+28h] [ebp-14h]
  int v39; // [esp+2Ch] [ebp-10h]
  int v40; // [esp+30h] [ebp-Ch]
  char *v41; // [esp+34h] [ebp-8h]
  int v42; // [esp+38h] [ebp-4h]
  float *v43; // [esp+60h] [ebp+24h]

  v9 = a1;
  v10 = a1[1];
  v11 = 0;
  v42 = 0;
  if ( v10 )
    v42 = *(_DWORD *)(v10 + 88) + 144 * *(_DWORD *)(*(_DWORD *)(v10 + 8) + 16 * a5 + 8);
  v12 = 0.0;
  v13 = a8;
  if ( a8 > 0.0 )
  {
    v14 = *a1;
    if ( v13 < 1.0 )
    {
      v21 = 1.0 - v13;
      v37 = v21;
      if ( *(int *)(v14 + 156) > 0 )
      {
        v22 = a2;
        v40 = (int)a7;
        v23 = (float *)(a3 + 4);
        v41 = (char *)a7 - a3;
        v39 = a6 - (_DWORD)a2;
        do
        {
          v38 = *(_DWORD *)(v9[11] + 4 * v11);
          if ( (v38 & a9) != 0 )
          {
            v24 = v42 ? *(_DWORD *)(*(_DWORD *)(v42 + 4) + 4 * v11) : v11;
            if ( v24 >= 0 )
            {
              v25 = v21;
              v26 = v12;
              v27 = v25;
              if ( v26 < *(float *)(*(_DWORD *)(a4 + 156) + 4 * v24 + a4) )
              {
                v35 = v27;
                v34 = (int)v22 + v39;
                if ( (v38 & 0x100000) != 0 )
                  sub_104250E0(v34, (int)v22, v35, (int)v36);
                else
                  sub_10425710(v34, (int)v22, v35, (int)v36);
                v28 = (float *)v40;
                *v22 = *(float *)v36;
                v29 = v41;
                v22[1] = *(float *)&v36[1];
                v22[2] = *(float *)&v36[2];
                v22[3] = *(float *)&v36[3];
                v30 = v37;
                *(v23 - 1) = *v28 * a8 + *(v23 - 1) * v37;
                v31 = *(float *)&v29[(_DWORD)v23];
                v9 = a1;
                *v23 = v31 * a8 + *v23 * v30;
                v27 = v30;
                v23[1] = a8 * v28[2] + v23[1] * v30;
                v26 = 0.0;
              }
              v32 = v26;
              v21 = v27;
              v12 = v32;
            }
          }
          v33 = *v9;
          v40 += 12;
          ++v11;
          v22 += 4;
          v23 += 3;
        }
        while ( v11 < *(_DWORD *)(v33 + 156) );
      }
    }
    else
    {
      v15 = 0;
      if ( *(int *)(v14 + 156) > 0 )
      {
        v16 = a2;
        v43 = a7;
        v17 = (float *)(a3 + 4);
        v41 = (char *)a7 - a3;
        v18 = a6 - (_DWORD)a2;
        do
        {
          if ( (a9 & *(_DWORD *)(a1[11] + 4 * v15)) != 0 )
          {
            if ( v42 )
              v19 = *(_DWORD *)(*(_DWORD *)(v42 + 4) + 4 * v15);
            else
              v19 = v15;
            if ( v19 >= 0 && *(float *)(*(_DWORD *)(a4 + 156) + 4 * v19 + a4) > 0.0 )
            {
              v20 = v41;
              *v16 = *(float *)((char *)v16 + v18);
              v16[1] = *(float *)((char *)v16 + v18 + 4);
              v16[2] = *(float *)((char *)v16 + v18 + 8);
              v16[3] = *(float *)((char *)v16 + v18 + 12);
              *(v17 - 1) = *v43;
              *v17 = *(float *)((char *)v17 + (_DWORD)v20);
              v17[1] = v43[2];
            }
          }
          v43 += 3;
          ++v15;
          v16 += 4;
          v17 += 3;
        }
        while ( v15 < *(_DWORD *)(*a1 + 156) );
      }
    }
  }
}
