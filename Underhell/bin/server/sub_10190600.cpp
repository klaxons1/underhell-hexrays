int __userpurge sub_10190600@<eax>(float *a1@<ecx>, int a2@<ebp>, float *a3, int a4, float *a5, int a6)
{
  float *v6; // eax
  int v7; // ecx
  float *v8; // edi
  float *v9; // ecx
  float *v10; // edx
  double v11; // st7
  double v12; // st6
  int v13; // eax
  double v14; // st3
  double v15; // rt1
  double v16; // st3
  double v17; // rt2
  double v18; // st3
  double v19; // st4
  double v20; // st3
  double v21; // st5
  int v22; // ecx
  double v23; // st7
  double v24; // st4
  int v25; // edi
  float v26; // esi
  double v27; // rt0
  double v28; // st4
  double v29; // rt1
  double v30; // st4
  double v31; // st3
  double v32; // st7
  double v33; // st7
  float *v34; // esi
  int result; // eax
  int v36; // ecx
  bool v37; // zf
  float v38; // ecx
  int v39; // edx
  int v40; // edx
  int v41; // ecx
  int v42; // edx
  float **v43; // esi
  float v44[20]; // [esp+24h] [ebp-11Ch] BYREF
  _BYTE v45[12]; // [esp+74h] [ebp-CCh] BYREF
  float v46[20]; // [esp+80h] [ebp-C0h] BYREF
  int v47; // [esp+D0h] [ebp-70h] BYREF
  float v48[3]; // [esp+DCh] [ebp-64h] BYREF
  float v49[3]; // [esp+E8h] [ebp-58h] BYREF
  float v50[2]; // [esp+F4h] [ebp-4Ch] BYREF
  float v51; // [esp+FCh] [ebp-44h]
  float v52; // [esp+100h] [ebp-40h]
  float v53; // [esp+104h] [ebp-3Ch]
  float v54; // [esp+108h] [ebp-38h]
  float v55; // [esp+10Ch] [ebp-34h]
  float v56; // [esp+110h] [ebp-30h]
  float v57; // [esp+114h] [ebp-2Ch]
  float v58; // [esp+118h] [ebp-28h]
  float v59; // [esp+11Ch] [ebp-24h]
  float *v60; // [esp+120h] [ebp-20h]
  float *v61; // [esp+124h] [ebp-1Ch]
  float v62; // [esp+128h] [ebp-18h]
  int v63; // [esp+12Ch] [ebp-14h] BYREF
  char v64; // [esp+133h] [ebp-Dh]
  int v65; // [esp+134h] [ebp-Ch]
  void *v66; // [esp+138h] [ebp-8h]
  void *retaddr; // [esp+140h] [ebp+0h]

  v65 = a2;
  v66 = retaddr;
  v61 = a1;
  v6 = (float *)sub_10184390(76);
  if ( v6 )
  {
    v6[10] = 0.0;
    v6[11] = 0.0;
    v6[12] = 0.0;
    v6[17] = NAN;
    v6[13] = NAN;
    v6[14] = NAN;
    v6[15] = NAN;
    v7 = *((_DWORD *)v6 + 10);
    v8 = v6;
    v6[16] = 0.0;
    *((_DWORD *)v6 + 18) = v7;
    v60 = v6;
  }
  else
  {
    v60 = 0;
    v8 = 0;
  }
  *(_DWORD *)v8 = a3;
  *((_DWORD *)v8 + 1) = a4;
  *((_DWORD *)v8 + 2) = a5;
  v9 = v61;
  *((_DWORD *)v8 + 3) = a6;
  sub_1018B0A0(v9, a5, a6, v8 + 7, (float *)&v63);
  sub_1018B0A0(v61, a3, a4, v8 + 4, (float *)&v63);
  v8[6] = sub_1018AD70(a3, v8 + 4) + 36.0;
  v8[9] = sub_1018AD70(a5, v8 + 7) + 36.0;
  v57 = v8[7] - *v10;
  v58 = v8[8] - v10[1];
  v59 = v8[9] - v10[2];
  v11 = off_10689714();
  ++dword_106B8374;
  *(float *)&v63 = v11;
  v12 = 0.0;
  v64 = 0;
  v62 = 0.0;
  do
  {
    if ( v12 >= v11 )
    {
      v64 = 1;
      v12 = v11;
      v62 = v11;
    }
    v13 = dword_1063282C;
    v14 = v57 * v12 + v8[4];
    v51 = v14;
    v15 = v14;
    v16 = v58 * v12 + v8[5];
    v52 = v16;
    v17 = v16;
    v18 = v59 * v12 + v8[6];
    v53 = v18;
    v48[2] = v18;
    v19 = v18;
    v48[0] = v15;
    v20 = v17;
    v21 = v15;
    v48[1] = v17;
    if ( dword_1063282C != -1 )
    {
      v22 = dword_10632820;
      v23 = v20;
      while ( 1 )
      {
        v25 = 12 * v13;
        v26 = *(float *)(12 * v13 + v22);
        if ( (*(_BYTE *)(LODWORD(v26) + 28) & 1) == 0 )
          goto LABEL_23;
        if ( *(_DWORD *)(LODWORD(v26) + 20) == dword_106B8374 )
          goto LABEL_23;
        v27 = v19;
        v28 = *(float *)(LODWORD(v26) + 4) - v21;
        v54 = v28;
        v29 = v28;
        v30 = *(float *)(LODWORD(v26) + 8) - v23;
        v55 = v30;
        v31 = *(float *)(LODWORD(v26) + 12) + 36.0 - v27;
        v56 = v31;
        if ( v29 * v29 + v30 * v30 + v31 * v31 > 4000000.0 )
        {
LABEL_23:
          v33 = v12;
        }
        else
        {
          v49[0] = *(float *)(LODWORD(v26) + 4);
          v49[1] = *(float *)(LODWORD(v26) + 8);
          v49[2] = *(float *)(LODWORD(v26) + 12) + 36.0;
          sub_1001F180(v44, v48, v49);
          sub_10265570(0, 0);
          (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
            dword_106B31F4,
            v44,
            81931,
            &v47,
            v45);
          if ( *(_DWORD *)(dword_106CE63C + 48) )
            sub_101A0AD0((int)v45, (int)v46, 255, 0, 0, 1, 5.0);
          if ( 1.0 == v46[8] )
          {
            off_10689714();
            v32 = v58 * v55 + v57 * v54 + v59 * v56;
            if ( v32 >= 0.70709997 || v32 <= -0.70709997 )
            {
              v33 = v62;
            }
            else
            {
              v33 = v62;
              if ( v62 > 0.0 )
              {
                v50[1] = v26;
                v50[0] = v33 / *(float *)&v63;
                sub_1018F510((int *)v60 + 10, v50);
                v33 = v62;
                *(_DWORD *)(LODWORD(v26) + 20) = dword_106B8374;
                goto LABEL_24;
              }
            }
            *(_DWORD *)(LODWORD(v26) + 20) = dword_106B8374;
          }
          else
          {
            v33 = v62;
          }
        }
LABEL_24:
        v22 = dword_10632820;
        v13 = *(_DWORD *)(v25 + dword_10632820 + 8);
        if ( v13 == -1 )
        {
          v8 = v60;
          v12 = v33;
          v11 = *(float *)&v63;
          break;
        }
        v24 = v33;
        v23 = v52;
        v12 = v24;
        v19 = v53;
        v21 = v51;
      }
    }
    v12 = v12 + 25.0;
    v62 = v12;
  }
  while ( !v64 );
  v34 = v61;
  result = sub_1018CED0((int *)v61 + 30, 0);
  v61 = (float *)result;
  if ( result >= 0 && result < *((_DWORD *)v34 + 31) && result <= *((_DWORD *)v34 + 37) )
  {
    v36 = *((_DWORD *)v34 + 30);
    v37 = *(_DWORD *)(v36 + 12 * result + 4) == result;
    LODWORD(v38) = v36 + 12 * result;
    *(float *)&v63 = v38;
    if ( !v37 )
    {
      v39 = *(_DWORD *)(LODWORD(v38) + 4);
      if ( v39 == -1 )
      {
        v34[33] = *(float *)(LODWORD(v38) + 8);
      }
      else
      {
        *(_DWORD *)(*((_DWORD *)v34 + 30) + 12 * v39 + 8) = *(_DWORD *)(LODWORD(v38) + 8);
        v38 = *(float *)&v63;
        result = (int)v61;
      }
      v40 = *(_DWORD *)(LODWORD(v38) + 8);
      if ( v40 == -1 )
      {
        v34[34] = *(float *)(LODWORD(v38) + 4);
      }
      else
      {
        *(_DWORD *)(*((_DWORD *)v34 + 30) + 12 * v40 + 4) = *(_DWORD *)(LODWORD(v38) + 4);
        v38 = *(float *)&v63;
        result = (int)v61;
      }
      *(_DWORD *)(LODWORD(v38) + 8) = result;
      *(_DWORD *)(LODWORD(v38) + 4) = result;
      --*((_DWORD *)v34 + 36);
    }
  }
  v41 = 12 * result + *((_DWORD *)v34 + 30);
  *(_DWORD *)(v41 + 8) = -1;
  v63 = 12 * result;
  v42 = *((_DWORD *)v34 + 34);
  *(_DWORD *)(v41 + 4) = v42;
  *((_DWORD *)v34 + 34) = result;
  if ( v42 == -1 )
    *((_DWORD *)v34 + 33) = result;
  else
    *(_DWORD *)(*((_DWORD *)v34 + 30) + 12 * v42 + 8) = result;
  ++*((_DWORD *)v34 + 36);
  v43 = (float **)(v63 + *((_DWORD *)v34 + 30));
  if ( v43 )
    *v43 = v8;
  return result;
}
