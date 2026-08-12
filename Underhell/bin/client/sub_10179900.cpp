int __cdecl sub_10179900(float *a1, float *a2, float a3, int a4, unsigned __int8 *a5)
{
  float *v7; // eax
  double v8; // st7
  double v9; // st6
  double v10; // st5
  int v11; // esi
  double v12; // st7
  float *v13; // eax
  double v14; // st6
  double v15; // st5
  double v16; // st7
  double v17; // rtt
  float *v18; // eax
  float *v19; // eax
  float *v20; // eax
  double v21; // st7
  double v22; // st6
  float *v23; // eax
  float *v24; // eax
  float *v25; // eax
  double v26; // st7
  double v27; // st6
  float *v28; // eax
  float *v29; // eax
  float *v30; // eax
  double v31; // st7
  double v32; // st6
  float *v33; // eax
  float *v34; // eax
  int v35; // eax
  int v36; // esi
  _DWORD v38[44]; // [esp+Ch] [ebp-204h] BYREF
  char v39; // [esp+BCh] [ebp-154h]
  int v40; // [esp+C0h] [ebp-150h]
  int v41; // [esp+C4h] [ebp-14Ch]
  char v42; // [esp+C8h] [ebp-148h]
  int v43[3]; // [esp+CCh] [ebp-144h] BYREF
  char v44; // [esp+D8h] [ebp-138h]
  int v45; // [esp+DCh] [ebp-134h]
  int v46; // [esp+E0h] [ebp-130h]
  int v47; // [esp+E4h] [ebp-12Ch]
  int v48; // [esp+E8h] [ebp-128h]
  int v49; // [esp+ECh] [ebp-124h]
  char v50; // [esp+FCh] [ebp-114h]
  _DWORD v51[41]; // [esp+100h] [ebp-110h] BYREF
  int v52; // [esp+1A4h] [ebp-6Ch]
  int v53; // [esp+1ACh] [ebp-64h]
  int v54; // [esp+1B0h] [ebp-60h]
  float *v55; // [esp+1B8h] [ebp-58h]
  float *v56; // [esp+1BCh] [ebp-54h]
  float *v57; // [esp+1C0h] [ebp-50h]
  int *v58; // [esp+1E0h] [ebp-30h]
  int v59; // [esp+1F4h] [ebp-1Ch]
  float v60; // [esp+1F8h] [ebp-18h]
  float v61; // [esp+1FCh] [ebp-14h]
  float v62; // [esp+200h] [ebp-10h]
  float v63; // [esp+204h] [ebp-Ch]
  float v64; // [esp+208h] [ebp-8h]
  float v65; // [esp+20Ch] [ebp-4h]
  int v66; // [esp+218h] [ebp+8h]
  float v67; // [esp+21Ch] [ebp+Ch]

  v60 = *a2 - *a1;
  v61 = a2[1] - a1[1];
  v62 = a2[2] - a1[2];
  v7 = sub_101422C0();
  v8 = *a2 - *v7;
  v9 = a2[1] - v7[1];
  v10 = a2[2] - v7[2];
  v63 = v10 * v61 - v9 * v62;
  v64 = v62 * v8 - v10 * v60;
  v65 = v60 * v9 - v8 * v61;
  off_103EDFEC();
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v59 = v11;
  if ( v11 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11);
  v66 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, int))(*(_DWORD *)v11 + 224))(v11, 1, 0, 0, a4);
  sub_10016C20((int)v38);
  v40 = v66;
  v42 = 1;
  v41 = 7;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v66 + 40))(v66, 2);
  (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v40 + 68))(v40, 4, 6, v38);
  v47 = 0;
  v50 = 0;
  v49 = 0;
  v45 = v66 + 4;
  v48 = v38[39];
  v43[0] = v38[41];
  v46 = 6;
  v44 = v39;
  sub_10016990((int)v51, v66, 4, v38);
  v49 = 0;
  sub_10016A00(v51);
  v12 = -a3;
  v13 = v55;
  v67 = v12;
  v14 = v63 * v12 + *a1;
  v15 = v12;
  v16 = v12 * v64 + a1[1];
  v17 = v15 * v65 + a1[2];
  *v55 = v14;
  v13[1] = v16;
  v13[2] = v17;
  v18 = v57;
  *v57 = 1.0;
  v18[1] = 1.0;
  *v58 = a5[2] | ((a5[1] | ((*a5 | (a5[3] << 8)) << 8)) << 8);
  v19 = v56;
  *v56 = v63;
  v19[1] = v64;
  v19[2] = v65;
  sub_10016A80(v51);
  v20 = v55;
  v21 = v64 * a3 + a1[1];
  v22 = a3 * v65 + a1[2];
  *v55 = v63 * a3 + *a1;
  v20[1] = v21;
  v20[2] = v22;
  v23 = v57;
  *v57 = 0.0;
  v23[1] = 1.0;
  *v58 = a5[2] | ((a5[1] | ((*a5 | (a5[3] << 8)) << 8)) << 8);
  v24 = v56;
  *v56 = v63;
  v24[1] = v64;
  v24[2] = v65;
  sub_10016A80(v51);
  v25 = v55;
  v26 = v64 * a3 + a2[1];
  v27 = a3 * v65 + a2[2];
  *v55 = v63 * a3 + *a2;
  v25[1] = v26;
  v25[2] = v27;
  v28 = v57;
  *v57 = 0.0;
  v28[1] = 0.0;
  *v58 = a5[2] | ((a5[1] | ((*a5 | (a5[3] << 8)) << 8)) << 8);
  v29 = v56;
  *v56 = v63;
  v29[1] = v64;
  v29[2] = v65;
  sub_10016A80(v51);
  v30 = v55;
  v31 = v67 * v64 + a2[1];
  v32 = v67 * v65 + a2[2];
  *v55 = v63 * v67 + *a2;
  v30[1] = v31;
  v30[2] = v32;
  v33 = v57;
  *v57 = 1.0;
  v33[1] = 0.0;
  *v58 = a5[2] | ((a5[1] | ((*a5 | (a5[3] << 8)) << 8)) << 8);
  v34 = v56;
  *v56 = v63;
  v34[1] = v64;
  v34[2] = v65;
  sub_10016A80(v51);
  if ( v42 )
  {
    switch ( v41 )
    {
      case 4:
        v35 = 2 * v54 - 2;
        break;
      case 5:
        v35 = 2 * v54;
        break;
      case 6:
        v35 = 3 * v54 - 6;
        break;
      case 7:
        v35 = 6 * v54 / 4;
        break;
      case 8:
        v35 = 0;
        break;
      default:
        v35 = v54;
        break;
    }
    sub_10016B00(v43, v41, v35);
  }
  (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v40 + 80))(v40, v54, v47, v38);
  v45 = 0;
  v46 = 0;
  v53 = 0;
  v52 = 0;
  v51[19] = -1;
  v40 = 0;
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v66 + 48))(v66, -1, 0);
  if ( v52 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v52 + 8))(v52) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v52 + 16))(v52);
  if ( v45 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v45 + 8))(v45) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v45 + 16))(v45);
  v36 = v59;
  (*(void (__thiscall **)(int))(*(_DWORD *)v59 + 12))(v59);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v36 + 4))(v36);
}
