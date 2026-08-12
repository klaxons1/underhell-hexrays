char __userpurge sub_1018BCE0@<al>(float *a1@<ecx>, int a2@<ebp>, int a3, float *a4)
{
  int v4; // eax
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st6
  double v9; // st6
  float v10; // edx
  double v11; // st5
  double v12; // st4
  double v13; // st4
  double v14; // st4
  double v15; // st6
  float *v16; // esi
  double v17; // st7
  double v18; // st6
  float *v19; // edi
  double v20; // st5
  double v21; // st4
  double v22; // st6
  double v23; // st5
  double v24; // st4
  double v25; // st6
  float *v26; // eax
  double v27; // st7
  double v28; // st6
  double v29; // rt0
  double v30; // st6
  double v31; // st7
  double v32; // st6
  double v33; // st5
  double v34; // st4
  double v35; // rtt
  double v36; // st6
  float *v37; // eax
  double v38; // st5
  double v39; // st5
  double v40; // st7
  double v41; // st6
  double v42; // st7
  double v43; // st7
  double v44; // st6
  double v45; // st5
  double v46; // st4
  double v47; // st5
  float *v48; // edx
  double v49; // st7
  int v50; // edx
  char result; // al
  float v52[21]; // [esp-90h] [ebp-9Ch] BYREF
  float v53; // [esp-3Ch] [ebp-48h]
  float v54; // [esp-38h] [ebp-44h]
  float v55; // [esp-34h] [ebp-40h]
  int v56; // [esp-30h] [ebp-3Ch]
  float v57; // [esp-2Ch] [ebp-38h] BYREF
  float v58; // [esp-28h] [ebp-34h]
  float v59; // [esp-24h] [ebp-30h]
  float v60; // [esp-20h] [ebp-2Ch] BYREF
  float v61; // [esp-1Ch] [ebp-28h]
  float v62; // [esp-18h] [ebp-24h]
  float v63; // [esp-14h] [ebp-20h] BYREF
  float v64; // [esp-10h] [ebp-1Ch]
  float v65; // [esp-Ch] [ebp-18h]
  float *v66; // [esp-8h] [ebp-14h]
  float *v67; // [esp-4h] [ebp-10h]
  int v68; // [esp+0h] [ebp-Ch]
  void *v69; // [esp+4h] [ebp-8h]
  void *retaddr; // [esp+Ch] [ebp+0h]

  v68 = a2;
  v69 = retaddr;
  v4 = dword_106B7B8C;
  if ( (dword_106B7B8C & 1) == 0 )
  {
    v4 = dword_106B7B8C | 1;
    dword_106B7B8C |= 1u;
  }
  v53 = a1[1];
  v54 = a1[2];
  v55 = a1[3];
  if ( (v4 & 1) == 0 )
  {
    v4 |= 1u;
    dword_106B7B8C = v4;
  }
  flt_106B7B80 = a1[4];
  v5 = a1[2];
  v57 = flt_106B7B80;
  flt_106B7B84 = v5;
  v6 = a1[13];
  v58 = flt_106B7B84;
  flt_106B7B88 = v6;
  v59 = flt_106B7B88;
  if ( (v4 & 1) == 0 )
  {
    v4 |= 1u;
    dword_106B7B8C = v4;
  }
  v7 = a1[1];
  flt_106B7B80 = a1[1];
  v8 = a1[5];
  v63 = flt_106B7B80;
  flt_106B7B84 = v8;
  v9 = a1[14];
  v64 = flt_106B7B84;
  flt_106B7B88 = v9;
  v65 = flt_106B7B88;
  if ( (v4 & 1) == 0 )
    dword_106B7B8C = v4 | 1;
  v10 = a1[5];
  v11 = 9.0;
  v12 = a1[4];
  v60 = a1[4];
  v13 = v12 - a1[1];
  v62 = a1[6];
  v61 = v10;
  v14 = v13 * 0.33333334;
  if ( v14 <= 9.0 )
    v11 = v14;
  v15 = 0.33333334 * (a1[5] - a1[2]);
  if ( v11 < v15 )
    v15 = v11;
  switch ( a3 )
  {
    case 0:
      v16 = a4;
      v17 = v15;
      v18 = v53;
      v19 = a4 + 3;
      *a4 = v53;
      v20 = v54;
      a4[1] = v54;
      v21 = v55;
      a4[2] = v55;
      a4[3] = v18 + v17;
      a4[4] = v20;
      a4[5] = v21;
      v22 = *a4 + v17;
      goto LABEL_15;
    case 1:
      v16 = a4;
      v17 = v15;
      v32 = v57;
      v19 = a4 + 3;
      *a4 = v57;
      v33 = v58;
      a4[1] = v58;
      v34 = v59;
      a4[2] = v59;
      a4[3] = v32 - v17;
      a4[4] = v33;
      a4[5] = v34;
      v22 = *a4 - v17;
LABEL_15:
      v23 = v16[1] + v17;
      v67 = v16 + 6;
      v24 = v22;
      v25 = v16[2];
      v16[6] = v24;
      v16[7] = v23;
      v16[8] = v25;
      v26 = v16 + 9;
      v27 = v17 + v16[1];
      v28 = v16[2];
      v16[9] = *v16;
      v29 = v28;
      v30 = v27;
      v31 = v29;
      goto LABEL_20;
    case 2:
      v16 = a4;
      v43 = v15;
      v44 = v60;
      v19 = a4 + 3;
      *a4 = v60;
      v37 = a4 + 6;
      v45 = v61;
      a4[1] = v61;
      v46 = v62;
      a4[2] = v62;
      a4[3] = v44 - v43;
      a4[4] = v45;
      v42 = -v43;
      a4[5] = v46;
      v47 = v42 + a4[1];
      v41 = a4[2];
      a4[6] = v42 + *a4;
      a4[7] = v47;
      goto LABEL_19;
    case 3:
      v16 = a4;
      v35 = v15;
      *a4 = v7;
      v19 = a4 + 3;
      v36 = v64;
      v37 = a4 + 6;
      a4[1] = v64;
      v38 = v65;
      a4[2] = v65;
      a4[3] = *a4 + v35;
      a4[4] = v36;
      a4[5] = v38;
      v39 = a4[1] - v35;
      v40 = a4[2];
      a4[6] = v35 + *a4;
      a4[7] = v39;
      v41 = v40;
      v42 = -v35;
LABEL_19:
      v37[2] = v41;
      v67 = v37;
      v26 = v16 + 9;
      v30 = v42 + v16[1];
      v31 = v16[2];
      v16[9] = *v16;
LABEL_20:
      v26[1] = v30;
      v66 = v26;
      v48 = v19;
      v26[2] = v31;
      v56 = 3;
      do
      {
        v49 = sub_1018AD70(a1, v48);
        *(float *)(v50 + 8) = v49;
        v48 = (float *)(v50 + 12);
        --v56;
      }
      while ( v56 );
      sub_101922E0(&v63, &v60);
      v57 = v60 * 10000.0 + v63;
      v58 = v61 * 10000.0 + v64;
      v59 = 10000.0 * v62 + v65;
      sub_1001F200(v52, &v63, &v57, &flt_106F1CA8, &flt_106F1CA8);
      if ( sub_10112F00(v52, v16, v19, v67, 0.0) <= 0.0 && sub_10112F00(v52, v67, v66, v16, 0.0) <= 0.0 )
        goto LABEL_25;
      result = 1;
      break;
    default:
LABEL_25:
      result = 0;
      break;
  }
  return result;
}
