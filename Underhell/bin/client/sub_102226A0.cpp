void __thiscall sub_102226A0(float *this, int a2, int a3, int a4, float *a5, float a6, int a7)
{
  int v7; // ebx
  int v8; // esi
  int v10; // ecx
  bool v11; // zf
  int v12; // edx
  float *v13; // ebp
  double v14; // st7
  double v15; // st7
  int v16; // ecx
  int v17; // edx
  double v18; // st7
  double v19; // st6
  int v20; // eax
  double v21; // st5
  int v22; // ecx
  int v23; // edx
  double v24; // st3
  double v25; // rtt
  double v26; // st7
  double v27; // st6
  double v28; // st6
  double v29; // st5
  double v30; // st4
  double v31; // rtt
  double v32; // st4
  double v33; // st7
  double v34; // st4
  double v35; // st3
  double v36; // st2
  double v37; // st6
  double v38; // st5
  double v39; // st7
  double v40; // st0
  double v41; // rt2
  double v42; // st2
  double v43; // rtt
  double v44; // st2
  double v45; // rt0
  double v46; // st2
  float *v47; // eax
  unsigned __int16 v48; // bx
  int v49; // ebx
  double v50; // st7
  float *v51; // eax
  float *v52; // eax
  int *v53; // ecx
  double v54; // st7
  float *v55; // eax
  float *v56; // eax
  int *v57; // edx
  double v58; // st7
  float *v59; // eax
  float *v60; // eax
  double v61; // st7
  float *v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  float v67; // [esp+24h] [ebp-64h]
  float v68; // [esp+28h] [ebp-60h]
  double v69; // [esp+2Ch] [ebp-5Ch]
  float v70; // [esp+34h] [ebp-54h] BYREF
  float v71; // [esp+38h] [ebp-50h]
  float v72; // [esp+3Ch] [ebp-4Ch]
  float v73; // [esp+40h] [ebp-48h]
  float v74; // [esp+44h] [ebp-44h]
  float v75; // [esp+48h] [ebp-40h]
  float v76; // [esp+4Ch] [ebp-3Ch] BYREF
  float v77; // [esp+50h] [ebp-38h]
  float v78; // [esp+54h] [ebp-34h]
  float v79; // [esp+64h] [ebp-24h]
  float v80; // [esp+68h] [ebp-20h]
  float v81; // [esp+6Ch] [ebp-1Ch]
  float v82; // [esp+70h] [ebp-18h]
  float v83; // [esp+74h] [ebp-14h]
  float v84; // [esp+78h] [ebp-10h]
  float v85; // [esp+7Ch] [ebp-Ch]
  float v86; // [esp+80h] [ebp-8h]
  float v87; // [esp+84h] [ebp-4h]
  int v88; // [esp+90h] [ebp+8h]
  char v89; // [esp+94h] [ebp+Ch]
  int v90; // [esp+A0h] [ebp+18h]

  v7 = a4 / 4;
  v8 = a4 & 3;
  v89 = *(_BYTE *)(a7 + 12);
  if ( v89 )
  {
    v10 = *(_DWORD *)(a3 + 28);
    v11 = *(_DWORD *)(a3 + 64) == 0;
    v12 = v8 + 4 * v7 * *(_DWORD *)(a3 + 24);
    *(float *)&v88 = *(float *)(v10 + 4 * v12) * 255.0 + 8388608.0;
    v67 = *(float *)(v10 + 4 * v12 + 16) * 255.0 + 8388608.0;
    v68 = 255.0 * *(float *)(v10 + 4 * (v12 + 8)) + 8388608.0;
    v13 = (float *)&unk_103FB670;
    v90 = *(int *)(a7 + 8);
    if ( !v11 )
      v13 = (float *)sub_10220FD0(
                       *(_DWORD *)(a3 + 64),
                       *(float *)(*(_DWORD *)(a3 + 36) + 4 * (v8 + 4 * v7 * *(_DWORD *)(a3 + 96))),
                       *(float *)(*(_DWORD *)(a3 + 72) + 36),
                       *(float *)(a3 + 56),
                       (int)*(float *)(*(_DWORD *)(a3 + 44) + 4 * (v8 + 4 * v7 * *(_DWORD *)(a3 + 40))));
    v14 = *(float *)(*(_DWORD *)(a3 + 72) + 36)
        - *(float *)(*(_DWORD *)(a3 + 36) + 4 * (v8 + 4 * v7 * *(_DWORD *)(a3 + 96)));
    if ( v14 < this[22] )
      v15 = v14 / this[22];
    else
      v15 = 1.0;
    v69 = v15;
    v16 = *(_DWORD *)(a3 + 4);
    v17 = v8 + 4 * v7 * *(_DWORD *)a3;
    v18 = *(float *)(v16 + 4 * v17);
    v73 = *(float *)(v16 + 4 * v17);
    v19 = *(float *)(v16 + 4 * v17 + 16);
    v20 = *(_DWORD *)(a3 + 76);
    v74 = *(float *)(v16 + 4 * v17 + 16);
    v21 = *(float *)(v16 + 4 * (v17 + 8));
    v22 = *(_DWORD *)(a3 + 80);
    v75 = v21;
    v23 = v8 + 4 * v7 * v20;
    v24 = *(float *)(v22 + 4 * v23 + 16);
    v25 = *(float *)(v22 + 4 * (v23 + 8));
    v70 = *(float *)(v22 + 4 * v23) - v18;
    v71 = v24 - v19;
    v72 = v25 - v21;
    v26 = off_103EDFEC(&v70) * (v69 * *(float *)(*(_DWORD *)(a3 + 88) + 4 * (v8 + 4 * v7 * *(_DWORD *)(a3 + 84)))) * a6;
    if ( v26 > 0.0 )
    {
      if ( v26 <= this[23] )
        v27 = v26;
      else
        v27 = this[23];
      if ( v27 >= this[24] )
      {
        if ( v26 > this[23] )
          v26 = this[23];
      }
      else
      {
        v26 = this[24];
      }
      v28 = v70 * v26;
      v70 = v28;
      v29 = v71 * v26;
      v71 = v29;
      v30 = v72 * v26;
      v72 = v30;
      if ( *(float *)&v90 <= v26 )
      {
        v33 = v30;
      }
      else
      {
        v31 = v30;
        v32 = v26;
        v33 = v31;
        *(float *)&v90 = v32;
      }
      v34 = v73 - *a5;
      v35 = v74 - a5[1];
      v36 = v75 - a5[2];
      v76 = v35 * v33 - v36 * v29;
      v77 = v36 * v28 - v33 * v34;
      v78 = v29 * v34 - v28 * v35;
      off_103EDFF0(&v76);
      v37 = 0.5 * *(float *)&v90;
      v38 = v37 * v76 + v73;
      v39 = v37 * v78 + v75;
      v40 = *(float *)&v90 * -0.5;
      v41 = v77 * v37 + v74;
      v42 = v73 + v76 * v40;
      v79 = v42;
      v43 = v42;
      v44 = v74 + v77 * v40;
      v80 = v44;
      v45 = v44;
      v46 = v40 * v78 + v75;
      v81 = v46;
      v85 = v38 + v70;
      v86 = v41 + v71;
      v87 = v39 + v72;
      v82 = v43 + v70;
      v83 = v45 + v71;
      v84 = v72 + v46;
      v47 = *(float **)(a2 + 428);
      *v47 = v38;
      v47[1] = v41;
      v47[2] = v39;
      HIBYTE(v48) = v89;
      LOBYTE(v48) = v88;
      v49 = LOBYTE(v68) | ((LOBYTE(v67) | (v48 << 8)) << 8);
      **(_DWORD **)(a2 + 468) = v49;
      v50 = v13[3];
      v51 = *(float **)(a2 + 436);
      *v51 = *v13;
      v51[1] = v50;
      sub_10016A80((_DWORD *)(a2 + 244));
      v52 = *(float **)(a2 + 428);
      v53 = *(int **)(a2 + 468);
      *v52++ = v79;
      *v52 = v80;
      v52[1] = v81;
      *v53 = v49;
      v54 = v13[3];
      v55 = *(float **)(a2 + 436);
      *v55 = v13[2];
      v55[1] = v54;
      sub_10016A80((_DWORD *)(a2 + 244));
      v56 = *(float **)(a2 + 428);
      v57 = *(int **)(a2 + 468);
      *v56++ = v82;
      *v56 = v83;
      v56[1] = v84;
      *v57 = v49;
      v58 = v13[1];
      v59 = *(float **)(a2 + 436);
      *v59 = v13[2];
      v59[1] = v58;
      sub_10016A80((_DWORD *)(a2 + 244));
      v60 = *(float **)(a2 + 428);
      *v60++ = v85;
      *v60 = v86;
      v60[1] = v87;
      **(_DWORD **)(a2 + 468) = v49;
      v61 = v13[1];
      v62 = *(float **)(a2 + 436);
      *v62 = *v13;
      v62[1] = v61;
      sub_10016A80((_DWORD *)(a2 + 244));
      *(_WORD *)(*(_DWORD *)(a2 + 192) + 2 * *(_DWORD *)(a2 + 224)) = *(_WORD *)(a3 + 68) + *(_WORD *)(a2 + 220);
      *(_DWORD *)(a2 + 224) += *(unsigned __int8 *)(a2 + 204);
      v63 = *(_DWORD *)(a2 + 224);
      *(_DWORD *)(a2 + 216) = v63;
      *(_WORD *)(*(_DWORD *)(a2 + 192) + 2 * v63) = *(_WORD *)(a3 + 68) + *(_WORD *)(a2 + 220) + 1;
      *(_DWORD *)(a2 + 224) += *(unsigned __int8 *)(a2 + 204);
      *(_DWORD *)(a2 + 216) = *(_DWORD *)(a2 + 224);
      *(_WORD *)(*(_DWORD *)(a2 + 192) + 2 * *(_DWORD *)(a2 + 224)) = *(_WORD *)(a3 + 68) + *(_WORD *)(a2 + 220) + 2;
      *(_DWORD *)(a2 + 224) += *(unsigned __int8 *)(a2 + 204);
      v64 = *(_DWORD *)(a2 + 224);
      *(_DWORD *)(a2 + 216) = v64;
      *(_WORD *)(*(_DWORD *)(a2 + 192) + 2 * v64) = *(_WORD *)(a3 + 68) + *(_WORD *)(a2 + 220);
      *(_DWORD *)(a2 + 224) += *(unsigned __int8 *)(a2 + 204);
      v65 = *(_DWORD *)(a2 + 224);
      *(_DWORD *)(a2 + 216) = v65;
      *(_WORD *)(*(_DWORD *)(a2 + 192) + 2 * v65) = *(_WORD *)(a3 + 68) + *(_WORD *)(a2 + 220) + 2;
      *(_DWORD *)(a2 + 224) += *(unsigned __int8 *)(a2 + 204);
      *(_DWORD *)(a2 + 216) = *(_DWORD *)(a2 + 224);
      *(_WORD *)(*(_DWORD *)(a2 + 192) + 2 * *(_DWORD *)(a2 + 224)) = *(_WORD *)(a3 + 68) + *(_WORD *)(a2 + 220) + 3;
      *(_DWORD *)(a2 + 224) += *(unsigned __int8 *)(a2 + 204);
      *(_DWORD *)(a2 + 216) = *(_DWORD *)(a2 + 224);
      *(_DWORD *)(a3 + 68) += 4;
    }
  }
}
