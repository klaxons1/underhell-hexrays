int __fastcall sub_1018C670(int a1, int a2, float *a3, float *a4, int a5, int a6, int a7)
{
  int result; // eax
  double v8; // st7
  int v9; // edi
  float *v10; // esi
  double v11; // st5
  BOOL v12; // ebx
  double v13; // rt1
  double v14; // st5
  double v15; // st6
  int v16; // ebx
  double v17; // st6
  double v18; // st4
  double v19; // rt1
  double v20; // st4
  double v21; // st5
  unsigned int v22; // ecx
  double v23; // rt2
  double v24; // st4
  double v25; // st6
  float *v26; // edi
  unsigned int v27; // eax
  double v28; // st7
  float *v29; // eax
  double v30; // st6
  double v31; // st5
  float v32; // [esp+0h] [ebp-2Ch]
  float v33; // [esp+4h] [ebp-28h]
  float v34; // [esp+8h] [ebp-24h]
  float v35; // [esp+10h] [ebp-1Ch]
  float v36; // [esp+14h] [ebp-18h]
  float v37; // [esp+18h] [ebp-14h]
  unsigned int v38; // [esp+1Ch] [ebp-10h]
  int v39; // [esp+20h] [ebp-Ch]
  int v40; // [esp+24h] [ebp-8h]
  int v41; // [esp+28h] [ebp-4h]

  result = 0;
  if ( a7 )
  {
    v41 = 0;
    v39 = 0;
    if ( a5 > 0 )
    {
      v8 = 0.0;
      v9 = a1 + 8;
      v40 = a1 + 8;
      v10 = (float *)(a2 + 204);
      do
      {
        v11 = *(v10 - 1) * a3[1] + *a3 * *(v10 - 2) + a3[2] * *v10 - v10[1];
        v12 = v11 > v8;
        v13 = v11;
        v14 = *(v10 - 1) * a4[1] + *a4 * *(v10 - 2) + a4[2] * *v10 - v10[1];
        v15 = v13;
        if ( v12 != v14 > v8 )
        {
          v16 = 0;
          v17 = v15 / (v15 - v14);
          v18 = (*a4 - *a3) * v17 + *a3;
          v35 = v18;
          v19 = v18;
          v20 = (a4[1] - a3[1]) * v17 + a3[1];
          v21 = v19;
          v36 = v20;
          v22 = *((_DWORD *)v10 - 3);
          v23 = v20;
          v24 = v17 * (a4[2] - a3[2]) + a3[2];
          v25 = v23;
          v37 = v24;
          if ( v22 )
          {
            v26 = v10 - 49;
            do
            {
              v38 = v16 + 1;
              v27 = 3 * ((v16 + 1) % v22) - 51;
              v28 = *(v26 - 2) - v10[v27];
              v29 = &v10[v27];
              v30 = *(v26 - 1) - v29[1];
              v31 = *v26 - v29[2];
              v32 = *(v10 - 1) * v31 - v30 * *v10;
              v33 = v28 * *v10 - v31 * *(v10 - 2);
              v34 = v30 * *(v10 - 2) - v28 * *(v10 - 1);
              off_103EDFEC();
              if ( v34 * v37 + v32 * v35 + v33 * v36 - (*(v26 - 2) * v32 + *(v26 - 1) * v33 + v34 * *v26) < 0.0 )
                break;
              ++v16;
              v22 = *((_DWORD *)v10 - 3);
              v26 += 3;
            }
            while ( v38 < v22 );
            v9 = v40;
            v8 = 0.0;
            v25 = v36;
            v24 = v37;
            v21 = v35;
          }
          if ( v16 == *((_DWORD *)v10 - 3) )
          {
            *(float *)(v9 - 8) = v21;
            *(_DWORD *)(a6 + 4 * v41) = v10 - 51;
            *(float *)(v9 - 4) = v25;
            v9 += 12;
            *(float *)(v9 - 12) = v24;
            ++v41;
            v40 = v9;
            if ( v41 >= a7 )
              break;
          }
        }
        v10 += 54;
        ++v39;
      }
      while ( v39 < a5 );
    }
    return v41;
  }
  return result;
}
