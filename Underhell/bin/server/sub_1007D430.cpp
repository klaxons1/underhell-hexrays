char __thiscall sub_1007D430(_DWORD *this, int a2, int a3, float *a4)
{
  int v6; // esi
  double v7; // st6
  float *v8; // edi
  double v9; // st3
  double v10; // st2
  double v11; // st2
  int v12; // esi
  int v13; // ebx
  double v14; // st6
  double v15; // st3
  int v16; // esi
  double v17; // st2
  double v18; // st2
  int v19; // ecx
  double v20; // st2
  double v21; // st2
  int v22; // ecx
  double v23; // st2
  double v24; // st2
  int v25; // ecx
  double v26; // st2
  double v27; // st2
  int v28; // ecx
  double v29; // st6
  double v30; // st3
  int v31; // esi
  float v32; // ebx
  double v33; // st2
  double v34; // st2
  int v35; // edx
  double v36; // st7
  int v37; // esi
  int v38; // edx
  float *v39; // ecx
  double v40; // st7
  double v41; // st6
  bool v42; // sf
  int v43; // [esp-8h] [ebp-5D8h]
  float v44; // [esp+8h] [ebp-5C8h]
  float v45[359]; // [esp+Ch] [ebp-5C4h] BYREF
  int v46; // [esp+5A8h] [ebp-28h]
  int v47; // [esp+5ACh] [ebp-24h]
  float *v48[2]; // [esp+5B0h] [ebp-20h] BYREF
  int v49; // [esp+5B8h] [ebp-18h]
  int v50; // [esp+5BCh] [ebp-14h]
  int v51; // [esp+5C0h] [ebp-10h]
  int v52; // [esp+5C4h] [ebp-Ch]
  int v53; // [esp+5C8h] [ebp-8h]
  int v54; // [esp+5CCh] [ebp-4h]
  int v55; // [esp+5D8h] [ebp+8h]
  int v56; // [esp+5DCh] [ebp+Ch]

  if ( !a3 )
    return 0;
  if ( a3 != 1 || this[3] || *(_DWORD *)a2 )
  {
    v43 = a3 + this[3];
    v48[0] = 0;
    v48[1] = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    sub_1007CF10((int *)v48, v43);
    sub_1007D3D0((int *)v48, a2, a3);
    sub_1007D150((int *)v48, this);
    v44 = 0.0;
    memset(v45, 0, sizeof(v45));
    v6 = v50;
    sub_1007CE50(v48[0], &v48[0][6 * v50]);
    if ( v6 <= 0 )
    {
      v36 = 0.0;
    }
    else
    {
      v7 = 0.0027777778;
      v8 = v48[0] + 5;
      v47 = v6;
      v9 = 0.0;
      do
      {
        v10 = *(v8 - 2) * 0.5;
        v56 = (int)(double)(int)(v10 * 120.0 * v7 + 0.5);
        v11 = *(v8 - 3) - v10;
        v12 = (int)(*(v8 - 2) * 120.0 * v7);
        if ( v11 < v9 )
          v11 = v11 + 360.0;
        v13 = (int)(v11 * 120.0 * v7);
        v46 = v13;
        v55 = 0;
        v52 = v12 + 1;
        if ( v12 + 1 >= 4 )
        {
          v14 = v9;
          v15 = *(v8 - 4);
          v16 = 1;
          v53 = v56 - 2;
          do
          {
            if ( v15 <= v14 )
            {
              v18 = v15;
            }
            else
            {
              v54 = abs32(v53 + 2);
              v17 = (double)v54 * 0.00083333335;
              if ( (*(_DWORD *)v8 & 1) != 0 && v55 > v56 || (*(_DWORD *)v8 & 2) != 0 && v55 < v56 )
                v17 = v17 * 0.9;
              v18 = *(v8 - 4) - v17 * *(v8 - 4);
            }
            v19 = 3 * ((v13 + v16 - 1) % 120);
            v45[v19 - 1] = v45[v19 - 1] + v18;
            if ( v18 > v45[v19] )
            {
              v45[v19] = v18;
              LODWORD(v45[v19 + 1]) = v8 - 5;
            }
            if ( v15 <= v14 )
            {
              v21 = v15;
            }
            else
            {
              v54 = abs32(v53 + 1);
              v20 = (double)v54 * 0.00083333335;
              if ( (*(_DWORD *)v8 & 1) != 0 && v16 > v56 || (*(_DWORD *)v8 & 2) != 0 && v16 < v56 )
                v20 = v20 * 0.9;
              v21 = *(v8 - 4) - v20 * *(v8 - 4);
            }
            v22 = 3 * ((v13 + v16) % 120);
            v45[v22 - 1] = v45[v22 - 1] + v21;
            if ( v21 > v45[v22] )
            {
              v45[v22] = v21;
              LODWORD(v45[v22 + 1]) = v8 - 5;
            }
            if ( v15 <= v14 )
            {
              v24 = v15;
            }
            else
            {
              v54 = abs32(v53);
              v23 = (double)v54 * 0.00083333335;
              if ( (*(_DWORD *)v8 & 1) != 0 && v16 + 1 > v56 || (*(_DWORD *)v8 & 2) != 0 && v16 + 1 < v56 )
                v23 = v23 * 0.9;
              v24 = *(v8 - 4) - v23 * *(v8 - 4);
            }
            v25 = 3 * ((v13 + v16 + 1) % 120);
            v45[v25 - 1] = v45[v25 - 1] + v24;
            if ( v24 > v45[v25] )
            {
              v45[v25] = v24;
              LODWORD(v45[v25 + 1]) = v8 - 5;
            }
            if ( v15 <= v14 )
            {
              v27 = v15;
            }
            else
            {
              v54 = abs32(v53 - 1);
              v26 = (double)v54 * 0.00083333335;
              if ( (*(_DWORD *)v8 & 1) != 0 && v16 + 2 > v56 || (*(_DWORD *)v8 & 2) != 0 && v16 + 2 < v56 )
                v26 = v26 * 0.9;
              v27 = *(v8 - 4) - v26 * *(v8 - 4);
            }
            v28 = 3 * ((v13 + v16 + 2) % 120);
            v45[v28 - 1] = v45[v28 - 1] + v27;
            if ( v27 > v45[v28] )
            {
              v45[v28] = v27;
              LODWORD(v45[v28 + 1]) = v8 - 5;
            }
            v53 -= 4;
            v16 += 4;
            v55 += 4;
          }
          while ( v55 < v52 - 3 );
          v9 = v14;
          v7 = 0.0027777778;
        }
        if ( v55 < v52 )
        {
          v29 = v9;
          v30 = *(v8 - 4);
          v31 = v56 - v55;
          LODWORD(v32) = v8 - 5;
          do
          {
            if ( v30 <= v29 )
            {
              v34 = v30;
            }
            else
            {
              v54 = abs32(v31);
              v33 = (double)v54 * 0.00083333335;
              if ( (*(_DWORD *)v8 & 1) != 0 && v55 > v56 || (*(_DWORD *)v8 & 2) != 0 && v55 < v56 )
                v33 = v33 * 0.9;
              v34 = *(float *)(LODWORD(v32) + 4) - v33 * *(float *)(LODWORD(v32) + 4);
            }
            v35 = (v46 + v55) % 120;
            v45[3 * v35 - 1] = v45[3 * v35 - 1] + v34;
            if ( v34 > v45[3 * v35] )
            {
              v45[3 * v35] = v34;
              v45[3 * v35 + 1] = v32;
            }
            --v31;
            ++v55;
          }
          while ( v55 < v52 );
          v9 = v29;
          v7 = 0.0027777778;
        }
        v8 += 6;
        --v47;
      }
      while ( v47 );
      v36 = v9;
    }
    v37 = -1;
    v38 = 2;
    v39 = &v45[2];
    do
    {
      if ( v36 < *(v39 - 3) )
      {
        v37 = v38 - 2;
        v36 = *(v39 - 3);
      }
      if ( v36 < *v39 )
      {
        v37 = v38 - 1;
        v36 = *v39;
      }
      if ( v36 < v39[3] )
      {
        v37 = v38;
        v36 = v39[3];
      }
      if ( v36 < v39[6] )
      {
        v37 = v38 + 1;
        v36 = v39[6];
      }
      if ( v36 < v39[9] )
      {
        v37 = v38 + 2;
        v36 = v39[9];
      }
      if ( v36 < v39[12] )
      {
        v37 = v38 + 3;
        v36 = v39[12];
      }
      v38 += 6;
      v39 += 18;
    }
    while ( v38 - 2 < 120 );
    if ( v37 == -1 )
    {
      if ( v49 >= 0 )
      {
        if ( v48[0] )
          (*(void (__thiscall **)(_DWORD, float *))(*g_pMemAlloc + 20))(g_pMemAlloc, v48[0]);
      }
      return 0;
    }
    else
    {
      v40 = (double)(3 * v37);
      v41 = *(float *)(LODWORD(v45[3 * v37 + 1]) + 8);
      if ( v41 > v40 && v40 + 3.0 >= v41 )
        v40 = *(float *)(LODWORD(v45[3 * v37 + 1]) + 8);
      v42 = v49 < 0;
      *a4 = v40;
      if ( !v42 && v48[0] )
        (*(void (__thiscall **)(_DWORD, float *))(*g_pMemAlloc + 20))(g_pMemAlloc, v48[0]);
      return 1;
    }
  }
  else
  {
    *a4 = *(float *)(a2 + 8);
    return 1;
  }
}
