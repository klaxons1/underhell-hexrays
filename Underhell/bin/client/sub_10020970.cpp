void __usercall sub_10020970(
        int a1@<eax>,
        int a2@<edx>,
        _DWORD *a3@<esi>,
        _DWORD *a4,
        int a5,
        int a6,
        int a7,
        float a8,
        int a9)
{
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  int v17; // edi
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  double v22; // st7
  double v23; // st7
  double v24; // st6
  unsigned __int8 *v25; // ebx
  int v26; // ecx
  int v27; // eax
  float *v28; // ecx
  float *v29; // edi
  int v30; // edx
  double v31; // rt0
  double v32; // st6
  double v33; // st7
  float *v34; // eax
  float *v35; // eax
  float v36; // edx
  float v37; // eax
  double v38; // st5
  float *v39; // eax
  double v40; // rtt
  int v41; // ecx
  int v42; // edi
  int v43; // eax
  __int16 v44; // ax
  float v45; // eax
  _DWORD *v46; // eax
  int v47; // ecx
  int v48; // edx
  int v49; // edi
  int v50; // ecx
  float v51; // [esp+10h] [ebp-58h]
  int v52; // [esp+1Ch] [ebp-4Ch] BYREF
  float v53; // [esp+20h] [ebp-48h]
  float v54; // [esp+24h] [ebp-44h]
  float v55; // [esp+28h] [ebp-40h]
  int v56; // [esp+2Ch] [ebp-3Ch]
  unsigned __int8 *v57; // [esp+30h] [ebp-38h]
  int v58; // [esp+34h] [ebp-34h]
  int v59; // [esp+38h] [ebp-30h]
  float v60; // [esp+3Ch] [ebp-2Ch]
  int v61; // [esp+40h] [ebp-28h]
  int v62; // [esp+44h] [ebp-24h]
  float v63; // [esp+48h] [ebp-20h]
  float v64; // [esp+4Ch] [ebp-1Ch] BYREF
  int v65; // [esp+50h] [ebp-18h]
  int v66; // [esp+54h] [ebp-14h]
  int v67; // [esp+58h] [ebp-10h]
  int v68; // [esp+5Ch] [ebp-Ch]
  int v69; // [esp+60h] [ebp-8h]
  int v70; // [esp+64h] [ebp-4h] BYREF
  int v71; // [esp+70h] [ebp+8h]
  int v72; // [esp+7Ch] [ebp+14h]
  int v73; // [esp+7Ch] [ebp+14h]

  v62 = a4[22] + 144 * *(_DWORD *)(a4[2] + 16 * a1 + 8);
  v59 = sub_10127A00(a1, a2);
  v71 = sub_101278E0(v59);
  v11 = sub_10127880(a1);
  v12 = *(_DWORD *)(v11 + 400);
  if ( v12 && (v13 = *(_DWORD *)(v12 + v11 + 16), v14 = v11 + v12, v13) )
    v69 = v14 + v13;
  else
    v69 = 0;
  v15 = v11 + *(_DWORD *)(v11 + 160);
  v16 = a4[7];
  v58 = v15;
  v65 = a4[22] + 144 * *(_DWORD *)(v16 + 8 * v59);
  v17 = sub_101278B0(v59);
  v18 = *(_DWORD *)(v17 + 400);
  v67 = v17;
  if ( v18 && (v19 = *(_DWORD *)(v18 + v17 + 16), v20 = v17 + v18, v19) )
    v68 = v20 + v19;
  else
    v68 = 0;
  v21 = *(_DWORD *)(v17 + 160);
  v59 = *(_DWORD *)(v71 + 16) - 1;
  v66 = v17 + v21;
  v22 = (double)v59 * a8;
  v60 = v22;
  v59 = (int)v22;
  v70 = (int)v22;
  v63 = v22 - (double)(int)v22;
  v23 = 0.0;
  v24 = 1.0;
  v25 = (unsigned __int8 *)sub_10126970(&v70, &v64);
  v26 = *a3;
  v61 = a7 + *(_DWORD *)(a7 + 156);
  v56 = v26 + *(_DWORD *)(v26 + 160);
  v27 = 0;
  v57 = v25;
  v72 = 0;
  if ( *(int *)(v26 + 156) > 0 )
  {
    v28 = (float *)a6;
    v29 = (float *)(a5 + 8);
    do
    {
      if ( (a9 & *(_DWORD *)(a3[11] + 4 * v27)) != 0 )
      {
        v30 = *(_DWORD *)(*(_DWORD *)(v62 + 4) + 4 * v27);
        if ( v30 >= 0 )
        {
          v31 = v24;
          v32 = v23;
          v33 = v31;
          if ( v32 < *(float *)(v61 + 4 * v30) )
          {
            if ( (*(_BYTE *)(v71 + 12) & 4) != 0 )
            {
              *v28 = v32;
              v28[1] = v32;
              v28[2] = v32;
              v28[3] = v33;
              *(v29 - 2) = v32;
              *(v29 - 1) = v32;
              *v29 = v32;
            }
            else
            {
              if ( v69 )
              {
                v34 = (float *)(v69 + *(_DWORD *)(v69 + 16) + 16 * v30);
                *v28 = *v34;
                v28[1] = v34[1];
                v28[2] = v34[2];
                v28[3] = v34[3];
                v35 = (float *)(v69 + *(_DWORD *)(v69 + 12) + 12 * v30);
                v53 = *v35;
                v36 = v35[1];
                v37 = v35[2];
                *(v29 - 2) = v53;
                v54 = v36;
                *(v29 - 1) = v36;
                v55 = v37;
                v38 = v37;
              }
              else
              {
                v39 = (float *)(216 * v30 + v58);
                *v28 = v39[11];
                v28[1] = v39[12];
                v28[2] = v39[13];
                v28[3] = v39[14];
                *(v29 - 2) = v39[8];
                *(v29 - 1) = v39[9];
                v38 = v39[10];
              }
              *v29 = v38;
            }
            ++a3[34];
          }
          v27 = v72;
          v40 = v32;
          v24 = v33;
          v23 = v40;
        }
      }
      ++v27;
      v28 += 4;
      v29 += 3;
      v72 = v27;
    }
    while ( v27 < *(_DWORD *)(*a3 + 156) );
    v25 = v57;
    v17 = v67;
  }
  if ( v25 )
  {
    while ( *v25 != 0xFF )
    {
      v41 = *v25;
      v42 = *(_DWORD *)(*(_DWORD *)(v65 + 24) + 4 * v41);
      if ( v42 >= 0 && (a9 & *(_DWORD *)(a3[11] + 4 * v42)) != 0 )
      {
        v43 = *(_DWORD *)(*(_DWORD *)(v62 + 4) + 4 * v42);
        if ( v43 >= 0 && v23 < *(float *)(v61 + 4 * v43) )
        {
          sub_1001B1B0(v70, v63, v66 + 216 * v41, (_DWORD *)v68, v25, a6 + 16 * v42);
          sub_1001E5D0(v70, v63, v66 + 216 * *v25, v68, v25, (float *)(a5 + 12 * v42));
          v23 = 0.0;
          ++a3[33];
        }
      }
      v44 = *((_WORD *)v25 + 1);
      if ( !v44 || (v25 += v44) == 0 )
      {
        v17 = v67;
        break;
      }
      v17 = v67;
    }
    if ( v64 > v23 )
      sub_1001F130((int)a3, v17, v65, v66, v71, v60, a5, a6, a9, v64);
    if ( *(_DWORD *)(v71 + 72) )
    {
      v73 = (int)sub_1001ACB0(&dword_10403328);
      if ( !v73 )
      {
        v73 = sub_100DDA40(6144);
        if ( (v73 & 7) != 0 )
          __debugbreak();
      }
      v45 = 0.0;
      v52 = 0;
      v53 = 0.0;
      v54 = 0.0;
      v55 = 0.0;
      v60 = 0.0;
      if ( *(int *)(v71 + 72) > 0 )
      {
        do
        {
          v46 = (_DWORD *)sub_10126C90(LODWORD(v45));
          if ( !v46 )
            break;
          v47 = *(_DWORD *)(v65 + 24);
          v48 = *(_DWORD *)(v47 + 4 * *v46);
          if ( v48 >= 0 )
          {
            v49 = a3[11];
            if ( (a9 & *(_DWORD *)(v49 + 4 * v48)) != 0 )
            {
              v50 = *(_DWORD *)(v47 + 4 * v46[1]);
              if ( v50 >= 0 && (a9 & *(_DWORD *)(v49 + 4 * v50)) != 0 )
                sub_10020360((int)a3, v73, (int)&v52, a5, a6, v56, v48, v50, a8, v59, v63);
            }
          }
          LODWORD(v45) = LODWORD(v60) + 1;
          v60 = v45;
        }
        while ( SLODWORD(v45) < *(_DWORD *)(v71 + 72) );
      }
      sub_1001AC40(&dword_10403328, (int *)v73);
    }
  }
  else
  {
    v51 = v24;
    sub_1001F130((int)a3, v17, v65, v66, v71, v60, a5, a6, a9, v51);
  }
}
