int __usercall sub_10017340@<eax>(int a1@<ebx>, int a2, float *a3, float a4, float *a5, float a6)
{
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // ebx
  float *v12; // eax
  float *v13; // eax
  double v14; // st7
  float *v15; // eax
  double v16; // st5
  double v17; // st4
  float *v18; // eax
  double v19; // rt1
  double v20; // st5
  float *v21; // eax
  float *v22; // eax
  float *v23; // eax
  double v24; // st5
  double v25; // st4
  float *v26; // eax
  double v27; // rt2
  double v28; // st5
  float *v29; // eax
  float *v30; // eax
  float *v31; // eax
  double v32; // st5
  double v33; // st4
  float *v34; // eax
  double v35; // rt0
  double v36; // st5
  float *v37; // eax
  float *v38; // eax
  float *v39; // eax
  double v40; // st6
  double v41; // st5
  double v42; // st4
  float *v43; // eax
  double v44; // rt1
  double v45; // st5
  double v46; // st6
  int v47; // eax
  int v48; // esi
  char v50[12]; // [esp+14h] [ebp-208h] BYREF
  _DWORD v51[44]; // [esp+20h] [ebp-1FCh] BYREF
  char v52; // [esp+D0h] [ebp-14Ch]
  int v53; // [esp+D4h] [ebp-148h]
  int v54; // [esp+D8h] [ebp-144h]
  char v55; // [esp+DCh] [ebp-140h]
  int v56[3]; // [esp+E0h] [ebp-13Ch] BYREF
  char v57; // [esp+ECh] [ebp-130h]
  int v58; // [esp+F0h] [ebp-12Ch]
  int v59; // [esp+F4h] [ebp-128h]
  int v60; // [esp+F8h] [ebp-124h]
  int v61; // [esp+FCh] [ebp-120h]
  int v62; // [esp+100h] [ebp-11Ch]
  char v63; // [esp+110h] [ebp-10Ch]
  _DWORD v64[41]; // [esp+114h] [ebp-108h] BYREF
  int v65; // [esp+1B8h] [ebp-64h]
  int v66; // [esp+1C0h] [ebp-5Ch]
  int v67; // [esp+1C4h] [ebp-58h]
  float *v68; // [esp+1CCh] [ebp-50h]
  float *v69; // [esp+1D4h] [ebp-48h]
  unsigned int *v70; // [esp+1F4h] [ebp-28h]
  int v71; // [esp+208h] [ebp-14h]
  float v72; // [esp+20Ch] [ebp-10h]
  float v73; // [esp+210h] [ebp-Ch]
  float v74; // [esp+214h] [ebp-8h]
  float v75; // [esp+218h] [ebp-4h]
  float v76; // [esp+224h] [ebp+8h]
  float v77; // [esp+224h] [ebp+8h]
  float v78; // [esp+228h] [ebp+Ch]
  float v79; // [esp+228h] [ebp+Ch]
  float v80; // [esp+228h] [ebp+Ch]
  float v81; // [esp+228h] [ebp+Ch]
  float v82; // [esp+230h] [ebp+14h]
  float v83; // [esp+230h] [ebp+14h]
  float v84; // [esp+230h] [ebp+14h]
  float v85; // [esp+230h] [ebp+14h]

  if ( a2 )
  {
    v6 = (*(int (__thiscall **)(int, const char *, void *))(*(_DWORD *)a2 + 188))(a2, "$hdrcolorscale", &unk_10403214);
    if ( v6 )
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 12))(v6, LODWORD(a6));
  }
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v8 = v7;
  v71 = v7;
  if ( v7 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
  v9 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v8 + 224))(v8, 1, 0, 0, 0, a1);
  sub_10016C20((int)v51);
  v53 = v9;
  v55 = 1;
  v54 = 7;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 40))(v9, 2);
  (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v53 + 68))(v53, 4, 6, v51);
  v61 = v51[39];
  v58 = v9 + 4;
  v60 = 0;
  v59 = 6;
  v63 = 0;
  v56[0] = v51[41];
  v57 = v52;
  v62 = 0;
  sub_10016990((int)v64, v9, 4, v51);
  v62 = 0;
  sub_10016A00(v64);
  sub_1013B9F0(a3, v50);
  v82 = a5[2] * 255.0 + 8388608.0;
  v78 = a5[1] * 255.0 + 8388608.0;
  v76 = 255.0 * *a5 + 8388608.0;
  *v70 = LOBYTE(v82) | ((LOBYTE(v78) | ((LOBYTE(v76) | 0xFFFFFF00) << 8)) << 8);
  v12 = v69;
  *v69 = 0.0;
  v12[1] = 1.0;
  v13 = (float *)sub_10142300();
  v14 = -a4;
  v77 = v14;
  v73 = v14 * *v13 + *a3;
  v74 = v13[1] * v14 + a3[1];
  v75 = v14 * v13[2] + a3[2];
  v15 = (float *)sub_101422F0();
  v73 = v77 * *v15 + v73;
  v16 = v15[1] * v77 + v74;
  v74 = v16;
  v17 = v15[2];
  v18 = v68;
  v19 = v16;
  v20 = v77 * v17 + v75;
  v75 = v20;
  *v68 = v73;
  v18[1] = v19;
  v18[2] = v20;
  sub_10016A80(v64);
  v72 = a5[2] * 255.0 + 8388608.0;
  v83 = a5[1] * 255.0 + 8388608.0;
  v79 = 255.0 * *a5 + 8388608.0;
  *v70 = LOBYTE(v72) | ((LOBYTE(v83) | ((LOBYTE(v79) | 0xFFFFFF00) << 8)) << 8);
  v21 = v69;
  *v69 = 0.0;
  v21[1] = 0.0;
  v22 = (float *)sub_10142300();
  v73 = *v22 * a4 + *a3;
  v74 = v22[1] * a4 + a3[1];
  v75 = a4 * v22[2] + a3[2];
  v23 = (float *)sub_101422F0();
  v73 = v77 * *v23 + v73;
  v24 = v23[1] * v77 + v74;
  v74 = v24;
  v25 = v23[2];
  v26 = v68;
  v27 = v24;
  v28 = v77 * v25 + v75;
  v75 = v28;
  *v68 = v73;
  v26[1] = v27;
  v26[2] = v28;
  sub_10016A80(v64);
  v72 = a5[2] * 255.0 + 8388608.0;
  v84 = a5[1] * 255.0 + 8388608.0;
  v80 = 255.0 * *a5 + 8388608.0;
  *v70 = LOBYTE(v72) | ((LOBYTE(v84) | ((LOBYTE(v80) | 0xFFFFFF00) << 8)) << 8);
  v29 = v69;
  *v69 = 1.0;
  v29[1] = 0.0;
  v30 = (float *)sub_10142300();
  v73 = *v30 * a4 + *a3;
  v74 = v30[1] * a4 + a3[1];
  v75 = a4 * v30[2] + a3[2];
  v31 = (float *)sub_101422F0();
  v73 = *v31 * a4 + v73;
  v32 = v31[1] * a4 + v74;
  v74 = v32;
  v33 = v31[2];
  v34 = v68;
  v35 = v32;
  v36 = a4 * v33 + v75;
  v75 = v36;
  *v68 = v73;
  v34[1] = v35;
  v34[2] = v36;
  sub_10016A80(v64);
  v72 = a5[2] * 255.0 + 8388608.0;
  v85 = a5[1] * 255.0 + 8388608.0;
  v81 = 255.0 * *a5 + 8388608.0;
  *v70 = LOBYTE(v72) | ((LOBYTE(v85) | ((LOBYTE(v81) | 0xFFFFFF00) << 8)) << 8);
  v37 = v69;
  *v69 = 1.0;
  v37[1] = 1.0;
  v38 = (float *)sub_10142300();
  v73 = v77 * *v38 + *a3;
  v74 = v38[1] * v77 + a3[1];
  v75 = v77 * v38[2] + a3[2];
  v39 = (float *)sub_101422F0();
  v40 = *v39 * a4 + v73;
  v41 = v39[1] * a4 + v74;
  v42 = v39[2];
  v43 = v68;
  v44 = v41;
  v45 = v40;
  v46 = a4 * v42 + v75;
  *v68 = v45;
  v43[1] = v44;
  v43[2] = v46;
  sub_10016A80(v64);
  if ( v55 )
  {
    switch ( v54 )
    {
      case 4:
        v47 = 2 * v67 - 2;
        break;
      case 5:
        v47 = 2 * v67;
        break;
      case 6:
        v47 = 3 * v67 - 6;
        break;
      case 7:
        v47 = 6 * v67 / 4;
        break;
      case 8:
        v47 = 0;
        break;
      default:
        v47 = v67;
        break;
    }
    sub_10016B00(v56, v54, v47);
  }
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v53 + 80))(v53, v67, v60);
  v58 = 0;
  v59 = 0;
  v66 = 0;
  v65 = 0;
  v64[19] = -1;
  v53 = 0;
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v9 + 48))(v9, -1, 0);
  if ( v65 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v65 + 8))(v65) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v65 + 16))(v65);
  if ( v58 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v58 + 8))(v58) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v58 + 16))(v58);
  v48 = v71;
  (*(void (__thiscall **)(int))(*(_DWORD *)v71 + 12))(v71);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v48 + 4))(v48);
}
