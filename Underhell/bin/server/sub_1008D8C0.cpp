int __cdecl sub_1008D8C0(float *a1, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v6; // edi
  int v7; // ebx
  double v8; // st7
  float *v9; // ecx
  double v10; // st6
  int v11; // edx
  double v12; // st5
  double v13; // st7
  double v14; // st6
  float *v15; // edx
  double v16; // st2
  double v17; // st4
  double v18; // st2
  double v19; // st3
  double v20; // st4
  int v21; // eax
  float *v22; // edx
  double v23; // st2
  double v24; // st4
  double v25; // st2
  double v26; // st3
  double v27; // st4
  int v28; // eax
  float *v29; // edx
  double v30; // st2
  double v31; // st4
  double v32; // st2
  double v33; // st3
  double v34; // st4
  int v35; // eax
  float *v36; // edx
  double v37; // st2
  double v38; // st4
  double v39; // st2
  double v40; // st3
  double v41; // st4
  float *v42; // edx
  double v43; // st2
  double v44; // st4
  double v45; // st2
  double v46; // st3
  double v47; // st4
  int v48; // edx
  int i; // esi
  float *v50; // eax
  double v51; // st2
  double v52; // st4
  double v53; // st2
  double v54; // st3
  double v55; // st4
  int v57; // [esp+14h] [ebp+8h]

  v5 = a2 + 1;
  v6 = a5 - 1;
  if ( a2 + 1 <= a5 - 1 )
  {
    if ( v5 < 0 )
      v5 = a5 - 1;
  }
  else
  {
    v5 = 0;
  }
  v7 = a4;
  v8 = *a1 - *(float *)(a4 + 12 * a2);
  v9 = (float *)(a4 + 12 * a2);
  v10 = a1[1] - v9[1];
  v11 = 0;
  v12 = a1[2] - v9[2];
  v57 = 0;
  v13 = v8 * v8 + v10 * v10 + v12 * v12;
  v14 = v13;
  if ( a5 < 4 )
  {
LABEL_29:
    if ( v11 >= a5 )
    {
      v7 = a4;
    }
    else
    {
      do
      {
        v7 = a4;
        v42 = (float *)(a4 + 12 * v5);
        v43 = v9[1] - v42[1];
        v44 = v43 * v43;
        v45 = *v9 - *v42;
        v46 = v44;
        v47 = v9[2] - v42[2];
        v14 = v14 + v45 * v45 + v46 + v47 * v47;
        if ( v5 == a3 )
          break;
        if ( ++v5 <= v6 )
        {
          if ( v5 < 0 )
            v5 = a5 - 1;
        }
        else
        {
          v5 = 0;
        }
        ++v57;
      }
      while ( v57 < a5 );
    }
  }
  else
  {
    while ( 1 )
    {
      v15 = (float *)(v7 + 12 * v5);
      v16 = v9[1] - v15[1];
      v17 = v16 * v16;
      v18 = *v9 - *v15;
      v19 = v17;
      v20 = v9[2] - v15[2];
      v14 = v14 + v18 * v18 + v19 + v20 * v20;
      if ( v5 == a3 )
        break;
      v21 = v5 + 1;
      if ( v21 <= v6 )
      {
        if ( v21 < 0 )
          v21 = a5 - 1;
      }
      else
      {
        v21 = 0;
      }
      v22 = (float *)(v7 + 12 * v21);
      v23 = v9[1] - v22[1];
      v24 = v23 * v23;
      v25 = *v9 - *v22;
      v26 = v24;
      v27 = v9[2] - v22[2];
      v14 = v14 + v25 * v25 + v26 + v27 * v27;
      if ( v21 == a3 )
        break;
      v28 = v21 + 1;
      if ( v28 <= v6 )
      {
        if ( v28 < 0 )
          v28 = a5 - 1;
      }
      else
      {
        v28 = 0;
      }
      v29 = (float *)(v7 + 12 * v28);
      v30 = v9[1] - v29[1];
      v31 = v30 * v30;
      v32 = *v9 - *v29;
      v33 = v31;
      v34 = v9[2] - v29[2];
      v14 = v14 + v32 * v32 + v33 + v34 * v34;
      if ( v28 == a3 )
        break;
      v35 = v28 + 1;
      if ( v35 <= v6 )
      {
        if ( v35 < 0 )
          v35 = a5 - 1;
      }
      else
      {
        v35 = 0;
      }
      v36 = (float *)(v7 + 12 * v35);
      v37 = v9[1] - v36[1];
      v38 = v37 * v37;
      v39 = *v9 - *v36;
      v40 = v38;
      v41 = v9[2] - v36[2];
      v14 = v14 + v39 * v39 + v40 + v41 * v41;
      if ( v35 == a3 )
        break;
      v5 = v35 + 1;
      if ( v5 <= v6 )
      {
        if ( v5 < 0 )
          v5 = a5 - 1;
      }
      else
      {
        v5 = 0;
      }
      v11 = v57 + 4;
      v57 = v11;
      if ( v11 >= a5 - 3 )
        goto LABEL_29;
      v7 = a4;
    }
  }
  v48 = a2 - 1;
  if ( a2 - 1 <= v6 )
  {
    if ( v48 < 0 )
      v48 = a5 - 1;
  }
  else
  {
    v48 = 0;
  }
  for ( i = 0; i < a5; ++i )
  {
    v50 = (float *)(v7 + 12 * v48);
    v51 = v9[1] - v50[1];
    v52 = v51 * v51;
    v53 = *v9 - *v50;
    v54 = v52;
    v55 = v9[2] - v50[2];
    v13 = v13 + v53 * v53 + v54 + v55 * v55;
    if ( v14 < v13 )
      break;
    if ( v48 == a3 )
      return -1;
    if ( --v48 <= v6 )
    {
      if ( v48 < 0 )
        v48 = a5 - 1;
    }
    else
    {
      v48 = 0;
    }
  }
  return 1;
}
