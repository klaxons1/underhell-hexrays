int __fastcall sub_10196FF0(float *a1)
{
  int i; // eax
  int v2; // esi
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // edx
  int j; // edi
  int v9; // esi
  int v10; // edi
  int v11; // ebx
  int v12; // eax
  int v13; // edi
  float *v14; // esi
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  int k; // eax
  int v20; // edi
  int v21; // esi
  int v22; // eax
  int v23; // eax
  float *v24; // eax
  double v25; // st7
  float *v26; // ecx
  int v27; // eax
  int v28; // edi
  int v29; // ebx
  int v30; // eax
  int m; // eax
  int v32; // ebx
  float *v33; // eax
  float *v34; // esi
  int v35; // eax
  int v36; // edi
  int v37; // ecx
  int v38; // edx
  int v39; // edx
  int v40; // ecx
  int v41; // edx
  int v42; // edi
  int *v43; // esi
  float *v45; // [esp-4h] [ebp-20h]
  int v46; // [esp+Ch] [ebp-10h] BYREF
  int v47; // [esp+10h] [ebp-Ch]
  int v48; // [esp+14h] [ebp-8h]
  float *v49; // [esp+18h] [ebp-4h]

  v49 = a1;
  v48 = 0;
  v47 = (int)(a1 + 167);
  v46 = 2;
  do
  {
    for ( i = *(_DWORD *)(v47 + 12); i != -1; i = *(_DWORD *)(v5 + *(_DWORD *)v47 + 8) )
    {
      v2 = *(_DWORD *)v47;
      v3 = 3 * i;
      v4 = *(_DWORD *)(dword_106B8370 + 1212);
      v5 = 4 * v3;
      v6 = *(_DWORD *)(*(_DWORD *)v47 + v5);
      if ( v4 == -1 )
      {
LABEL_9:
        *(_DWORD *)(v2 + v5) = sub_1019E7E0(*(_DWORD *)(*(_DWORD *)v47 + v5));
      }
      else
      {
        v7 = *(_DWORD *)(dword_106B8370 + 1200);
        while ( *(_DWORD *)(v7 + 12 * v4) != v6 )
        {
          v4 = *(_DWORD *)(v7 + 12 * v4 + 8);
          if ( v4 == -1 )
            goto LABEL_9;
        }
      }
      if ( v6 && !*(_DWORD *)(v2 + v5) )
      {
        Msg("CNavArea::PostLoad: Corrupt navigation ladder data. Cannot connect Navigation Areas.\n");
        v48 = 5;
      }
    }
    v47 += 36;
    --v46;
  }
  while ( v46 );
  v47 = (int)(v49 + 131);
  v46 = 4;
  do
  {
    for ( j = *(_DWORD *)(v47 + 12); j != -1; j = *(_DWORD *)(v10 + *(_DWORD *)v47 + 8) )
    {
      v9 = *(_DWORD *)v47;
      v10 = 12 * j;
      v11 = *(_DWORD *)(*(_DWORD *)v47 + v10);
      v12 = sub_1019D410(v11);
      *(_DWORD *)(v9 + v10) = v12;
      if ( v11 && !v12 )
      {
        Msg("CNavArea::PostLoad: Corrupt navigation data. Cannot connect Navigation Areas.\n");
        v48 = 5;
      }
    }
    v47 += 36;
    --v46;
  }
  while ( v46 );
  v13 = 0;
  if ( *((_BYTE *)v49 + 476) )
  {
    v14 = v49 + 40;
    do
    {
      v15 = sub_1019D410(*((_DWORD *)v14 - 1));
      v16 = *(_DWORD *)v14;
      *((_DWORD *)v14 - 1) = v15;
      v17 = sub_1019D410(v16);
      v18 = *((_DWORD *)v14 + 2);
      *(_DWORD *)v14 = v17;
      *((_DWORD *)v14 + 2) = sub_1019D410(v18);
      ++v13;
      v14 += 5;
    }
    while ( v13 < *((unsigned __int8 *)v49 + 476) );
  }
  for ( k = *((_DWORD *)v49 + 33); k != -1; k = *(_DWORD *)(v20 + *((_DWORD *)v49 + 30) + 8) )
  {
    v20 = 12 * k;
    v21 = *(_DWORD *)(12 * k + *((_DWORD *)v49 + 30));
    v45 = *(float **)v21;
    v47 = 12 * k;
    v22 = sub_1019D410(v45);
    *(_DWORD *)v21 = v22;
    if ( !v22 )
    {
      Msg("CNavArea::PostLoad: Corrupt navigation data. Missing \"from\" Navigation Area for Encounter Spot.\n");
      v48 = 5;
    }
    v23 = sub_1019D410(*(_DWORD *)(v21 + 8));
    *(_DWORD *)(v21 + 8) = v23;
    if ( !v23 )
    {
      Msg("CNavArea::PostLoad: Corrupt navigation data. Missing \"to\" Navigation Area for Encounter Spot.\n");
      v48 = 5;
    }
    if ( *(_DWORD *)v21 )
    {
      v24 = *(float **)(v21 + 8);
      if ( v24 )
      {
        sub_1018B0A0(v49, v24, *(_DWORD *)(v21 + 12), (float *)(v21 + 28), (float *)&v46);
        sub_1018B0A0(v49, *(float **)v21, *(_DWORD *)(v21 + 4), (float *)(v21 + 16), (float *)&v46);
        v25 = sub_1018AD70((float *)*(_DWORD *)v21, (float *)(v21 + 16));
        v26 = *(float **)(v21 + 8);
        *(float *)(v21 + 24) = v25 + 36.0;
        *(float *)(v21 + 36) = sub_1018AD70(v26, (float *)(v21 + 28)) + 36.0;
      }
    }
    v27 = *(_DWORD *)(v21 + 52);
    if ( v27 != -1 )
    {
      do
      {
        v28 = *(_DWORD *)(v21 + 40);
        v29 = 16 * v27;
        v30 = sub_1019EB30(*(_DWORD *)(v28 + 16 * v27 + 4));
        *(_DWORD *)(v28 + v29 + 4) = v30;
        if ( !v30 )
        {
          Msg("CNavArea::PostLoad: Corrupt navigation data. Missing Hiding Spot\n");
          v48 = 5;
        }
        v27 = *(_DWORD *)(v29 + *(_DWORD *)(v21 + 40) + 12);
      }
      while ( v27 != -1 );
      v20 = v47;
    }
  }
  for ( m = dword_10632630; m != -1; m = *(_DWORD *)(v32 + dword_10632624 + 8) )
  {
    v32 = 12 * m;
    v33 = *(float **)(12 * m + dword_10632624);
    v46 = v32;
    v47 = (int)v33;
    if ( v33 != v49 && sub_1018ACB0(v49, v33) )
    {
      v34 = v49;
      v35 = sub_1018CED0((int *)v49 + 189, 0);
      if ( v35 >= 0 && v35 < *((_DWORD *)v34 + 190) && v35 <= *((_DWORD *)v34 + 196) )
      {
        v36 = *((_DWORD *)v34 + 189);
        v37 = v36 + 12 * v35;
        if ( *(_DWORD *)(v37 + 4) != v35 )
        {
          v38 = *(_DWORD *)(v37 + 4);
          if ( v38 == -1 )
          {
            v34[192] = *(float *)(v37 + 8);
          }
          else
          {
            *(_DWORD *)(v36 + 12 * v38 + 8) = *(_DWORD *)(v37 + 8);
            v32 = v46;
          }
          v39 = *(_DWORD *)(v37 + 8);
          if ( v39 == -1 )
          {
            v34[193] = *(float *)(v37 + 4);
          }
          else
          {
            *(_DWORD *)(*((_DWORD *)v34 + 189) + 12 * v39 + 4) = *(_DWORD *)(v37 + 4);
            v32 = v46;
          }
          *(_DWORD *)(v37 + 8) = v35;
          *(_DWORD *)(v37 + 4) = v35;
          --*((_DWORD *)v34 + 195);
        }
      }
      v40 = *((_DWORD *)v34 + 189);
      v41 = 12 * v35;
      *(_DWORD *)(v40 + v41 + 8) = -1;
      v42 = *((_DWORD *)v34 + 193);
      *(_DWORD *)(v40 + v41 + 4) = v42;
      *((_DWORD *)v34 + 193) = v35;
      if ( v42 == -1 )
        *((_DWORD *)v34 + 192) = v35;
      else
        *(_DWORD *)(*((_DWORD *)v34 + 189) + 12 * v42 + 8) = v35;
      ++*((_DWORD *)v34 + 195);
      v43 = (int *)(v41 + *((_DWORD *)v34 + 189));
      if ( v43 )
        *v43 = v47;
    }
  }
  return v48;
}
