double __usercall sub_101E1440@<st0>(
        __m128 a1@<xmm2>,
        int a2,
        unsigned __int16 a3,
        char a4,
        __int64 a5,
        _BYTE *a6,
        void *a7,
        char a8,
        char a9,
        char a10,
        unsigned __int8 a11,
        float *a12,
        char a13,
        unsigned __int8 a14)
{
  size_t v14; // ebx
  unsigned int v15; // eax
  double result; // st7
  double v17; // st7
  int v18; // edx
  double v19; // st6
  int v20; // eax
  unsigned int v21; // edi
  float *v22; // ecx
  int v23; // esi
  double v24; // rt0
  double v25; // st6
  double v26; // st7
  double v27; // rt1
  int v28; // esi
  int v29; // esi
  int v30; // esi
  double v31; // rt2
  bool v32; // zf
  unsigned int v33; // eax
  unsigned int v34; // ecx
  float *v35; // edx
  int v36; // esi
  double v37; // rtt
  int v38; // ecx
  double v39; // rt0
  double v40; // st6
  double v41; // st7
  double v42; // rt1
  _BYTE *v43; // esi
  float *v44; // edx
  int v45; // edi
  int i; // ecx
  int v47; // [esp+18h] [ebp-728h]
  float v48[8]; // [esp+20h] [ebp-720h] BYREF
  float v49[64]; // [esp+40h] [ebp-700h] BYREF
  _DWORD v50[64]; // [esp+140h] [ebp-600h]
  _DWORD Base[64]; // [esp+240h] [ebp-500h] BYREF
  _BYTE v52[1024]; // [esp+340h] [ebp-400h] BYREF

  memset(v49, 0, sizeof(v49));
  memset(v52, 0, sizeof(v52));
  v14 = 0;
  v15 = 0;
  if ( !a3 )
    goto LABEL_44;
  do
  {
    if ( !a13 || (*(_DWORD *)(a2 + 4 * v15) & 0xFF000000) >= a14 << 24 )
      Base[v14++] = *(_DWORD *)(a2 + 4 * v15) | 0xFF000000;
    ++v15;
  }
  while ( v15 < a3 );
  if ( v14 )
  {
    if ( v14 == a3 || !a13 || (a8 & 1) != 0 )
    {
      qsort(Base, v14, 4u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_101D94B0);
      v17 = 1.0;
      v18 = Base[0];
      v49[0] = 1.0;
      v19 = 1.0;
      v20 = 0;
      v50[0] = Base[0];
      v21 = 1;
      if ( (int)(v14 - 1) >= 4 )
      {
        v22 = v49;
        do
        {
          v23 = Base[v21];
          if ( v18 == v23 )
          {
            *v22 = *v22 + v19;
            v27 = v19;
            v25 = v17;
            v26 = v27;
          }
          else
          {
            ++v20;
            v24 = v19;
            v25 = v17;
            v26 = v24;
            v22 = &v49[v20];
            *v22 = v25;
            v50[v20] = v23;
            v18 = v23;
          }
          v28 = Base[v21 + 1];
          if ( v18 == v28 )
          {
            *v22 = *v22 + v26;
          }
          else
          {
            v22 = &v49[++v20];
            *v22 = v25;
            v50[v20] = v28;
            v18 = v28;
          }
          v29 = Base[v21 + 2];
          if ( v18 == v29 )
          {
            *v22 = *v22 + v26;
          }
          else
          {
            v22 = &v49[++v20];
            *v22 = v25;
            v50[v20] = v29;
            v18 = v29;
          }
          v30 = Base[v21 + 3];
          if ( v18 == v30 )
          {
            *v22 = *v22 + v26;
          }
          else
          {
            v22 = &v49[++v20];
            *v22 = v25;
            v50[v20] = v30;
            v18 = v30;
          }
          v21 += 4;
          v31 = v25;
          v19 = v26;
          v17 = v31;
        }
        while ( v21 < v14 - 3 );
      }
      if ( v21 < v14 )
      {
        while ( 1 )
        {
          v38 = Base[v21];
          if ( v18 == v38 )
          {
            v49[v20] = v49[v20] + v19;
            v42 = v19;
            v40 = v17;
            v41 = v42;
          }
          else
          {
            ++v20;
            v39 = v19;
            v40 = v17;
            v41 = v39;
            v49[v20] = v40;
            v50[v20] = v38;
            v18 = v38;
          }
          if ( ++v21 >= v14 )
            break;
          v37 = v40;
          v19 = v41;
          v17 = v37;
        }
      }
      v32 = v20 == -1;
      v33 = v20 + 1;
      v34 = 0;
      if ( !v32 )
      {
        v35 = (float *)&v52[4];
        do
        {
          v47 = BYTE1(v50[v34]);
          v36 = LOBYTE(v50[v34]);
          v35[1] = (float)BYTE2(v50[v34++]);
          *v35 = (float)v47;
          v35 += 4;
          *(v35 - 5) = (float)v36;
          *(v35 - 2) = 255.0;
        }
        while ( v34 < v33 );
      }
      if ( a9 )
        sub_101DFD00(a1, v48, (int)v52, (int)v49, v33, a8, a10, a11, a12, a4, a5, SBYTE4(a5));
      else
        sub_101E05F0(v48, (int)v52, (int)v49, v33, a8, a10, a11, a12, a4, a5);
      v43 = a6;
      v44 = v48;
      v45 = 3;
      do
      {
        for ( i = 0; i < 2; v43[i - 1] = (int)result )
        {
          result = *v44;
          ++i;
          ++v44;
        }
        v43 += 2;
        --v45;
      }
      while ( v45 );
      sub_101DB340(a2, a3, a6, (int)a7, a8, a12, a13, a14, a4, a5, BYTE4(a5));
    }
    else
    {
      return 3.4028235e38;
    }
  }
  else
  {
LABEL_44:
    a6[4] = 0;
    a6[2] = 0;
    *a6 = 0;
    a6[5] = -1;
    a6[3] = -1;
    a6[1] = -1;
    memset(a7, 255, a3);
    return 0.0;
  }
  return result;
}
