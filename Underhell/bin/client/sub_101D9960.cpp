double __usercall sub_101D9960@<st0>(
        int a1@<ecx>,
        float *a2@<edi>,
        int a3,
        int a4,
        int a5,
        unsigned __int8 a6,
        char a7,
        char a8)
{
  int v8; // ebp
  unsigned __int8 v9; // al
  int v10; // esi
  unsigned __int8 v11; // bl
  unsigned __int8 v12; // dl
  float *v13; // ecx
  double v14; // st3
  double v15; // st5
  double v16; // st3
  double v17; // st4
  double v18; // st5
  unsigned __int8 v19; // cl
  float *v20; // edx
  double v21; // st3
  double v22; // st5
  double v23; // st3
  double v24; // st4
  double v25; // st5
  float v27; // [esp+0h] [ebp-Ch]
  float v28; // [esp+4h] [ebp-8h]
  float v29; // [esp+8h] [ebp-4h]
  float v30; // [esp+8h] [ebp-4h]
  unsigned __int8 v31; // [esp+20h] [ebp+14h]

  v28 = 0.0;
  if ( a7 )
    v31 = 1;
  else
    v31 = a6;
  v8 = 0;
  if ( a5 > 0 )
  {
    v9 = a6;
    v10 = a1 + 8;
    do
    {
      if ( !a8 || *(_DWORD *)(v10 + 4) )
      {
        v11 = 0;
        v27 = 9.9999998e10;
        if ( a2 )
        {
          v12 = 0;
          if ( v31 )
          {
            v13 = (float *)(a4 + 128);
            do
            {
              v14 = *(float *)v10 - *v13;
              v15 = v14 * v14 * *a2;
              v16 = *(float *)(v10 - 4) - *(v13 - 16);
              v17 = v15;
              v18 = *(float *)(v10 - 8) - *(v13 - 32);
              v29 = v16 * v16 * a2[1] + v17 + v18 * v18 * a2[2];
              if ( v27 > (double)v29 )
              {
                v27 = v16 * v16 * a2[1] + v17 + v18 * v18 * a2[2];
                v11 = v12;
              }
              ++v12;
              ++v13;
            }
            while ( v12 < v31 );
          }
        }
        else
        {
          v19 = 0;
          if ( v31 )
          {
            v20 = (float *)(a4 + 64);
            do
            {
              v21 = *(float *)(v10 - 4) - *v20;
              v22 = v21 * v21;
              v23 = *(float *)v10 - v20[16];
              v24 = v22;
              v25 = *(float *)(v10 - 8) - *(v20 - 16);
              v30 = v23 * v23 + v24 + v25 * v25;
              if ( v27 > (double)v30 )
              {
                v27 = v23 * v23 + v24 + v25 * v25;
                v11 = v19;
              }
              ++v19;
              ++v20;
            }
            while ( v19 < v31 );
          }
        }
        v9 = a6;
        v28 = v27 + v28;
        if ( v11 == a6 - 1 )
        {
          v11 = 1;
        }
        else if ( v11 )
        {
          ++v11;
        }
        *(_BYTE *)(a3 + v8) = v11;
      }
      else
      {
        *(_BYTE *)(a3 + v8) = v9;
      }
      ++v8;
      v10 += 16;
    }
    while ( v8 < a5 );
  }
  return v28;
}
