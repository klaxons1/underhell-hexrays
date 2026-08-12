int __thiscall sub_10233960(int this, float *a2, float *a3)
{
  double v4; // st7
  double v5; // st6
  double v6; // st5
  bool v7; // zf
  double v8; // st7
  double v9; // st6
  double v10; // st5
  double v11; // st7
  double v12; // st5
  double v13; // st4
  double v14; // rt2
  double v15; // st5
  double v16; // st6
  float *v17; // eax
  double v18; // st7
  float *v19; // eax
  float *v20; // eax
  double v21; // st7
  float *v22; // eax
  float *v23; // eax
  float *v24; // eax
  double v25; // st7
  float *v26; // eax
  float *v27; // eax
  double v28; // st7
  float *v29; // eax
  float *v30; // eax
  int result; // eax
  __int16 v32; // cx
  int v33; // eax
  __int16 v34; // dx
  int v35; // edi
  int v36; // ebx
  int v37; // eax
  __int16 v38; // dx
  int v39; // edi
  int v40; // ebx
  int v41; // eax
  __int16 v42; // dx
  int v43; // edi
  int v44; // ebx
  int v45; // eax
  __int16 v46; // dx
  int v47; // edi
  int v48; // ebx
  int v49; // eax
  __int16 v50; // dx
  int v51; // edi
  int v52; // ebx
  int v53; // esi
  int v54; // edx
  float *v55; // eax
  _DWORD *v56; // ebx
  double v57; // st7
  float *v58; // eax
  float *v59; // eax
  double v60; // st7
  float *v61; // eax
  float *v62; // eax
  float *v63; // eax
  double v64; // st7
  float *v65; // eax
  double v66; // st6
  float *v67; // esi
  float *v68; // eax
  float *v69; // eax
  float v70; // [esp+1Ch] [ebp-18h] BYREF
  float v71; // [esp+20h] [ebp-14h]
  float v72; // [esp+24h] [ebp-10h]
  float v73; // [esp+28h] [ebp-Ch]
  float v74; // [esp+2Ch] [ebp-8h]
  float v75; // [esp+30h] [ebp-4h]

  v4 = *(float *)(this + 500) - *a2;
  v5 = *(float *)(this + 504) - a2[1];
  v6 = *(float *)(this + 508) - a2[2];
  v70 = v5 * a3[2] - v6 * a3[1];
  v71 = v6 * *a3 - v4 * a3[2];
  v72 = v4 * a3[1] - v5 * *a3;
  off_103EDFF0(&v70);
  v7 = *(_DWORD *)(this + 4) == 0;
  v8 = *(float *)(this + 528) * 0.5;
  v9 = *a3 * v8 + *(float *)(this + 500);
  v10 = v8;
  v11 = v8 * a3[1] + *(float *)(this + 504);
  v12 = v10 * a3[2] + *(float *)(this + 508);
  v13 = *(float *)(this + 528) * -0.5;
  v73 = *a3 * v13 + *(float *)(this + 500);
  v74 = v13 * a3[1] + *(float *)(this + 504);
  v75 = v13 * a3[2] + *(float *)(this + 508);
  v14 = v12;
  v15 = v9;
  v16 = v14;
  if ( v7 )
  {
    v55 = *(float **)(this + 440);
    *v55++ = v15;
    v56 = (_DWORD *)(this + 256);
    *v55 = v11;
    v55[1] = v16;
    sub_1004F140(
      (_DWORD **)(this + 256),
      *(float *)(this + 512),
      *(float *)(this + 516),
      *(float *)(this + 520),
      *(float *)(this + 532));
    v57 = *(float *)(this + 524);
    v58 = *(float **)(this + 448);
    *v58 = 0.0;
    v58[1] = v57;
    v59 = *(float **)(this + 452);
    v60 = *(float *)(this + 524);
    *v59 = 0.0;
    v59[1] = v60;
    v61 = (float *)(*(_DWORD *)(this + 396) + *(_DWORD *)(this + 312) * *(_DWORD *)(this + 436));
    *v61++ = *a3;
    *v61 = a3[1];
    v61[1] = a3[2];
    v62 = (float *)(*(_DWORD *)(this + 400) + *(_DWORD *)(this + 316) * *(_DWORD *)(this + 436));
    *v62++ = v70;
    *v62 = v71;
    v62[1] = v72;
    sub_10016A80((_DWORD *)(this + 256));
    v63 = *(float **)(this + 440);
    *v63++ = v73;
    *v63 = v74;
    v63[1] = v75;
    sub_1004F140(
      (_DWORD **)(this + 256),
      *(float *)(this + 512),
      *(float *)(this + 516),
      *(float *)(this + 520),
      *(float *)(this + 532));
    v64 = *(float *)(this + 524);
    v65 = *(float **)(this + 448);
    *v65 = 1.0;
    v65[1] = v64;
    v66 = *(float *)(this + 524);
    v67 = *(float **)(this + 452);
    *v67 = 1.0;
    v67[1] = v66;
    v68 = (float *)(v56[35] + v56[14] * v56[45] + 4);
    *(v68 - 1) = *a3;
    *v68 = a3[1];
    v68[1] = a3[2];
    v69 = (float *)(v56[36] + v56[15] * v56[45]);
    *v69++ = v70;
    *v69 = v71;
    v69[1] = v72;
    return sub_10016A80(v56);
  }
  else
  {
    v17 = *(float **)(*(_DWORD *)(this + 4) + 428);
    *v17++ = v15;
    *v17 = v11;
    v17[1] = v16;
    sub_1004F140(
      (_DWORD **)(*(_DWORD *)(this + 4) + 244),
      *(float *)(this + 512),
      *(float *)(this + 516),
      *(float *)(this + 520),
      *(float *)(this + 532));
    v18 = *(float *)(this + 524);
    v19 = *(float **)(*(_DWORD *)(this + 4) + 436);
    *v19 = 0.0;
    v19[1] = v18;
    v20 = *(float **)(*(_DWORD *)(this + 4) + 440);
    v21 = *(float *)(this + 524);
    *v20 = 0.0;
    v20[1] = v21;
    v22 = (float *)(*(_DWORD *)(*(_DWORD *)(this + 4) + 384)
                  + *(_DWORD *)(*(_DWORD *)(this + 4) + 300) * *(_DWORD *)(*(_DWORD *)(this + 4) + 424)
                  + 4);
    *(v22 - 1) = *a3;
    *v22 = a3[1];
    v22[1] = a3[2];
    v23 = (float *)(*(_DWORD *)(*(_DWORD *)(this + 4) + 388)
                  + *(_DWORD *)(*(_DWORD *)(this + 4) + 304) * *(_DWORD *)(*(_DWORD *)(this + 4) + 424)
                  + 4);
    *(v23 - 1) = v70;
    *v23 = v71;
    v23[1] = v72;
    sub_10016A80((_DWORD *)(*(_DWORD *)(this + 4) + 244));
    v24 = *(float **)(*(_DWORD *)(this + 4) + 428);
    *v24++ = v73;
    *v24 = v74;
    v24[1] = v75;
    sub_1004F140(
      (_DWORD **)(*(_DWORD *)(this + 4) + 244),
      *(float *)(this + 512),
      *(float *)(this + 516),
      *(float *)(this + 520),
      *(float *)(this + 532));
    v25 = *(float *)(this + 524);
    v26 = *(float **)(*(_DWORD *)(this + 4) + 436);
    *v26 = 1.0;
    v26[1] = v25;
    v27 = *(float **)(*(_DWORD *)(this + 4) + 440);
    v28 = *(float *)(this + 524);
    *v27 = 1.0;
    v27[1] = v28;
    v29 = (float *)(*(_DWORD *)(*(_DWORD *)(this + 4) + 384)
                  + *(_DWORD *)(*(_DWORD *)(this + 4) + 300) * *(_DWORD *)(*(_DWORD *)(this + 4) + 424)
                  + 4);
    *(v29 - 1) = *a3;
    *v29 = a3[1];
    v29[1] = a3[2];
    v30 = (float *)(*(_DWORD *)(*(_DWORD *)(this + 4) + 388)
                  + *(_DWORD *)(*(_DWORD *)(this + 4) + 304) * *(_DWORD *)(*(_DWORD *)(this + 4) + 424)
                  + 4);
    *(v30 - 1) = v70;
    *v30 = v71;
    v30[1] = v72;
    sub_10016A80((_DWORD *)(*(_DWORD *)(this + 4) + 244));
    result = *(_DWORD *)(this + 540);
    if ( result > 1 )
    {
      v32 = *(_DWORD *)(this + 8) + 2 * result - 4;
      v33 = *(_DWORD *)(this + 4);
      v34 = *(_WORD *)(v33 + 220);
      v35 = *(_DWORD *)(v33 + 224);
      v36 = *(_DWORD *)(v33 + 192);
      v33 += 192;
      *(_WORD *)(v36 + 2 * v35) = v32 + v34;
      *(_DWORD *)(v33 + 32) += *(unsigned __int8 *)(v33 + 12);
      *(_DWORD *)(v33 + 24) = *(_DWORD *)(v33 + 32);
      v37 = *(_DWORD *)(this + 4);
      v38 = *(_WORD *)(v37 + 220);
      v39 = *(_DWORD *)(v37 + 224);
      v40 = *(_DWORD *)(v37 + 192);
      v37 += 192;
      *(_WORD *)(v40 + 2 * v39) = v32 + v38 + 1;
      *(_DWORD *)(v37 + 32) += *(unsigned __int8 *)(v37 + 12);
      *(_DWORD *)(v37 + 24) = *(_DWORD *)(v37 + 32);
      v41 = *(_DWORD *)(this + 4);
      v42 = *(_WORD *)(v41 + 220);
      v43 = *(_DWORD *)(v41 + 224);
      v44 = *(_DWORD *)(v41 + 192);
      v41 += 192;
      *(_WORD *)(v44 + 2 * v43) = v32 + v42 + 2;
      *(_DWORD *)(v41 + 32) += *(unsigned __int8 *)(v41 + 12);
      *(_DWORD *)(v41 + 24) = *(_DWORD *)(v41 + 32);
      v45 = *(_DWORD *)(this + 4);
      v46 = *(_WORD *)(v45 + 220);
      v47 = *(_DWORD *)(v45 + 224);
      v48 = *(_DWORD *)(v45 + 192);
      v45 += 192;
      *(_WORD *)(v48 + 2 * v47) = v32 + v46 + 1;
      *(_DWORD *)(v45 + 32) += *(unsigned __int8 *)(v45 + 12);
      *(_DWORD *)(v45 + 24) = *(_DWORD *)(v45 + 32);
      v49 = *(_DWORD *)(this + 4);
      v50 = *(_WORD *)(v49 + 220);
      v51 = *(_DWORD *)(v49 + 224);
      v52 = *(_DWORD *)(v49 + 192);
      v49 += 192;
      *(_WORD *)(v52 + 2 * v51) = v32 + v50 + 3;
      *(_DWORD *)(v49 + 32) += *(unsigned __int8 *)(v49 + 12);
      *(_DWORD *)(v49 + 24) = *(_DWORD *)(v49 + 32);
      v53 = *(_DWORD *)(this + 4);
      LOWORD(v49) = *(_WORD *)(v53 + 220);
      v54 = *(_DWORD *)(v53 + 192);
      v53 += 192;
      *(_WORD *)(v54 + 2 * *(_DWORD *)(v53 + 32)) = v32 + v49 + 2;
      *(_DWORD *)(v53 + 32) += *(unsigned __int8 *)(v53 + 12);
      result = *(_DWORD *)(v53 + 32);
      *(_DWORD *)(v53 + 24) = result;
    }
  }
  return result;
}
