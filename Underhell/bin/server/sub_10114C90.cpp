char __cdecl sub_10114C90(int a1, float *a2, float *a3, float *a4, float a5, int a6)
{
  char result; // al
  double v7; // st7
  double v8; // st6
  double v9; // rt0
  double v10; // st6
  double v11; // st5
  double v12; // st5
  double v13; // st4
  double v14; // st6
  double v15; // st5
  double v16; // st7
  double v17; // st6
  float *v18; // ecx
  float *v19; // eax
  float *v20; // ebx
  float *v21; // esi
  unsigned int v22; // edi
  float *v23; // edx
  long double v24; // st7
  float *v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  double v29; // st7
  int v30; // eax
  long double v31; // st7
  long double v32; // st7
  long double v33; // st7
  double v34; // st7
  double v35; // st6
  int v36; // ebx
  double v37; // st5
  double v38; // st4
  int v39; // edi
  double v40; // rtt
  double v41; // st4
  double v42; // st5
  float *v43; // esi
  double v44; // st4
  double v45; // st3
  double v46; // rt0
  int v47; // ecx
  double v48; // st2
  double v49; // st1
  double v50; // rt2
  double v51; // rtt
  double v52; // st3
  double v53; // st4
  double v54; // st2
  double v55; // st1
  double v56; // st1
  double v57; // st2
  double v58; // st2
  float *v59; // eax
  double v60; // st7
  float *v61; // eax
  double v62; // st7
  double v63; // st6
  double v64; // st5
  int v65; // ecx
  double v66; // st4
  bool v67; // al
  float v68; // [esp+0h] [ebp-19Ch]
  float v69; // [esp+4h] [ebp-198h]
  float v70; // [esp+4h] [ebp-198h]
  float *v71; // [esp+4h] [ebp-198h]
  _DWORD v72[2]; // [esp+14h] [ebp-188h] BYREF
  _BYTE v73[292]; // [esp+1Ch] [ebp-180h] BYREF
  float v74[3]; // [esp+140h] [ebp-5Ch] BYREF
  float v75; // [esp+14Ch] [ebp-50h] BYREF
  float v76; // [esp+150h] [ebp-4Ch]
  float v77; // [esp+154h] [ebp-48h]
  float *v78; // [esp+158h] [ebp-44h]
  float *v79; // [esp+15Ch] [ebp-40h]
  float v80; // [esp+160h] [ebp-3Ch] BYREF
  float v81; // [esp+164h] [ebp-38h]
  int v82; // [esp+168h] [ebp-34h] BYREF
  float v83; // [esp+16Ch] [ebp-30h]
  float v84; // [esp+170h] [ebp-2Ch]
  float v85; // [esp+174h] [ebp-28h]
  float *v86; // [esp+178h] [ebp-24h]
  float v87; // [esp+17Ch] [ebp-20h]
  float *v88; // [esp+180h] [ebp-1Ch]
  float *v89; // [esp+184h] [ebp-18h]
  float v90; // [esp+188h] [ebp-14h]
  float v91; // [esp+18Ch] [ebp-10h]
  float *v92; // [esp+190h] [ebp-Ch]
  float v93; // [esp+194h] [ebp-8h]
  float *v94; // [esp+198h] [ebp-4h]
  int v95; // [esp+1A4h] [ebp+8h]

  if ( *(_BYTE *)(a1 + 64) )
    return sub_101148D0((float *)a1, (float *)(a1 + 16), a2, a3, a4, a5, a6);
  v7 = *(float *)a1 + *(float *)(a1 + 32);
  v8 = *(float *)(a1 + 36) + *(float *)(a1 + 4);
  v9 = *(float *)(a1 + 40) + *(float *)(a1 + 8);
  v78 = (float *)(a1 + 16);
  *(float *)a6 = v7;
  *(float *)(a6 + 4) = v8;
  *(float *)(a6 + 8) = v9;
  *(float *)(a6 + 12) = v7;
  *(float *)(a6 + 16) = v8;
  *(float *)(a6 + 20) = v9;
  *(float *)(a6 + 12) = *(float *)(a6 + 12) + *(float *)(a1 + 16);
  *(float *)(a6 + 16) = *(float *)(a6 + 16) + *(float *)(a1 + 20);
  *(float *)(a6 + 20) = *(float *)(a6 + 20) + *(float *)(a1 + 24);
  *(_WORD *)(a6 + 54) = 0;
  *(_DWORD *)(a6 + 48) = 0;
  *(float *)(a6 + 44) = 1.0;
  v10 = (a4[1] + a3[1]) * 0.5;
  v11 = (a3[2] + a4[2]) * 0.5;
  *(float *)&v82 = (*a3 + *a4) * 0.5 + a2[3];
  v83 = v10 + a2[7];
  v84 = v11 + a2[11];
  v12 = (*a4 - *a3) * 0.5;
  v13 = (a4[1] - a3[1]) * 0.5;
  v14 = v13 * v13 + v12 * v12;
  v15 = 0.5 * (a4[2] - a3[2]);
  v69 = v15 * v15 + v14;
  *(float *)&v94 = off_10689708(v69);
  v16 = *(float *)(a1 + 52);
  v17 = *(float *)(a1 + 48);
  v92 = (float *)(a1 + 48);
  v70 = v16 * v16 + v17 * v17 + *(float *)(a1 + 56) * *(float *)(a1 + 56);
  v68 = off_10689708(v70) + *(float *)&v94;
  if ( sub_101147C0((float *)a1, (float *)(a1 + 16), (float *)&v82, v68, a5) )
  {
    sub_10421BA0(a1, a2, &v75);
    sub_10421C60(a1 + 16, a2, v74);
    v18 = a4;
    *(float *)&v94 = COERCE_FLOAT(v72);
    v19 = a2 + 8;
    v20 = a2 + 1;
    v86 = a4;
    v79 = a2 + 8;
    v21 = (float *)v73;
    LODWORD(v91) = (char *)a3 - (char *)a4;
    v22 = 0;
    while ( 1 )
    {
      v23 = v94;
      *(v21 - 2) = 0.0;
      *(v21 - 1) = 0.0;
      *v21 = 0.0;
      *v23 = 1.0;
      v71 = (float *)&v73[v22 + 196];
      v24 = fabs(*(v19 - 8) * *(float *)(a1 + 48))
          + fabs(*(v19 - 4) * *(float *)(a1 + 52))
          + fabs(*(float *)(a1 + 56) * *v19);
      *(v71 - 6) = *(float *)((char *)v18 + LODWORD(v91)) - v24;
      *(v71 - 5) = v24 + *v18;
      v21[7] = *(v20 - 1);
      v21[8] = *v20;
      v21[9] = v20[1];
      sub_10113D50(v21 + 7, a3, a4, (int)&v73[v22 + 196]);
      v25 = v92;
      v26 = dword_10615698[v22 / 4];
      v27 = dword_1061569C[v22 / 4];
      *(float *)&v73[v22 + 196] = *(float *)&v73[v22 + 196] - *v92;
      *(float *)&v73[v22 + 200] = *v25 + *(float *)&v73[v22 + 200];
      v87 = *(float *)(a1 + 4 * v26 + 48);
      v28 = dword_106156B0[v22 / 4];
      v85 = *(float *)(a1 + 4 * v27 + 48);
      v21[16] = 0.0;
      v29 = v20[1];
      v89 = &a2[4 * v28];
      v30 = 4 * dword_106156B4[v22 / 4];
      v21[17] = -v29;
      v21[18] = *v20;
      v88 = &a2[v30];
      sub_10113E00((int)(v21 + 16), 1, 2, (int)a3, (int)a4, (int)&v73[v22 + 220]);
      v31 = fabs(*v89) * v87 + fabs(*v88) * v85;
      *(float *)&v73[v22 + 220] = *(float *)&v73[v22 + 220] - v31;
      *(float *)&v73[v22 + 224] = v31 + *(float *)&v73[v22 + 224];
      v21[25] = v20[1];
      v21[26] = 0.0;
      v21[27] = -*(v20 - 1);
      sub_10113E00((int)(v21 + 25), 0, 2, (int)a3, (int)a4, (int)&v73[v22 + 244]);
      v32 = fabs(v89[1]) * v87 + fabs(v88[1]) * v85;
      *(float *)&v73[v22 + 244] = *(float *)&v73[v22 + 244] - v32;
      *(float *)&v73[v22 + 248] = v32 + *(float *)&v73[v22 + 248];
      v21[34] = -*v20;
      v21[35] = *(v20 - 1);
      v21[36] = 0.0;
      sub_10113E00((int)(v21 + 34), 0, 1, (int)a3, (int)a4, (int)&v73[v22 + 268]);
      v33 = fabs(v89[2]) * v87 + fabs(v88[2]) * v85;
      *(float *)&v73[v22 + 268] = *(float *)&v73[v22 + 268] - v33;
      *(float *)&v73[v22 + 272] = v33 + *(float *)&v73[v22 + 272];
      ++v79;
      ++v86;
      ++v92;
      v94 += 4;
      v22 += 8;
      v20 += 4;
      v21 += 3;
      if ( (int)v22 >= 24 )
        break;
      v19 = v79;
      v18 = v86;
    }
    v34 = -1.0;
    v35 = 1.0;
    v36 = -1;
    v37 = v74[0];
    v95 = -1;
    v38 = v75;
    *(_BYTE *)(a6 + 55) = 1;
    v39 = 0;
    v40 = v38;
    v41 = v37 + v38;
    v42 = v40;
    v43 = (float *)v73;
    *(float *)&v82 = v41;
    v83 = v74[1] + v76;
    v84 = v74[2] + v77;
    v44 = 0.0;
    v45 = a5;
LABEL_9:
    v47 = 0;
    v48 = v76 * *(v43 - 1) + v42 * *(v43 - 2) + v77 * *v43;
    v49 = v83 * *(v43 - 1) + *(float *)&v82 * *(v43 - 2) + v84 * *v43;
    v90 = -(v48 - *(float *)&v73[8 * v39 + 172]);
    v93 = -(v49 - *(float *)&v73[8 * v39 + 172]);
    v91 = v48 - *(float *)&v73[8 * v39 + 176];
    *(float *)&v94 = v49 - *(float *)&v73[8 * v39 + 176];
    while ( 1 )
    {
      v51 = v45;
      v52 = v44;
      v53 = v51;
      if ( v52 < *(&v90 + v47) && v52 < *(&v93 + v47) )
        break;
      if ( v52 < *(&v90 + v47) || v52 < *(&v93 + v47) )
      {
        if ( v52 < *(&v90 + v47) )
          *(_BYTE *)(a6 + 55) = 0;
        v54 = 1.0 / (*(&v90 + v47) - *(&v93 + v47));
        v55 = *(&v90 + v47);
        if ( *(&v93 + v47) >= v55 )
        {
          v58 = v54 * (v55 + v53);
          if ( v58 < v35 )
            v35 = v58;
        }
        else
        {
          v56 = v55 - v53;
          if ( v56 < v52 )
            v56 = v52;
          v57 = v54 * v56;
          if ( v57 > v34 )
          {
            v34 = v57;
            v36 = v39;
            v95 = v47;
          }
        }
      }
      if ( ++v47 >= 2 )
      {
        ++v39;
        v43 += 3;
        if ( v39 < 15 )
        {
          v46 = v52;
          v45 = v53;
          v44 = v46;
          goto LABEL_9;
        }
        if ( v34 >= v35 || v34 < v52 )
        {
          if ( !*(_BYTE *)(a6 + 55) )
            return 0;
          v67 = v35 <= v52 || v35 >= 1.0;
          *(float *)(a6 + 44) = v52;
          *(_BYTE *)(a6 + 54) = v67;
          *(float *)(a6 + 12) = *(float *)a6;
          result = 1;
          *(float *)(a6 + 16) = *(float *)(a6 + 4);
          *(float *)(a6 + 20) = *(float *)(a6 + 8);
          *(_DWORD *)(a6 + 48) = 1;
          *(float *)(a6 + 36) = *(float *)a6;
          *(float *)(a6 + 24) = 1.0;
          *(float *)(a6 + 28) = v52;
          *(float *)(a6 + 32) = v52;
          *(_BYTE *)(a6 + 40) = 0;
        }
        else
        {
          v59 = v78;
          *(float *)(a6 + 44) = v34;
          *(float *)(a6 + 12) = v34 * *v59 + *(float *)a6;
          *(float *)(a6 + 16) = v34 * v59[1] + *(float *)(a6 + 4);
          v60 = v34 * v59[2];
          v61 = (float *)&v72[3 * v36];
          *(float *)(a6 + 20) = v60 + *(float *)(a6 + 8);
          *(_DWORD *)(a6 + 48) = 1;
          v62 = *v61;
          v80 = *v61;
          v63 = v61[1];
          v81 = v61[1];
          v64 = v61[2];
          v65 = v95 + 2 * v36;
          v82 = *((int *)v61 + 2);
          v66 = *(float *)&v73[4 * v65 + 172];
          v83 = *(float *)&v73[4 * v65 + 172];
          if ( !v95 )
          {
            v80 = v62 * -1.0;
            v81 = v63 * -1.0;
            *(float *)&v82 = v64 * -1.0;
            v83 = -1.0 * v66;
          }
          LOBYTE(v84) = 3;
          sub_10112E10((int)a2, (int)&v80, (float *)(a6 + 24));
          return 1;
        }
        return result;
      }
      v50 = v52;
      v45 = v53;
      v44 = v50;
    }
  }
  return 0;
}
