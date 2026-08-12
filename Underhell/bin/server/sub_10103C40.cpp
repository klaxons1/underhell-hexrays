void __usercall sub_10103C40(int *a1@<eax>, int a2@<edx>, int a3, int a4, int a5, int a6, float a7, int a8)
{
  _DWORD *v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // ebx
  int v14; // eax
  int v15; // ecx
  double v16; // st7
  int v17; // ecx
  float *v18; // eax
  int v19; // edx
  int v20; // ebx
  int v21; // edx
  float *v22; // ecx
  float *v23; // edi
  int v24; // eax
  double v25; // st7
  int v26; // ecx
  float *v27; // edi
  float *v28; // ebx
  __int16 v29; // ax
  int v30; // eax
  int v31; // eax
  float v32; // eax
  int *v33; // eax
  int v34; // ebx
  int v35; // ecx
  int v36[4]; // [esp+20h] [ebp-40h] BYREF
  int v37; // [esp+30h] [ebp-30h]
  float v38; // [esp+34h] [ebp-2Ch]
  float v39; // [esp+38h] [ebp-28h]
  float v40; // [esp+3Ch] [ebp-24h] BYREF
  int v41; // [esp+40h] [ebp-20h]
  int v42; // [esp+44h] [ebp-1Ch]
  int v43; // [esp+48h] [ebp-18h] BYREF
  int v44; // [esp+4Ch] [ebp-14h]
  int v45; // [esp+50h] [ebp-10h]
  int v46; // [esp+54h] [ebp-Ch]
  float *v47; // [esp+58h] [ebp-8h]
  int v48; // [esp+5Ch] [ebp-4h]

  v9 = (_DWORD *)a1[1];
  ++a1[35];
  if ( v9 )
  {
    sub_101037F0(a6, a2, a1, v9, a3, a4, a5, a7, a8);
  }
  else
  {
    v10 = sub_102454D0(a2);
    v11 = *a1;
    v12 = *(_DWORD *)(*a1 + 400);
    v13 = *a1 + *(_DWORD *)(*a1 + 160);
    v45 = v10;
    v46 = v13;
    if ( v12 && (v14 = v12 + v11, (v15 = *(_DWORD *)(v14 + 16)) != 0) )
      v42 = v14 + v15;
    else
      v42 = 0;
    v16 = (double)(*(_DWORD *)(v10 + 16) - 1) * a7;
    v38 = v16;
    v37 = (int)v16;
    v43 = (int)v16;
    v39 = v16 - (double)(int)v16;
    v17 = sub_10244E70(&v43, &v40);
    v18 = (float *)(a5 + *(_DWORD *)(a5 + 156));
    v19 = *a1;
    v48 = v17;
    v47 = v18;
    if ( v17 )
    {
      v25 = 0.0;
      v26 = 0;
      v44 = 0;
      if ( *(int *)(v19 + 156) > 0 )
      {
        v27 = (float *)a4;
        v41 = v13 + 40;
        v28 = (float *)(a3 + 8);
        while ( 1 )
        {
          if ( v48 && *(unsigned __int8 *)v48 == v26 )
          {
            if ( v25 < *v18 && (a8 & *(_DWORD *)(a1[11] + 4 * v26)) != 0 )
            {
              sub_100FE600(v43, v39, v46, (_DWORD *)v42, (unsigned __int8 *)v48, (int)v27);
              sub_10101410(v43, v39, v46, v42, (unsigned __int8 *)v48, v28 - 2);
              v25 = 0.0;
              v26 = v44;
              ++a1[33];
              ++a1[34];
            }
            v29 = *(_WORD *)(v48 + 2);
            if ( v29 )
              v48 += v29;
            else
              v48 = 0;
          }
          else if ( v25 < *v18 && (a8 & *(_DWORD *)(a1[11] + 4 * v26)) != 0 )
          {
            if ( (*(_BYTE *)(v45 + 12) & 4) != 0 )
            {
              *v27 = v25;
              v27[1] = v25;
              v27[2] = v25;
              v27[3] = 1.0;
              *(v28 - 2) = v25;
              *(v28 - 1) = v25;
              *v28 = v25;
            }
            else
            {
              v30 = v41;
              *v27 = *(float *)(v41 + 4);
              v27[1] = *(float *)(v30 + 8);
              v27[2] = *(float *)(v30 + 12);
              v27[3] = *(float *)(v30 + 16);
              *(v28 - 2) = *(float *)(v30 - 8);
              *(v28 - 1) = *(float *)(v30 - 4);
              *v28 = *(float *)v30;
            }
            ++a1[34];
          }
          ++v47;
          v46 += 216;
          v41 += 216;
          v31 = *a1;
          ++v26;
          v27 += 4;
          v28 += 3;
          v44 = v26;
          if ( v26 >= *(_DWORD *)(v31 + 156) )
            break;
          v18 = v47;
        }
        v10 = v45;
      }
      if ( v40 > v25 )
        sub_10101F30((int)a1, *a1, 0, *a1 + *(_DWORD *)(*a1 + 160), v10, v38, a3, a4, a8, v40);
      if ( *(_DWORD *)(v10 + 72) )
      {
        v41 = (int)sub_100FE100(&dword_1069A680);
        if ( !v41 )
        {
          v41 = sub_10184390(6144);
          if ( (v41 & 7) != 0 )
            __debugbreak();
        }
        v32 = 0.0;
        memset(v36, 0, sizeof(v36));
        v38 = 0.0;
        if ( *(int *)(v10 + 72) > 0 )
        {
          do
          {
            v33 = (int *)sub_10245190(LODWORD(v32));
            if ( !v33 )
              break;
            v34 = a1[11];
            if ( (a8 & *(_DWORD *)(v34 + 4 * *v33)) != 0 )
            {
              v35 = v33[1];
              if ( (a8 & *(_DWORD *)(v34 + 4 * v35)) != 0 )
                sub_101031E0((int)a1, v41, (int)v36, a3, a4, v46, *v33, v35, a7, v37, v39);
              v10 = v45;
            }
            LODWORD(v32) = LODWORD(v38) + 1;
            v38 = v32;
          }
          while ( SLODWORD(v32) < *(_DWORD *)(v10 + 72) );
        }
        sub_100FE090(&dword_1069A680, (int *)v41);
      }
    }
    else
    {
      v20 = 0;
      v44 = 0;
      if ( *(int *)(v19 + 156) > 0 )
      {
        v21 = v46 + 40;
        v22 = (float *)(a3 + 8);
        v23 = (float *)(a4 + 8);
        v46 = a4 + 8;
        while ( 1 )
        {
          if ( *v18 > 0.0 )
          {
            v23 = (float *)v46;
            if ( (a8 & *(_DWORD *)(a1[11] + 4 * v20)) != 0 )
            {
              if ( (*(_BYTE *)(v45 + 12) & 4) != 0 )
              {
                *(float *)(v46 - 8) = 0.0;
                *(v23 - 1) = 0.0;
                *v23 = 0.0;
                v23[1] = 1.0;
                *(v22 - 2) = 0.0;
                *(v22 - 1) = 0.0;
                *v22 = 0.0;
              }
              else
              {
                v20 = v44;
                *(_DWORD *)(v46 - 8) = *(_DWORD *)(v21 + 4);
                *(v23 - 1) = *(float *)(v21 + 8);
                *v23 = *(float *)(v21 + 12);
                v23[1] = *(float *)(v21 + 16);
                *(v22 - 2) = *(float *)(v21 - 8);
                *(v22 - 1) = *(float *)(v21 - 4);
                *v22 = *(float *)v21;
              }
            }
          }
          v24 = *a1;
          ++v47;
          ++v20;
          v23 += 4;
          v22 += 3;
          v21 += 216;
          v44 = v20;
          v46 = (int)v23;
          if ( v20 >= *(_DWORD *)(v24 + 156) )
            break;
          v18 = v47;
        }
        v10 = v45;
      }
      sub_10101F30((int)a1, *a1, 0, *a1 + *(_DWORD *)(*a1 + 160), v10, v38, a3, a4, a8, 1.0);
    }
  }
}
