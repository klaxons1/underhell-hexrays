int __thiscall sub_10095470(int this, int a2)
{
  float *v3; // esi
  unsigned __int8 v4; // bl
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // st4
  double v9; // st7
  double v10; // st2
  double v11; // st1
  double v12; // st3
  bool v13; // zf
  double v14; // rt2
  double v15; // st1
  double v16; // rtt
  double v17; // st1
  double v18; // st6
  double v19; // st2
  double v20; // st6
  double v21; // st3
  double v22; // st7
  double v23; // st5
  double v24; // st4
  double v25; // st3
  double v26; // st4
  double v27; // st3
  double v28; // rt0
  float *v29; // eax
  int v30; // edi
  int v31; // ecx
  int v32; // edi
  float *v33; // eax
  float *v34; // eax
  double v35; // st6
  double v36; // st5
  double v37; // st7
  float *v38; // eax
  float *v39; // eax
  int *v40; // ecx
  double v41; // st6
  double v42; // st5
  float *v43; // eax
  float *v44; // eax
  double v45; // st6
  double v46; // st7
  int *v47; // edx
  float *v48; // esi
  float v50[3]; // [esp+Ch] [ebp-48h] BYREF
  float v51; // [esp+18h] [ebp-3Ch] BYREF
  float v52; // [esp+1Ch] [ebp-38h]
  float v53; // [esp+20h] [ebp-34h]
  float v54; // [esp+24h] [ebp-30h] BYREF
  float v55; // [esp+28h] [ebp-2Ch]
  float v56; // [esp+2Ch] [ebp-28h]
  float v57; // [esp+30h] [ebp-24h]
  float v58; // [esp+34h] [ebp-20h]
  float v59; // [esp+38h] [ebp-1Ch]
  float v60; // [esp+3Ch] [ebp-18h]
  float v61; // [esp+40h] [ebp-14h]
  float v62; // [esp+44h] [ebp-10h]
  float v63; // [esp+48h] [ebp-Ch]
  int v64; // [esp+4Ch] [ebp-8h]
  unsigned __int16 v65; // [esp+52h] [ebp-2h]

  (*(void (__thiscall **)(int, float *))(*(_DWORD *)(this + 4) + 56))(this + 4, v50);
  v3 = (float *)(dword_1042CD48 + 32 * *(unsigned __int16 *)(this + 40));
  v4 = (int)(v50[0] * 255.0);
  v64 = (int)(v50[1] * 255.0);
  BYTE1(v64) = v64;
  LODWORD(v63) = v65 | 0xC00;
  HIBYTE(v64) = *(_BYTE *)(this + 37);
  LODWORD(v63) = (int)(255.0 * v50[2]);
  BYTE2(v64) = LOBYTE(v63);
  sub_101EE040(this + 20, 0, &v51, &v54);
  v5 = sub_1001AB20(*(unsigned __int16 *)(this + 42));
  v6 = *v3 * v5;
  v7 = v3[1] * v5;
  v8 = v3[2] * v5;
  v9 = v5 * v3[3];
  v10 = v52 * v6 + *(float *)(this + 12);
  v11 = v51 * v6 + *(float *)(this + 8) + v54 * v7;
  v12 = v53 * v6 + *(float *)(this + 16);
  v13 = (*(_BYTE *)(this + 36) & 0x20) == 0;
  v57 = v11;
  v14 = v11;
  v15 = v10 + v55 * v7;
  v58 = v15;
  v16 = v15;
  v17 = v12 + v56 * v7;
  v59 = v17;
  v18 = v8 - v6;
  v51 = v51 * v18;
  v52 = v52 * v18;
  v19 = v18 * v53;
  v20 = v14;
  v53 = v19;
  v21 = v9;
  v22 = v16;
  v23 = v21 - v7;
  v54 = v54 * v23;
  v55 = v55 * v23;
  v56 = v23 * v56;
  v24 = v3[4];
  v60 = v3[4];
  v25 = v3[5];
  v61 = v3[5];
  v62 = v3[6];
  v63 = v3[7];
  if ( v13 )
  {
    v26 = v25;
    v27 = v3[6];
    v60 = v3[6];
    v62 = v3[4];
    v28 = v27;
    v25 = v26;
    v24 = v28;
  }
  v29 = *(float **)(a2 + 428);
  v30 = HIBYTE(v64);
  *v29 = v20;
  v31 = BYTE2(v64);
  v29[1] = v22;
  v29[2] = v17;
  v32 = v31 | ((BYTE1(v64) | ((v4 | (v30 << 8)) << 8)) << 8);
  **(_DWORD **)(a2 + 468) = v32;
  v33 = *(float **)(a2 + 436);
  *v33 = v24;
  v33[1] = v25;
  sub_10016A80((_DWORD *)(a2 + 244));
  v34 = *(float **)(a2 + 428);
  v57 = v54 + v57;
  v35 = v55 + v58;
  v58 = v35;
  v36 = v59 + v56;
  v59 = v36;
  *v34 = v57;
  v34[1] = v35;
  v34[2] = v36;
  v37 = v60;
  **(_DWORD **)(a2 + 468) = v32;
  v38 = *(float **)(a2 + 436);
  *v38 = v37;
  v38[1] = v63;
  sub_10016A80((_DWORD *)(a2 + 244));
  v39 = *(float **)(a2 + 428);
  v40 = *(int **)(a2 + 468);
  v57 = v57 + v51;
  v41 = v52 + v58;
  v58 = v41;
  v42 = v59 + v53;
  v59 = v42;
  *v39 = v57;
  v39[1] = v41;
  v39[2] = v42;
  *v40 = v32;
  v43 = *(float **)(a2 + 436);
  *v43 = v62;
  v43[1] = v63;
  sub_10016A80((_DWORD *)(a2 + 244));
  v44 = *(float **)(a2 + 428);
  v45 = v58 - v55;
  v46 = v59 - v56;
  *v44 = v57 - v54;
  v47 = *(int **)(a2 + 468);
  v44[1] = v45;
  v44[2] = v46;
  *v47 = v32;
  v48 = *(float **)(a2 + 436);
  *v48 = v62;
  v48[1] = v61;
  return sub_10016A80((_DWORD *)(a2 + 244));
}
