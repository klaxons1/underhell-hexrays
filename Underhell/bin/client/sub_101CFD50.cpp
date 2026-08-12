_DWORD *__cdecl sub_101CFD50(_DWORD *a1)
{
  _DWORD *v1; // edx
  int v2; // ecx
  int v3; // edi
  bool v4; // cc
  int v5; // eax
  int v6; // esi
  int v7; // ebp
  float *v8; // edx
  double v9; // st7
  int v10; // eax
  unsigned int v11; // edi
  double *v12; // ebx
  int v13; // esi
  _DWORD *v14; // ebp
  double v15; // st7
  int v16; // eax
  bool v17; // al
  BOOL v18; // eax
  int i; // ecx
  int v20; // edx
  int v21; // ecx
  int v22; // edi
  int v23; // edi
  int v24; // esi
  _DWORD *result; // eax
  float *v26; // ecx
  int v27; // eax
  float *v28; // [esp+10h] [ebp-458h]
  int v29; // [esp+14h] [ebp-454h]
  int v30; // [esp+18h] [ebp-450h]
  int v31; // [esp+1Ch] [ebp-44Ch]
  int v32; // [esp+20h] [ebp-448h]
  int v33; // [esp+24h] [ebp-444h]
  int v34; // [esp+28h] [ebp-440h]
  int v35; // [esp+2Ch] [ebp-43Ch]
  _DWORD v36[5]; // [esp+30h] [ebp-438h]
  _DWORD v37[5]; // [esp+44h] [ebp-424h] BYREF
  _DWORD v38[5]; // [esp+58h] [ebp-410h]
  _DWORD v39[15]; // [esp+6Ch] [ebp-3FCh] BYREF
  float v40[240]; // [esp+A8h] [ebp-3C0h] BYREF

  v1 = a1;
  v2 = 0;
  v38[1] = 6;
  v38[2] = 6;
  v38[3] = 6;
  v38[4] = 6;
  v3 = 0;
  v4 = *a1 <= 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v38[0] = 8;
  v39[0] = 0;
  v39[1] = 0;
  v39[2] = 1;
  v39[3] = 0;
  v39[4] = 1;
  memset(v37, 0, 12);
  v37[3] = 1;
  v37[4] = 1;
  v33 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  if ( !v4 )
  {
    v8 = (float *)(a1 + 1);
    do
    {
      dbl_10455530[v5] = *v8;
      dbl_104556B0[v6] = *v8;
      v9 = *v8;
      v29 = v5 + 1;
      ++v6;
      if ( v9 != 0.0 )
      {
        v10 = v31;
        dbl_10455830[v31] = *v8;
        v31 = v10 + 1;
      }
      if ( *v8 != 1.0 )
        dbl_104559B0[v7++] = *v8;
      if ( *v8 != 0.0 && *v8 != 1.0 )
        dbl_10455B30[v2++] = *v8;
      ++v3;
      ++v8;
      v5 = v29;
    }
    while ( v3 < *a1 );
    v1 = a1;
    v33 = v2;
    v32 = v7;
    v30 = v6;
  }
  if ( !v1[49] || (v34 = 1, v5 == v31) )
    v34 = 0;
  v11 = 0;
  if ( !v1[50] || (v35 = 1, v5 == v7) )
    v35 = 0;
  v36[0] = 1;
  v36[1] = 1;
  v12 = dbl_10455530;
  v36[2] = v31 != v6;
  v36[3] = v7 != v6;
  v36[4] = v2 != v6;
  v28 = v40;
  v13 = 0;
  do
  {
    if ( v36[v13] )
    {
      v14 = &v39[v11 / 4 + 5];
      v15 = sub_101D00A0(v38[v13], *(int *)((char *)&v29 + v13 * 4), v12, &v39[v11 / 4 + 5], v28);
      v16 = v34;
      dbl_104584A0[v11 / 8] = v15;
      v36[v13] = 1;
      if ( v16 && !v39[v13] )
      {
        v17 = !*v14 || !v39[v11 / 4 + 6];
        v36[v13] = v17;
      }
      if ( v35 && !v37[v13] )
      {
        v18 = *v14 == 1 || v39[v11 / 4 + 6] == 1;
        v36[v13] &= v18;
      }
    }
    v12 += 48;
    v11 += 8;
    ++v13;
    v28 += 48;
  }
  while ( (int)v12 < (int)dbl_10455CB0 );
  for ( i = 0; i < 5; ++i )
  {
    if ( v36[i] )
      break;
  }
  v20 = i;
  v21 = i + 1;
  if ( v21 < 5 )
  {
    v22 = v20;
    do
    {
      if ( v36[v21] && dbl_104584A0[v21] < dbl_104584A0[v22] )
      {
        v20 = v21;
        v22 = v21;
      }
      ++v21;
    }
    while ( v21 < 5 );
  }
  v23 = 0;
  v24 = 0;
  a1[51] = v38[v20];
  a1[52] = v39[2 * v20 + 5];
  a1[53] = v39[2 * v20 + 6];
  result = (_DWORD *)*a1;
  if ( (int)*a1 > 0 )
  {
    v26 = (float *)(a1 + 54);
    do
    {
      if ( *(v26 - 53) == 0.0 && v39[v20] )
      {
        *(_DWORD *)v26 = 6;
      }
      else if ( *(v26 - 53) == 1.0 && v37[v20] )
      {
        *(_DWORD *)v26 = 7;
      }
      else
      {
        v27 = v23 + 48 * v20;
        ++v23;
        *v26 = v40[v27];
      }
      result = a1;
      ++v24;
      ++v26;
    }
    while ( v24 < *a1 );
  }
  return result;
}
