int __cdecl sub_10179D80(float *a1, float *a2, float a3, int a4, unsigned __int8 *a5, float a6)
{
  float *v8; // eax
  double v9; // st7
  double v10; // st5
  double v11; // st7
  int v12; // esi
  int v13; // esi
  float *v14; // eax
  float *v15; // eax
  float *v16; // eax
  float *v17; // eax
  double v18; // st4
  double v19; // rt1
  double v20; // st4
  double v21; // rt2
  double v22; // st4
  float *v23; // eax
  float *v24; // eax
  float *v25; // eax
  double v26; // st6
  double v27; // st7
  float *v28; // eax
  float *v29; // eax
  float *v30; // eax
  double v31; // st6
  double v32; // st7
  float *v33; // eax
  float *v34; // eax
  float *v35; // eax
  double v36; // st4
  double v37; // rt1
  double v38; // st4
  double v39; // rt2
  double v40; // st4
  float *v41; // eax
  float *v42; // eax
  float *v43; // eax
  double v44; // st6
  double v45; // st7
  float *v46; // eax
  float *v47; // eax
  float *v48; // eax
  double v49; // st6
  double v50; // st7
  float *v51; // eax
  float *v52; // eax
  float *v53; // eax
  float *v54; // eax
  float *v55; // eax
  int v56; // eax
  int v57; // esi
  float v59; // [esp+0h] [ebp-224h]
  _BYTE v60[180]; // [esp+10h] [ebp-214h] BYREF
  int v61; // [esp+C4h] [ebp-160h]
  int v62; // [esp+C8h] [ebp-15Ch]
  char v63; // [esp+CCh] [ebp-158h]
  int v64[3]; // [esp+D0h] [ebp-154h] BYREF
  unsigned __int8 v65; // [esp+DCh] [ebp-148h]
  int v66; // [esp+E0h] [ebp-144h]
  int v67; // [esp+E4h] [ebp-140h]
  int v68; // [esp+E8h] [ebp-13Ch]
  int v69; // [esp+ECh] [ebp-138h]
  int v70; // [esp+F0h] [ebp-134h]
  _DWORD v71[41]; // [esp+104h] [ebp-120h] BYREF
  int v72; // [esp+1A8h] [ebp-7Ch]
  int v73; // [esp+1B0h] [ebp-74h]
  int v74; // [esp+1B4h] [ebp-70h]
  float *v75; // [esp+1BCh] [ebp-68h]
  float *v76; // [esp+1C0h] [ebp-64h]
  float *v77; // [esp+1C4h] [ebp-60h]
  int *v78; // [esp+1E4h] [ebp-40h]
  int v79; // [esp+1F8h] [ebp-2Ch]
  int v80; // [esp+1FCh] [ebp-28h]
  float v81; // [esp+200h] [ebp-24h]
  float v82; // [esp+204h] [ebp-20h]
  float v83; // [esp+208h] [ebp-1Ch]
  float v84; // [esp+20Ch] [ebp-18h]
  float v85; // [esp+210h] [ebp-14h]
  float v86; // [esp+214h] [ebp-10h]
  float v87; // [esp+218h] [ebp-Ch]
  float v88; // [esp+21Ch] [ebp-8h]
  float v89; // [esp+220h] [ebp-4h]
  float v90; // [esp+22Ch] [ebp+8h]
  float v91; // [esp+230h] [ebp+Ch]

  v81 = *a2 - *a1;
  v82 = a2[1] - a1[1];
  v83 = a2[2] - a1[2];
  v8 = sub_101422C0();
  v84 = *a2 - *v8;
  v85 = a2[1] - v8[1];
  v86 = a2[2] - v8[2];
  v59 = v81 * v81 + v82 * v82 + v83 * v83;
  v9 = off_103EDFE0(v59);
  v91 = 0.25;
  v90 = 0.75;
  if ( v9 > 0.0 )
  {
    v10 = a6 / v9;
    v11 = 0.0;
    v91 = v10;
    if ( v10 <= 0.25 )
    {
      if ( v10 >= 0.0 )
        v11 = v10;
      else
        v91 = 0.0;
      v90 = 1.0 - v11;
    }
    else
    {
      v91 = 0.25;
      v90 = 1.0 - 0.25;
    }
  }
  v87 = v86 * v82 - v85 * v83;
  v88 = v83 * v84 - v86 * v81;
  v89 = v81 * v85 - v84 * v82;
  off_103EDFEC();
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v79 = v12;
  if ( v12 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 8))(v12);
  v13 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, int))(*(_DWORD *)v12 + 224))(v12, 1, 0, 0, a4);
  v80 = v13;
  sub_10016C20((int)v60);
  sub_10061780((int)v60, v13, 2, 8, 24);
  v14 = v75;
  *v75 = *a1;
  v14[1] = a1[1];
  v14[2] = a1[2];
  v15 = v77;
  *v77 = 0.5;
  v15[1] = 0.0;
  *v78 = 0;
  v16 = v76;
  *v76 = v87;
  v16[1] = v88;
  v16[2] = v89;
  sub_10016A80(v71);
  v17 = v75;
  v18 = v81 * v91 + *a1;
  v84 = v18;
  v19 = v18;
  v20 = v82 * v91 + a1[1];
  v85 = v20;
  v21 = v20;
  v22 = v83 * v91 + a1[2];
  v86 = v22;
  *v75 = v19;
  v17[1] = v21;
  v17[2] = v22;
  v23 = v77;
  *v77 = 0.5;
  v23[1] = v91;
  *v78 = a5[2] | ((a5[1] | ((*a5 | (a5[3] << 8)) << 8)) << 8);
  v24 = v76;
  *v76 = v87;
  v24[1] = v88;
  v24[2] = v89;
  sub_10016A80(v71);
  v25 = v75;
  v26 = v86 - a3 * v89;
  v27 = v85 - v88 * a3;
  *v75 = v84 - v87 * a3;
  v25[1] = v27;
  v25[2] = v26;
  v28 = v77;
  *v77 = 1.0;
  v28[1] = v91;
  *v78 = a5[2] | ((a5[1] | ((*a5 | (a5[3] << 8)) << 8)) << 8);
  v29 = v76;
  *v76 = v87;
  v29[1] = v88;
  v29[2] = v89;
  sub_10016A80(v71);
  v30 = v75;
  v31 = v88 * a3 + v85;
  v32 = a3 * v89 + v86;
  *v75 = v87 * a3 + v84;
  v30[1] = v31;
  v30[2] = v32;
  v33 = v77;
  *v77 = 0.0;
  v33[1] = v91;
  *v78 = a5[2] | ((a5[1] | ((*a5 | (a5[3] << 8)) << 8)) << 8);
  v34 = v76;
  *v76 = v87;
  v34[1] = v88;
  v34[2] = v89;
  sub_10016A80(v71);
  v35 = v75;
  v36 = v81 * v90 + *a1;
  v84 = v36;
  v37 = v36;
  v38 = v82 * v90 + a1[1];
  v85 = v38;
  v39 = v38;
  v40 = v83 * v90 + a1[2];
  v86 = v40;
  *v75 = v37;
  v35[1] = v39;
  v35[2] = v40;
  v41 = v77;
  *v77 = 0.5;
  v41[1] = v90;
  *v78 = a5[2] | ((a5[1] | ((*a5 | (a5[3] << 8)) << 8)) << 8);
  v42 = v76;
  *v76 = v87;
  v42[1] = v88;
  v42[2] = v89;
  sub_10016A80(v71);
  v43 = v75;
  v44 = v86 - a3 * v89;
  v45 = v85 - v88 * a3;
  *v75 = v84 - v87 * a3;
  v43[1] = v45;
  v43[2] = v44;
  v46 = v77;
  *v77 = 1.0;
  v46[1] = v90;
  *v78 = a5[2] | ((a5[1] | ((*a5 | (a5[3] << 8)) << 8)) << 8);
  v47 = v76;
  *v76 = v87;
  v47[1] = v88;
  v47[2] = v89;
  sub_10016A80(v71);
  v48 = v75;
  v49 = v88 * a3 + v85;
  v50 = a3 * v89 + v86;
  *v75 = v87 * a3 + v84;
  v48[1] = v49;
  v48[2] = v50;
  v51 = v77;
  *v77 = 0.0;
  v51[1] = v90;
  *v78 = a5[2] | ((a5[1] | ((*a5 | (a5[3] << 8)) << 8)) << 8);
  v52 = v76;
  *v76 = v87;
  v52[1] = v88;
  v52[2] = v89;
  sub_10016A80(v71);
  v53 = v75;
  *v75 = *a2;
  v53[1] = a2[1];
  v53[2] = a2[2];
  v54 = v77;
  *v77 = 0.5;
  v54[1] = 1.0;
  *v78 = 0;
  v55 = v76;
  *v76 = v87;
  v55[1] = v88;
  v55[2] = v89;
  sub_10016A80(v71);
  *(_WORD *)(v64[0] + 2 * v70) = v69;
  v70 += v65;
  *(_WORD *)(v64[0] + 2 * v70) = v69 + 2;
  v70 += v65;
  *(_WORD *)(v64[0] + 2 * v70) = v69 + 1;
  v70 += v65;
  *(_WORD *)(v64[0] + 2 * v70) = v69;
  v70 += v65;
  *(_WORD *)(v64[0] + 2 * v70) = v69 + 1;
  v70 += v65;
  *(_WORD *)(v64[0] + 2 * v70) = v69 + 3;
  v70 += v65;
  *(_WORD *)(v64[0] + 2 * v70) = v69 + 7;
  v70 += v65;
  *(_WORD *)(v64[0] + 2 * v70) = v69 + 4;
  v70 += v65;
  *(_WORD *)(v64[0] + 2 * v70) = v69 + 5;
  v70 += v65;
  *(_WORD *)(v64[0] + 2 * v70) = v69 + 7;
  v70 += v65;
  *(_WORD *)(v64[0] + 2 * v70) = v69 + 6;
  v70 += v65;
  *(_WORD *)(v64[0] + 2 * v70) = v69 + 4;
  v70 += v65;
  *(_WORD *)(v64[0] + 2 * v70) = v69 + 1;
  v70 += v65;
  *(_WORD *)(v64[0] + 2 * v70) = v69 + 4;
  v70 += v65;
  *(_WORD *)(v64[0] + 2 * v70) = v69 + 6;
  v70 += v65;
  *(_WORD *)(v64[0] + 2 * v70) = v69 + 1;
  v70 += v65;
  *(_WORD *)(v64[0] + 2 * v70) = v69 + 6;
  v70 += v65;
  *(_WORD *)(v64[0] + 2 * v70) = v69 + 3;
  v70 += v65;
  *(_WORD *)(v64[0] + 2 * v70) = v69 + 1;
  v70 += v65;
  *(_WORD *)(v64[0] + 2 * v70) = v69 + 5;
  v70 += v65;
  *(_WORD *)(v64[0] + 2 * v70) = v69 + 4;
  v70 += v65;
  *(_WORD *)(v64[0] + 2 * v70) = v69 + 1;
  v70 += v65;
  *(_WORD *)(v64[0] + 2 * v70) = v69 + 2;
  v70 += v65;
  *(_WORD *)(v64[0] + 2 * v70) = v69 + 5;
  v70 += v65;
  v68 = v70;
  if ( v63 )
  {
    switch ( v62 )
    {
      case 4:
        v56 = 2 * v74 - 2;
        break;
      case 5:
        v56 = 2 * v74;
        break;
      case 6:
        v56 = 3 * v74 - 6;
        break;
      case 7:
        v56 = 6 * v74 / 4;
        break;
      case 8:
        v56 = 0;
        break;
      default:
        v56 = v74;
        break;
    }
    sub_10016B00(v64, v62, v56);
  }
  (*(void (__thiscall **)(int, int, int, _BYTE *))(*(_DWORD *)v61 + 80))(v61, v74, v68, v60);
  v66 = 0;
  v67 = 0;
  v73 = 0;
  v72 = 0;
  v71[19] = -1;
  v61 = 0;
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v80 + 48))(v80, -1, 0);
  if ( v72 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v72 + 8))(v72) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v72 + 16))(v72);
  if ( v66 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v66 + 8))(v66) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v66 + 16))(v66);
  v57 = v79;
  (*(void (__thiscall **)(int))(*(_DWORD *)v79 + 12))(v79);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v57 + 4))(v57);
}
