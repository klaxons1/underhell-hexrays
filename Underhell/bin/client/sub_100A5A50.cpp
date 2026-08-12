// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_100A5A50@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4@<esi>, double a5)
{
  float *v6; // eax
  double v7; // st7
  double v8; // st6
  double v9; // st5
  int v10; // edi
  int v11; // edi
  double v12; // st7
  float *v13; // eax
  bool v14; // cl
  char v15; // bl
  double v16; // rt1
  double v17; // rt2
  float *v18; // eax
  double v19; // st7
  float *v20; // eax
  double v21; // st7
  float *v22; // eax
  double v23; // rt0
  double v24; // rt1
  float *v25; // eax
  float *v26; // eax
  double v27; // st7
  double v28; // st7
  float *v29; // eax
  double v30; // rtt
  double v31; // rt0
  float *v32; // eax
  float *v33; // eax
  double v34; // st7
  double v35; // st7
  float *v36; // eax
  double v37; // rt2
  double v38; // rtt
  float *v39; // eax
  float *v40; // eax
  double v41; // st7
  int v42; // eax
  int v43; // esi
  _DWORD v46[44]; // [esp+14h] [ebp-204h] BYREF
  char v47; // [esp+C4h] [ebp-154h]
  int v48; // [esp+C8h] [ebp-150h]
  int v49; // [esp+CCh] [ebp-14Ch]
  char v50; // [esp+D0h] [ebp-148h]
  int v51[3]; // [esp+D4h] [ebp-144h] BYREF
  char v52; // [esp+E0h] [ebp-138h]
  int v53; // [esp+E4h] [ebp-134h]
  int v54; // [esp+E8h] [ebp-130h]
  int v55; // [esp+ECh] [ebp-12Ch]
  int v56; // [esp+F0h] [ebp-128h]
  int v57; // [esp+F4h] [ebp-124h]
  char v58; // [esp+104h] [ebp-114h]
  _DWORD v59[41]; // [esp+108h] [ebp-110h] BYREF
  int v60; // [esp+1ACh] [ebp-6Ch]
  int v61; // [esp+1B4h] [ebp-64h]
  int v62; // [esp+1B8h] [ebp-60h]
  float *v63; // [esp+1C0h] [ebp-58h]
  float *v64; // [esp+1C4h] [ebp-54h]
  float *v65; // [esp+1C8h] [ebp-50h]
  _DWORD *v66; // [esp+1E8h] [ebp-30h]
  int v67; // [esp+1FCh] [ebp-1Ch]
  float v68; // [esp+200h] [ebp-18h]
  float v69; // [esp+204h] [ebp-14h]
  float v70; // [esp+208h] [ebp-10h]
  float v71; // [esp+20Ch] [ebp-Ch]
  float v72; // [esp+210h] [ebp-8h]
  float v73; // [esp+214h] [ebp-4h]
  bool v74; // [esp+227h] [ebp+Fh]

  (*(void (__thiscall **)(int, _DWORD, _DWORD, int, int, int))(*(_DWORD *)a1 + 20))(
    a1,
    LODWORD(a5),
    HIDWORD(a5),
    a3,
    a4,
    a2);
  v68 = *(float *)(a1 + 28) - *(float *)(a1 + 16);
  v69 = *(float *)(a1 + 32) - *(float *)(a1 + 20);
  v70 = *(float *)(a1 + 36) - *(float *)(a1 + 24);
  v6 = (float *)sub_101422C0();
  v7 = *(float *)(a1 + 28) - *v6;
  v8 = *(float *)(a1 + 32) - v6[1];
  v9 = *(float *)(a1 + 36) - v6[2];
  v71 = v9 * v69 - v8 * v70;
  v72 = v70 * v7 - v9 * v68;
  v73 = v8 * v68 - v7 * v69;
  off_103EDFEC();
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v67 = v10;
  if ( v10 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10);
  v11 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v10 + 224))(
          v10,
          1,
          0,
          0,
          *(_DWORD *)(a1 + 12));
  sub_10016C20((int)v46);
  v48 = v11;
  v50 = 1;
  v49 = 7;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 40))(v11, 2);
  (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v48 + 68))(v48, 4, 6, v46);
  v56 = v46[39];
  v53 = v11 + 4;
  v52 = v47;
  v55 = 0;
  v54 = 6;
  v58 = 0;
  v51[0] = v46[41];
  v57 = 0;
  sub_10016990((int)v59, v11, 4, v46);
  v57 = 0;
  sub_10016A00(v59);
  v12 = -*(float *)(a1 + 48);
  v13 = v63;
  v14 = (*(_DWORD *)(a1 + 40) & 2) != 0;
  v74 = v14;
  v15 = *(_BYTE *)(a1 + 40) & 1;
  v16 = v72 * v12 + *(float *)(a1 + 20);
  v17 = v12 * v73 + *(float *)(a1 + 24);
  *v63 = v71 * v12 + *(float *)(a1 + 16);
  v13[1] = v16;
  v13[2] = v17;
  v18 = v64;
  *v64 = v71;
  v18[1] = v72;
  v18[2] = v73;
  v19 = 1.0;
  v20 = v65;
  if ( v15 )
  {
    *v65 = 0.0;
  }
  else
  {
    if ( v14 )
      v19 = 0.0;
    *v65 = v19;
  }
  v20[1] = v19;
  *v66 = -1;
  sub_10016A80(v59);
  v21 = *(float *)(a1 + 48);
  v22 = v63;
  v23 = v72 * v21 + *(float *)(a1 + 20);
  v24 = v21 * v73 + *(float *)(a1 + 24);
  *v63 = v71 * v21 + *(float *)(a1 + 16);
  v22[1] = v23;
  v22[2] = v24;
  v25 = v64;
  *v64 = v71;
  v25[1] = v72;
  v25[2] = v73;
  v26 = v65;
  if ( v15 )
  {
    v27 = 1.0;
    *v65 = 1.0;
  }
  else if ( v74 )
  {
    *v65 = 1.0;
    v27 = 0.0;
  }
  else
  {
    *v65 = 0.0;
    v27 = 1.0;
  }
  v26[1] = v27;
  *v66 = -1;
  sub_10016A80(v59);
  v28 = *(float *)(a1 + 48);
  v29 = v63;
  v30 = v72 * v28 + *(float *)(a1 + 32);
  v31 = v28 * v73 + *(float *)(a1 + 36);
  *v63 = v71 * v28 + *(float *)(a1 + 28);
  v29[1] = v30;
  v29[2] = v31;
  v32 = v64;
  *v64 = v71;
  v32[1] = v72;
  v32[2] = v73;
  v33 = v65;
  if ( v15 )
  {
    *v65 = 1.0;
    v34 = 0.0;
  }
  else
  {
    if ( v74 )
      v34 = 1.0;
    else
      v34 = 0.0;
    *v65 = v34;
  }
  v33[1] = v34;
  *v66 = -1;
  sub_10016A80(v59);
  v35 = -*(float *)(a1 + 48);
  v36 = v63;
  v37 = v72 * v35 + *(float *)(a1 + 32);
  v38 = v35 * v73 + *(float *)(a1 + 36);
  *v63 = v71 * v35 + *(float *)(a1 + 28);
  v36[1] = v37;
  v36[2] = v38;
  v39 = v64;
  *v64 = v71;
  v39[1] = v72;
  v39[2] = v73;
  v40 = v65;
  if ( v15 )
  {
    v41 = 0.0;
    *v65 = 0.0;
  }
  else if ( v74 )
  {
    *v65 = 0.0;
    v41 = 1.0;
  }
  else
  {
    *v65 = 1.0;
    v41 = 0.0;
  }
  v40[1] = v41;
  *v66 = -1;
  sub_10016A80(v59);
  if ( v50 )
  {
    switch ( v49 )
    {
      case 4:
        v42 = 2 * v62 - 2;
        break;
      case 5:
        v42 = 2 * v62;
        break;
      case 6:
        v42 = 3 * v62 - 6;
        break;
      case 7:
        v42 = 6 * v62 / 4;
        break;
      case 8:
        v42 = 0;
        break;
      default:
        v42 = v62;
        break;
    }
    sub_10016B00(v51, v49, v42);
  }
  (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v48 + 80))(v48, v62, v55, v46);
  v53 = 0;
  v54 = 0;
  v61 = 0;
  v60 = 0;
  v59[19] = -1;
  v48 = 0;
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v11 + 48))(v11, -1, 0);
  if ( v60 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v60 + 8))(v60) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v60 + 16))(v60);
  if ( v53 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v53 + 8))(v53) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v53 + 16))(v53);
  v43 = v67;
  (*(void (__thiscall **)(int))(*(_DWORD *)v67 + 12))(v67);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v43 + 4))(v43);
}
