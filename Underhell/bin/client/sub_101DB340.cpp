void __cdecl sub_101DB340(
        int a1,
        unsigned __int16 a2,
        _BYTE *a3,
        int a4,
        char a5,
        float *a6,
        char a7,
        unsigned __int8 a8,
        unsigned __int8 a9,
        unsigned __int8 a10,
        unsigned __int8 a11)
{
  char v11; // bl
  char v12; // bp
  unsigned int v13; // esi
  int v14; // eax
  int v15; // edi
  int v16; // ebx
  int v17; // ebp
  unsigned int v18; // edi
  int v19; // ecx
  int v20; // ecx
  int v21; // eax
  double v22; // st7
  int v23; // ecx
  unsigned int v24; // edi
  int v25; // esi
  double v26; // st7
  double v27; // st6
  unsigned __int8 *v28; // ecx
  unsigned int v29; // ebp
  float *v30; // edx
  int v31; // eax
  double v32; // rt0
  double v33; // st6
  double v34; // st7
  double v35; // rt1
  double v36; // rt2
  int v37; // eax
  double v38; // rtt
  double v39; // st6
  double v40; // st7
  double v41; // rt0
  double v42; // rt1
  int v43; // eax
  double v44; // rt2
  double v45; // st6
  double v46; // st7
  double v47; // rtt
  double v48; // rt0
  int v49; // eax
  double v50; // rt1
  double v51; // st6
  double v52; // st7
  double v53; // rt2
  double v54; // rtt
  float *v55; // eax
  int v56; // edx
  double v57; // rt0
  double v58; // st6
  double v59; // st7
  double v60; // rt1
  double v61; // rt2
  char v62; // [esp+10h] [ebp-42Ch]
  int v63; // [esp+10h] [ebp-42Ch]
  int v64; // [esp+10h] [ebp-42Ch]
  int v65; // [esp+10h] [ebp-42Ch]
  int v66; // [esp+10h] [ebp-42Ch]
  int v67; // [esp+10h] [ebp-42Ch]
  int v68; // [esp+10h] [ebp-42Ch]
  int v69; // [esp+10h] [ebp-42Ch]
  char v70; // [esp+14h] [ebp-428h]
  float v71; // [esp+14h] [ebp-428h]
  float v72; // [esp+14h] [ebp-428h]
  float v73; // [esp+14h] [ebp-428h]
  float v74; // [esp+14h] [ebp-428h]
  float v75; // [esp+14h] [ebp-428h]
  float v76[8]; // [esp+1Ch] [ebp-420h] BYREF
  char v77[4]; // [esp+3Ch] [ebp-400h] BYREF
  _OWORD v78[63]; // [esp+40h] [ebp-3FCh] BYREF

  v11 = byte_103EDE68[a10];
  v12 = byte_103EDE68[a9];
  v70 = byte_103EDE68[a11];
  v62 = a11 + a10 - 8;
  v13 = ((unsigned __int8)(v70 & *a3) >> (8 - a11))
      | ((unsigned __int8)(v12 & a3[4]) << (a11 + a10 + a9 - 8))
      | ((unsigned __int8)(v11 & a3[2]) << v62);
  v14 = 0;
  v15 = ((unsigned __int8)(v11 & a3[3]) << v62) | ((unsigned __int8)(v70 & a3[1]) >> (8 - a11));
  v16 = (unsigned __int8)(v12 & a3[5]) << (a11 + a10 + a9 - 8);
  v17 = 1;
  v18 = v16 | v15;
  if ( (a5 & 1) == 0 && v13 <= v18 || (a5 & 1) != 0 && v13 > v18 )
  {
    v14 = 1;
    v17 = 0;
  }
  v19 = (unsigned __int8)a3[v17 + 4];
  v76[4] = (float)(unsigned __int8)a3[v14 + 4];
  v63 = v19;
  v20 = (unsigned __int8)a3[v14 + 2];
  v21 = (unsigned __int8)a3[v14];
  v76[5] = (float)v63;
  v22 = (double)v20;
  v64 = (unsigned __int8)a3[v17 + 2];
  v23 = (unsigned __int8)a3[v17];
  v76[2] = v22;
  v76[3] = (float)v64;
  v24 = a8 << 24;
  v25 = 0;
  v76[0] = (float)v21;
  v76[1] = (float)v23;
  v26 = 1.0;
  v27 = 0.0;
  if ( a2 >= 4u )
  {
    v28 = (unsigned __int8 *)(a1 + 1);
    v29 = (((unsigned int)a2 - 4) >> 2) + 1;
    v30 = (float *)v78;
    v25 = 4 * v29;
    do
    {
      v65 = *v28;
      v31 = *(v28 - 1);
      v30[1] = (float)v28[1];
      *v30 = (float)v65;
      *(v30 - 1) = (float)v31;
      if ( a7 )
      {
        if ( (*(_DWORD *)(v28 - 1) & 0xFF000000) < v24 )
        {
          v71 = v27;
          v35 = v27;
          v33 = v26;
          v34 = v35;
        }
        else
        {
          v32 = v27;
          v33 = v26;
          v34 = v32;
          v71 = v33;
        }
        v30[2] = v71;
        v36 = v33;
        v27 = v34;
        v26 = v36;
      }
      v66 = v28[4];
      v37 = v28[3];
      v30[5] = (float)v28[5];
      v30[4] = (float)v66;
      v30[3] = (float)v37;
      if ( a7 )
      {
        if ( (*(_DWORD *)(v28 + 3) & 0xFF000000) < v24 )
        {
          v72 = v27;
          v41 = v27;
          v39 = v26;
          v40 = v41;
        }
        else
        {
          v38 = v27;
          v39 = v26;
          v40 = v38;
          v72 = v39;
        }
        v30[6] = v72;
        v42 = v39;
        v27 = v40;
        v26 = v42;
      }
      v67 = v28[8];
      v43 = v28[7];
      v30[9] = (float)v28[9];
      v30[8] = (float)v67;
      v30[7] = (float)v43;
      if ( a7 )
      {
        if ( (*(_DWORD *)(v28 + 7) & 0xFF000000) < v24 )
        {
          v73 = v27;
          v47 = v27;
          v45 = v26;
          v46 = v47;
        }
        else
        {
          v44 = v27;
          v45 = v26;
          v46 = v44;
          v73 = v45;
        }
        v30[10] = v73;
        v48 = v45;
        v27 = v46;
        v26 = v48;
      }
      v68 = v28[12];
      v49 = v28[11];
      v30[13] = (float)v28[13];
      v30[12] = (float)v68;
      v30[11] = (float)v49;
      if ( a7 )
      {
        if ( (*(_DWORD *)(v28 + 11) & 0xFF000000) < v24 )
        {
          v74 = v27;
          v53 = v27;
          v51 = v26;
          v52 = v53;
        }
        else
        {
          v50 = v27;
          v51 = v26;
          v52 = v50;
          v74 = v51;
        }
        v30[14] = v74;
        v54 = v51;
        v27 = v52;
        v26 = v54;
      }
      v28 += 16;
      v30 += 16;
      --v29;
    }
    while ( v29 );
  }
  if ( v25 < a2 )
  {
    v55 = (float *)&v78[v25];
    do
    {
      v69 = *(unsigned __int8 *)(a1 + 4 * v25 + 1);
      v56 = *(unsigned __int8 *)(a1 + 4 * v25);
      v55[1] = (float)*(unsigned __int8 *)(a1 + 4 * v25 + 2);
      *v55 = (float)v69;
      *(v55 - 1) = (float)v56;
      if ( a7 )
      {
        if ( (*(_DWORD *)(a1 + 4 * v25) & 0xFF000000) < v24 )
        {
          v75 = v27;
          v60 = v27;
          v58 = v26;
          v59 = v60;
        }
        else
        {
          v57 = v27;
          v58 = v26;
          v59 = v57;
          v75 = v58;
        }
        v55[2] = v75;
        v61 = v58;
        v27 = v59;
        v26 = v61;
      }
      ++v25;
      v55 += 4;
    }
    while ( v25 < a2 );
  }
  sub_101DB290(a11, a10, a4, (int)v77, (int)v76, a2, a5, a6, a7, a9);
}
