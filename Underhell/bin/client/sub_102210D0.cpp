void __stdcall sub_102210D0(int a1, int a2, int a3, float *a4, int a5)
{
  int v5; // ebx
  int v6; // esi
  int v8; // ecx
  int v9; // edx
  long double v10; // st7
  int v11; // edx
  double v12; // st7
  double v13; // st6
  double v14; // st5
  double v15; // st4
  double v16; // st7
  float *v17; // ebp
  float *v18; // eax
  double v19; // st6
  double v20; // st5
  unsigned __int16 v21; // bx
  double v22; // st4
  double v23; // st1
  int v24; // ebx
  double v25; // rtt
  double v26; // st5
  double v27; // rtt
  double v28; // st5
  double v29; // st7
  float *v30; // eax
  float *v31; // eax
  double v32; // st7
  double v33; // st6
  double v34; // rt2
  double v35; // st6
  int *v36; // ecx
  double v37; // st7
  float *v38; // eax
  int *v39; // edx
  float *v40; // eax
  double v41; // st7
  double v42; // st6
  double v43; // rt1
  double v44; // st6
  double v45; // st7
  float *v46; // eax
  float *v47; // eax
  double v48; // st7
  double v49; // st6
  double v50; // st7
  float *v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // [esp+Ch] [ebp-40h]
  float v56; // [esp+Ch] [ebp-40h]
  float v57; // [esp+20h] [ebp-2Ch]
  float v58; // [esp+24h] [ebp-28h]
  float v59; // [esp+28h] [ebp-24h]
  float v60; // [esp+2Ch] [ebp-20h]
  float v61; // [esp+30h] [ebp-1Ch]
  float v62; // [esp+34h] [ebp-18h] BYREF
  float v63; // [esp+38h] [ebp-14h]
  float v64; // [esp+3Ch] [ebp-10h]
  float v65; // [esp+40h] [ebp-Ch]
  float v66; // [esp+44h] [ebp-8h]
  float v67; // [esp+48h] [ebp-4h]
  float v68; // [esp+54h] [ebp+8h]
  char v69; // [esp+58h] [ebp+Ch]
  float v70; // [esp+58h] [ebp+Ch]
  float v71; // [esp+58h] [ebp+Ch]
  float v72; // [esp+5Ch] [ebp+10h]
  float v73; // [esp+60h] [ebp+14h]

  v5 = a3 / 4;
  v6 = a3 & 3;
  v69 = *(_BYTE *)(a5 + 12);
  if ( v69 )
  {
    v8 = *(_DWORD *)(a2 + 28);
    v9 = v6 + 4 * v5 * *(_DWORD *)(a2 + 24);
    v58 = *(float *)(v8 + 4 * v9) * 255.0 + 8388608.0;
    v55 = *(_DWORD *)(a2 + 4);
    v59 = *(float *)(v8 + 4 * v9 + 16) * 255.0 + 8388608.0;
    v60 = 255.0 * *(float *)(v8 + 4 * (v9 + 8)) + 8388608.0;
    v73 = *(float *)(a5 + 8);
    v10 = -*(float *)(*(_DWORD *)(a2 + 12) + 4 * (v6 + 4 * v5 * *(_DWORD *)(a2 + 8)));
    v11 = v6 + 4 * v5 * *(_DWORD *)a2;
    v68 = cos(v10);
    v57 = sin(v10);
    v12 = *(float *)(v55 + 4 * v11);
    v65 = *(float *)(v55 + 4 * v11);
    v13 = *(float *)(v55 + 4 * v11 + 16);
    v66 = *(float *)(v55 + 4 * v11 + 16);
    v11 += 8;
    v14 = *(float *)(v55 + 4 * v11);
    v67 = *(float *)(v55 + 4 * v11);
    v15 = v13 - a4[1];
    v56 = v15 * v15 + (v14 - a4[2]) * (v14 - a4[2]) + (v12 - *a4) * (v12 - *a4);
    if ( v73 * 0.5 <= off_103EDFE0(v56) )
    {
      v16 = a4[2] * 0.0;
      v62 = v16 - a4[1];
      v63 = *a4 - v16;
      v64 = a4[1] * 0.0 - 0.0 * *a4;
      off_103EDFEC(&v62);
      v17 = (float *)&unk_103FB670;
      if ( *(_DWORD *)(a2 + 64) )
        v17 = (float *)sub_10220FD0(
                         *(_DWORD *)(a2 + 64),
                         *(float *)(*(_DWORD *)(a2 + 36) + 4 * (v6 + 4 * v5 * *(_DWORD *)(a2 + 32))),
                         *(float *)(*(_DWORD *)(a2 + 72) + 36),
                         *(float *)(a2 + 56),
                         (int)*(float *)(*(_DWORD *)(a2 + 44) + 4 * (v6 + 4 * v5 * *(_DWORD *)(a2 + 40))));
      v18 = *(float **)(a1 + 428);
      v19 = v62 * v73;
      v62 = v19;
      v20 = v63 * v73;
      HIBYTE(v21) = v69;
      ++v18;
      v63 = v20;
      v22 = v64 * v73;
      v64 = v22;
      LOBYTE(v21) = LOBYTE(v58);
      v23 = -v68 - v57;
      v61 = v23;
      v24 = LOBYTE(v60) | ((LOBYTE(v59) | (v21 << 8)) << 8);
      v25 = v20 * v23 + v66;
      v26 = v23 * v22 + v67;
      *(v18 - 1) = v19 * v23 + v65;
      *v18 = v25;
      v27 = v26;
      v28 = v57 - v68;
      v72 = v28;
      v18[1] = v73 * v28 + v27;
      **(_DWORD **)(a1 + 468) = v24;
      v29 = v17[3];
      v30 = *(float **)(a1 + 436);
      *v30 = *v17;
      v30[1] = v29;
      sub_10016A80((_DWORD *)(a1 + 244));
      v31 = (float *)(*(_DWORD *)(a1 + 428) + 4);
      v32 = v63 * v72 + v66;
      v33 = v72 * v64 + v67;
      *(v31 - 1) = v62 * v72 + v65;
      v34 = v33;
      *v31 = v32;
      v35 = v57 + v68;
      v70 = v35;
      v36 = *(int **)(a1 + 468);
      v31[1] = v34 + v35 * v73;
      *v36 = v24;
      v37 = v17[1];
      v38 = *(float **)(a1 + 436);
      *v38 = *v17;
      v38[1] = v37;
      sub_10016A80((_DWORD *)(a1 + 244));
      v39 = *(int **)(a1 + 468);
      v40 = (float *)(*(_DWORD *)(a1 + 428) + 4);
      v41 = v63 * v70 + v66;
      v42 = v70 * v64 + v67;
      *(v40 - 1) = v62 * v70 + v65;
      v43 = v42;
      *v40 = v41;
      v44 = v68 - v57;
      v71 = v44;
      v40[1] = v43 + v44 * v73;
      *v39 = v24;
      v45 = v17[1];
      v46 = *(float **)(a1 + 436);
      *v46 = v17[2];
      v46[1] = v45;
      sub_10016A80((_DWORD *)(a1 + 244));
      v47 = (float *)(*(_DWORD *)(a1 + 428) + 4);
      v48 = v63 * v71 + v66;
      v49 = v71 * v64 + v67;
      *(v47 - 1) = v62 * v71 + v65;
      *v47 = v48;
      v47[1] = v49 + v61 * v73;
      **(_DWORD **)(a1 + 468) = v24;
      v50 = v17[3];
      v51 = *(float **)(a1 + 436);
      *v51 = v17[2];
      v51[1] = v50;
      sub_10016A80((_DWORD *)(a1 + 244));
      *(_WORD *)(*(_DWORD *)(a1 + 192) + 2 * *(_DWORD *)(a1 + 224)) = *(_WORD *)(a2 + 68) + *(_WORD *)(a1 + 220);
      *(_DWORD *)(a1 + 224) += *(unsigned __int8 *)(a1 + 204);
      v52 = *(_DWORD *)(a1 + 224);
      *(_DWORD *)(a1 + 216) = v52;
      *(_WORD *)(*(_DWORD *)(a1 + 192) + 2 * v52) = *(_WORD *)(a2 + 68) + *(_WORD *)(a1 + 220) + 1;
      *(_DWORD *)(a1 + 224) += *(unsigned __int8 *)(a1 + 204);
      *(_DWORD *)(a1 + 216) = *(_DWORD *)(a1 + 224);
      *(_WORD *)(*(_DWORD *)(a1 + 192) + 2 * *(_DWORD *)(a1 + 224)) = *(_WORD *)(a2 + 68) + *(_WORD *)(a1 + 220) + 2;
      *(_DWORD *)(a1 + 224) += *(unsigned __int8 *)(a1 + 204);
      v53 = *(_DWORD *)(a1 + 224);
      *(_DWORD *)(a1 + 216) = v53;
      *(_WORD *)(*(_DWORD *)(a1 + 192) + 2 * v53) = *(_WORD *)(a2 + 68) + *(_WORD *)(a1 + 220);
      *(_DWORD *)(a1 + 224) += *(unsigned __int8 *)(a1 + 204);
      v54 = *(_DWORD *)(a1 + 224);
      *(_DWORD *)(a1 + 216) = v54;
      *(_WORD *)(*(_DWORD *)(a1 + 192) + 2 * v54) = *(_WORD *)(a2 + 68) + *(_WORD *)(a1 + 220) + 2;
      *(_DWORD *)(a1 + 224) += *(unsigned __int8 *)(a1 + 204);
      *(_DWORD *)(a1 + 216) = *(_DWORD *)(a1 + 224);
      *(_WORD *)(*(_DWORD *)(a1 + 192) + 2 * *(_DWORD *)(a1 + 224)) = *(_WORD *)(a2 + 68) + *(_WORD *)(a1 + 220) + 3;
      *(_DWORD *)(a1 + 224) += *(unsigned __int8 *)(a1 + 204);
      *(_DWORD *)(a1 + 216) = *(_DWORD *)(a1 + 224);
      *(_DWORD *)(a2 + 68) += 4;
    }
  }
}
