void __cdecl sub_10101F30(int a1, int a2, int a3, int a4, int a5, float a6, int a7, int a8, int a9, float a10)
{
  int v10; // ebx
  unsigned __int16 *v11; // ebx
  __int16 v12; // si
  int v13; // edi
  int v14; // esi
  double v15; // st7
  unsigned int v16; // edx
  double v17; // st7
  unsigned int v18; // eax
  double v19; // st7
  float *v20; // eax
  double v21; // st4
  double v22; // st5
  double v23; // st7
  double v24; // rt2
  double v25; // st7
  int v26; // ecx
  int v27; // eax
  int v28; // esi
  double v29; // st7
  int v30; // edi
  int v31; // ecx
  int v32; // esi
  unsigned int v33; // ecx
  unsigned __int16 *v34; // edi
  double v35; // st7
  unsigned int v36; // edx
  double v37; // st7
  unsigned int v38; // eax
  unsigned __int16 *v39; // edi
  double v40; // st7
  unsigned int v41; // eax
  double v42; // st7
  unsigned int v43; // ecx
  unsigned __int16 *v44; // edi
  double v45; // st7
  unsigned int v46; // ecx
  double v47; // st7
  unsigned int v48; // edx
  double v49; // st4
  float *v50; // eax
  double v51; // st6
  double v52; // st1
  double v53; // st7
  unsigned int v54; // [esp-14h] [ebp-104h]
  int v55[4]; // [esp+14h] [ebp-DCh] BYREF
  float v56[4]; // [esp+24h] [ebp-CCh] BYREF
  float v57[4]; // [esp+34h] [ebp-BCh] BYREF
  float v58[4]; // [esp+44h] [ebp-ACh] BYREF
  int v59[3]; // [esp+54h] [ebp-9Ch] BYREF
  int v60[3]; // [esp+60h] [ebp-90h] BYREF
  int v61[3]; // [esp+6Ch] [ebp-84h] BYREF
  int v62[3]; // [esp+78h] [ebp-78h] BYREF
  int v63[4]; // [esp+84h] [ebp-6Ch] BYREF
  float v64; // [esp+94h] [ebp-5Ch]
  int v65; // [esp+98h] [ebp-58h]
  int v66; // [esp+9Ch] [ebp-54h]
  float v67; // [esp+A0h] [ebp-50h]
  int v68; // [esp+A4h] [ebp-4Ch]
  int v69; // [esp+A8h] [ebp-48h]
  int v70; // [esp+ACh] [ebp-44h]
  int v71; // [esp+B0h] [ebp-40h] BYREF
  float v72; // [esp+B4h] [ebp-3Ch]
  float v73; // [esp+B8h] [ebp-38h]
  float v74; // [esp+BCh] [ebp-34h]
  int v75; // [esp+C0h] [ebp-30h] BYREF
  float v76; // [esp+C4h] [ebp-2Ch]
  float v77; // [esp+C8h] [ebp-28h]
  float v78; // [esp+CCh] [ebp-24h]
  float v79; // [esp+D0h] [ebp-20h]
  int v80; // [esp+D4h] [ebp-1Ch]
  int v81; // [esp+D8h] [ebp-18h]
  _DWORD *v82; // [esp+DCh] [ebp-14h]
  int v83; // [esp+E0h] [ebp-10h]
  float v84; // [esp+E4h] [ebp-Ch]
  int v85; // [esp+E8h] [ebp-8h]
  int v86; // [esp+ECh] [ebp-4h]
  _DWORD *v87; // [esp+108h] [ebp+18h]

  v10 = *(_DWORD *)(a5 + 92);
  if ( v10 )
  {
    v11 = (unsigned __int16 *)(a5 + v10);
    if ( v11 )
    {
      v12 = *(_WORD *)(a5 + 90);
      if ( v12 == 1 )
      {
        v13 = 0;
        if ( *(int *)(a2 + 156) > 0 )
        {
          v87 = (_DWORD *)(a4 + 160);
          do
          {
            if ( a3 )
              v14 = *(_DWORD *)(*(_DWORD *)(a3 + 24) + 4 * v13);
            else
              v14 = v13;
            if ( (*v87 & 0x200000) != 0 )
            {
              if ( v14 >= 0 && (a9 & *(_DWORD *)(*(_DWORD *)(a1 + 44) + 4 * v14)) != 0 )
              {
                v15 = sub_10065370(*v11);
                v16 = v11[1];
                v79 = v15;
                v17 = sub_10065370(v16);
                v18 = v11[2];
                *(float *)&v80 = v17;
                v19 = sub_10065370(v18);
                v20 = (float *)(a7 + 12 * v14);
                v21 = v19 * a10;
                v22 = 1.0 - a10;
                v23 = *(float *)&v80 * a10 + v20[1] * v22;
                v24 = v22 * v20[2] + v21;
                *v20 = v79 * a10 + v22 * *v20;
                v20[1] = v23;
                v20[2] = v24;
              }
              v11 += 3;
            }
            if ( (*v87 & 0x400000) != 0 )
            {
              if ( v14 >= 0 && (a9 & *(_DWORD *)(*(_DWORD *)(a1 + 44) + 4 * v14)) != 0 )
              {
                sub_100FDF50(v11, (float *)&v75);
                v72 = v76;
                v73 = v77;
                v71 = v75;
                v74 = v78;
                sub_10425710(16 * v14 + a8, (int)&v71, a10, 16 * v14 + a8);
              }
              v11 += 4;
            }
            v87 += 54;
            ++v13;
          }
          while ( v13 < *(_DWORD *)(a2 + 156) );
        }
      }
      else
      {
        v86 = *(__int16 *)(a5 + 88);
        v25 = a6;
        v26 = (int)(a6 / (double)v86);
        v27 = v12;
        v28 = v12 - 1;
        v83 = v26;
        if ( v26 < v28 )
        {
          v85 = *(__int16 *)(a5 + 88);
          v86 = v26 * v85;
          if ( (v25 - (double)(v26 * v85)) / (double)v85 <= 1.0 )
          {
            v85 = *(__int16 *)(a5 + 88);
            v86 = v26 * v85;
            if ( (v25 - (double)(v26 * v85)) / (double)v85 >= 0.0 )
            {
              v85 = *(__int16 *)(a5 + 88);
              v86 = v26 * v85;
              v29 = (v25 - (double)(v26 * v85)) / (double)v85;
            }
            else
            {
              v29 = 0.0;
            }
          }
          else
          {
            v29 = 1.0;
          }
        }
        else
        {
          v29 = 1.0;
          v83 = v27 - 2;
          v26 = v27 - 2;
        }
        v84 = v29;
        v85 = v26 + 1;
        v30 = v26 - 1 <= 0 ? 0 : v26 - 1;
        v70 = v30;
        if ( v26 + 1 >= v28 )
          v85 = v28;
        v31 = 0;
        v86 = 0;
        if ( *(int *)(a2 + 156) > 0 )
        {
          v82 = (_DWORD *)(a4 + 160);
          do
          {
            if ( a3 )
              v32 = *(_DWORD *)(*(_DWORD *)(a3 + 24) + 4 * v31);
            else
              v32 = v31;
            if ( (*v82 & 0x200000) != 0 )
            {
              if ( v32 >= 0 && (a9 & *(_DWORD *)(*(_DWORD *)(a1 + 44) + 4 * v32)) != 0 )
              {
                v33 = v11[3 * v30];
                v34 = &v11[3 * v30];
                v35 = sub_10065370(v33);
                v36 = v34[1];
                v67 = v35;
                v37 = sub_10065370(v36);
                v38 = v34[2];
                *(float *)&v68 = v37;
                *(float *)&v69 = sub_10065370(v38);
                v61[2] = v69;
                *(float *)v61 = v67;
                v39 = &v11[3 * v83];
                v61[1] = v68;
                v40 = sub_10065370(*v39);
                v41 = v39[1];
                v64 = v40;
                v42 = sub_10065370(v41);
                v43 = v39[2];
                *(float *)&v65 = v42;
                *(float *)&v66 = sub_10065370(v43);
                v60[1] = v65;
                *(float *)v60 = v64;
                v44 = &v11[3 * v85];
                v54 = *v44;
                v60[2] = v66;
                v45 = sub_10065370(v54);
                v46 = v44[1];
                v79 = v45;
                v47 = sub_10065370(v46);
                v48 = v44[2];
                *(float *)&v80 = v47;
                *(float *)&v81 = sub_10065370(v48);
                *(float *)v62 = v79;
                v62[1] = v80;
                v62[2] = v81;
                sub_10423A50((int)v61, (int)v60, (int)v62, v84, (int)v59);
                v49 = *(float *)&v59[2] * a10;
                v50 = (float *)(a7 + 12 * v32);
                v51 = 1.0 - a10;
                v30 = v70;
                v52 = v50[2];
                v53 = *(float *)&v59[1] * a10 + v50[1] * v51;
                *v50 = *(float *)v59 * a10 + v51 * *v50;
                v50[1] = v53;
                v50[2] = v51 * v52 + v49;
              }
              v11 += 3 * *(__int16 *)(a5 + 90);
              v31 = v86;
            }
            if ( (*v82 & 0x400000) != 0 )
            {
              if ( v32 >= 0 && (a9 & *(_DWORD *)(*(_DWORD *)(a1 + 44) + 4 * v32)) != 0 )
              {
                sub_100FDF50(&v11[4 * v30], v58);
                v75 = LODWORD(v58[0]);
                v76 = v58[1];
                v77 = v58[2];
                v78 = v58[3];
                sub_100FDF50(&v11[4 * v83], v56);
                v71 = LODWORD(v56[0]);
                v72 = v56[1];
                v73 = v56[2];
                v74 = v56[3];
                sub_100FDF50(&v11[4 * v85], v57);
                *(float *)&v63[2] = v57[2];
                *(float *)v63 = v57[0];
                *(float *)&v63[1] = v57[1];
                *(float *)&v63[3] = v57[3];
                if ( 1.0 == a10 )
                {
                  sub_10423AF0((int)&v75, (int)&v71, (int)v63, v84, a8 + 16 * v32);
                }
                else
                {
                  sub_10423AF0((int)&v75, (int)&v71, (int)v63, v84, (int)v55);
                  sub_10425710(a8 + 16 * v32, (int)v55, a10, a8 + 16 * v32);
                }
              }
              v31 = v86;
              v11 += 4 * *(__int16 *)(a5 + 90);
            }
            v82 += 54;
            v86 = ++v31;
          }
          while ( v31 < *(_DWORD *)(a2 + 156) );
        }
      }
    }
  }
}
