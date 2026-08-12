void __thiscall sub_102215B0(_DWORD *this, int a2, int a3, int a4, float *a5, int a6)
{
  int v6; // ebx
  int v7; // esi
  int v9; // ecx
  int v10; // edx
  long double v11; // st7
  int v12; // edx
  double v13; // st4
  double v14; // st7
  double v15; // st5
  bool v16; // c0
  bool v17; // c3
  double v18; // st7
  int v19; // ecx
  double v20; // st6
  int v21; // edx
  float *v22; // eax
  float *v23; // ebp
  double v24; // st6
  int *v25; // edx
  unsigned __int16 v26; // bx
  double v27; // st5
  float *v28; // eax
  double v29; // st4
  double v30; // st3
  double v31; // st2
  double v32; // st0
  double v33; // st1
  int v34; // ebx
  float *v35; // eax
  double v36; // st7
  double v37; // st7
  float *v38; // eax
  double v39; // st7
  float *v40; // eax
  double v41; // st7
  int *v42; // ecx
  float *v43; // eax
  double v44; // st7
  float *v45; // eax
  int *v46; // edx
  float *v47; // eax
  double v48; // st7
  float *v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // [esp+Ch] [ebp-4Ch]
  float v55; // [esp+Ch] [ebp-4Ch]
  float v56; // [esp+20h] [ebp-38h]
  float v58; // [esp+24h] [ebp-34h]
  float v59; // [esp+28h] [ebp-30h]
  float v60; // [esp+2Ch] [ebp-2Ch]
  float v61; // [esp+30h] [ebp-28h]
  float v62; // [esp+34h] [ebp-24h]
  float v63; // [esp+34h] [ebp-24h]
  float v64; // [esp+38h] [ebp-20h]
  float v65; // [esp+38h] [ebp-20h]
  float v66; // [esp+3Ch] [ebp-1Ch]
  float v67; // [esp+3Ch] [ebp-1Ch]
  float v68; // [esp+40h] [ebp-18h]
  float v69; // [esp+40h] [ebp-18h]
  float v70; // [esp+44h] [ebp-14h]
  float v71; // [esp+44h] [ebp-14h]
  float v72; // [esp+48h] [ebp-10h]
  float v73; // [esp+48h] [ebp-10h]
  float v74; // [esp+4Ch] [ebp-Ch]
  float v75; // [esp+50h] [ebp-8h]
  float v76; // [esp+54h] [ebp-4h]
  float v77; // [esp+60h] [ebp+8h]
  char v78; // [esp+64h] [ebp+Ch]
  float v79; // [esp+64h] [ebp+Ch]
  float v80; // [esp+68h] [ebp+10h]
  float v81; // [esp+6Ch] [ebp+14h]
  float v82; // [esp+6Ch] [ebp+14h]

  v6 = a4 / 4;
  v7 = a4 & 3;
  v78 = *(_BYTE *)(a6 + 12);
  if ( v78 )
  {
    v9 = *(_DWORD *)(a3 + 28);
    v10 = v7 + 4 * v6 * *(_DWORD *)(a3 + 24);
    v59 = *(float *)(v9 + 4 * v10) * 255.0 + 8388608.0;
    v54 = *(_DWORD *)(a3 + 4);
    v60 = *(float *)(v9 + 4 * v10 + 16) * 255.0 + 8388608.0;
    v61 = 255.0 * *(float *)(v9 + 4 * (v10 + 8)) + 8388608.0;
    v56 = *(float *)(a6 + 8);
    v11 = -*(float *)(*(_DWORD *)(a3 + 12) + 4 * (v7 + 4 * v6 * *(_DWORD *)(a3 + 8)));
    v12 = v7 + 4 * v6 * *(_DWORD *)a3;
    v77 = cos(v11);
    v81 = sin(v11);
    v74 = *(float *)(v54 + 4 * v12);
    v75 = *(float *)(v54 + 4 * v12 + 16);
    v76 = *(float *)(v54 + 4 * (v12 + 8));
    v13 = v75 - a5[1];
    v55 = v13 * v13 + (v76 - a5[2]) * (v76 - a5[2]) + (v74 - *a5) * (v74 - *a5);
    v14 = off_103EDFE0(v55);
    v15 = 0.5 * v56;
    v16 = v15 < v14;
    v17 = v15 == v14;
    v18 = v56;
    if ( v16 || v17 )
    {
      v19 = this[25];
      if ( v19 >= 0 )
      {
        v21 = *(_DWORD *)(a3 + 72);
        v68 = *(float *)(v21 + 68 * v19 + 112);
        v70 = *(float *)(v21 + 68 * v19 + 116);
        v72 = *(float *)(v21 + 68 * v19 + 120);
        v22 = (float *)(v21 + 68 * (v19 + 2));
        v62 = *v22;
        v64 = v22[1];
        v20 = v22[2];
      }
      else
      {
        v68 = 1.0;
        v20 = 0.0;
        v70 = 0.0;
        v72 = 0.0;
        v62 = 0.0;
        v64 = -1.0;
      }
      v66 = v20;
      v23 = (float *)&unk_103FB670;
      if ( *(_DWORD *)(a3 + 64) )
      {
        v18 = v56;
        v23 = (float *)sub_10220FD0(
                         *(_DWORD *)(a3 + 64),
                         *(float *)(*(_DWORD *)(a3 + 36) + 4 * (v7 + 4 * v6 * *(_DWORD *)(a3 + 32))),
                         *(float *)(*(_DWORD *)(a3 + 72) + 36),
                         *(float *)(a3 + 56),
                         (int)*(float *)(*(_DWORD *)(a3 + 44) + 4 * (v7 + 4 * v6 * *(_DWORD *)(a3 + 40))));
      }
      v24 = v68 * v18;
      v25 = *(int **)(a2 + 468);
      v69 = v24;
      HIBYTE(v26) = v78;
      v27 = v70 * v18;
      v28 = (float *)(*(_DWORD *)(a2 + 428) + 4);
      v71 = v27;
      v29 = v72 * v18;
      v73 = v29;
      LOBYTE(v26) = LOBYTE(v59);
      v30 = v62 * v18;
      v63 = v30;
      v31 = v64 * v18;
      v65 = v31;
      v67 = v18 * v66;
      v32 = v77 - v81;
      v80 = v32;
      v33 = -v77 - v81;
      v58 = v33;
      *(v28 - 1) = v24 * v32 + v74 + v30 * v33;
      *v28 = v27 * v32 + v75 + v31 * v33;
      v28[1] = v32 * v29 + v76 + v33 * v67;
      v34 = LOBYTE(v61) | ((LOBYTE(v60) | (v26 << 8)) << 8);
      *v25 = v34;
      v35 = *(float **)(a2 + 436);
      v36 = v23[3];
      *v35 = v23[2];
      v35[1] = v36;
      sub_10016A80((_DWORD *)(a2 + 244));
      v37 = v81 + v77;
      v79 = v37;
      v38 = (float *)(*(_DWORD *)(a2 + 428) + 4);
      *(v38 - 1) = v69 * v37 + v74 + v63 * v80;
      *v38 = v71 * v37 + v75 + v65 * v80;
      v38[1] = v80 * v67 + v37 * v73 + v76;
      **(_DWORD **)(a2 + 468) = v34;
      v39 = v23[1];
      v40 = *(float **)(a2 + 436);
      *v40 = v23[2];
      v40[1] = v39;
      sub_10016A80((_DWORD *)(a2 + 244));
      v41 = v81 - v77;
      v42 = *(int **)(a2 + 468);
      v43 = (float *)(*(_DWORD *)(a2 + 428) + 4);
      v82 = v41;
      *(v43 - 1) = v69 * v41 + v74 + v63 * v79;
      *v43 = v71 * v41 + v75 + v65 * v79;
      v43[1] = v79 * v67 + v41 * v73 + v76;
      *v42 = v34;
      v44 = v23[1];
      v45 = *(float **)(a2 + 436);
      *v45 = *v23;
      v45[1] = v44;
      sub_10016A80((_DWORD *)(a2 + 244));
      v46 = *(int **)(a2 + 468);
      v47 = (float *)(*(_DWORD *)(a2 + 428) + 4);
      *(v47 - 1) = v69 * v58 + v74 + v63 * v82;
      *v47 = v71 * v58 + v75 + v65 * v82;
      v47[1] = v82 * v67 + v58 * v73 + v76;
      *v46 = v34;
      v48 = v23[3];
      v49 = *(float **)(a2 + 436);
      *v49 = *v23;
      v49[1] = v48;
      sub_10016A80((_DWORD *)(a2 + 244));
      *(_WORD *)(*(_DWORD *)(a2 + 192) + 2 * *(_DWORD *)(a2 + 224)) = *(_WORD *)(a3 + 68) + *(_WORD *)(a2 + 220);
      *(_DWORD *)(a2 + 224) += *(unsigned __int8 *)(a2 + 204);
      v50 = *(_DWORD *)(a2 + 224);
      *(_DWORD *)(a2 + 216) = v50;
      *(_WORD *)(*(_DWORD *)(a2 + 192) + 2 * v50) = *(_WORD *)(a3 + 68) + *(_WORD *)(a2 + 220) + 1;
      *(_DWORD *)(a2 + 224) += *(unsigned __int8 *)(a2 + 204);
      v51 = *(_DWORD *)(a2 + 224);
      *(_DWORD *)(a2 + 216) = v51;
      *(_WORD *)(*(_DWORD *)(a2 + 192) + 2 * v51) = *(_WORD *)(a3 + 68) + *(_WORD *)(a2 + 220) + 2;
      *(_DWORD *)(a2 + 224) += *(unsigned __int8 *)(a2 + 204);
      *(_DWORD *)(a2 + 216) = *(_DWORD *)(a2 + 224);
      *(_WORD *)(*(_DWORD *)(a2 + 192) + 2 * *(_DWORD *)(a2 + 224)) = *(_WORD *)(a3 + 68) + *(_WORD *)(a2 + 220);
      *(_DWORD *)(a2 + 224) += *(unsigned __int8 *)(a2 + 204);
      v52 = *(_DWORD *)(a2 + 224);
      *(_DWORD *)(a2 + 216) = v52;
      *(_WORD *)(*(_DWORD *)(a2 + 192) + 2 * v52) = *(_WORD *)(a3 + 68) + *(_WORD *)(a2 + 220) + 2;
      *(_DWORD *)(a2 + 224) += *(unsigned __int8 *)(a2 + 204);
      v53 = *(_DWORD *)(a2 + 224);
      *(_DWORD *)(a2 + 216) = v53;
      *(_WORD *)(*(_DWORD *)(a2 + 192) + 2 * v53) = *(_WORD *)(a3 + 68) + *(_WORD *)(a2 + 220) + 3;
      *(_DWORD *)(a2 + 224) += *(unsigned __int8 *)(a2 + 204);
      *(_DWORD *)(a2 + 216) = *(_DWORD *)(a2 + 224);
      *(_DWORD *)(a3 + 68) += 4;
    }
  }
}
