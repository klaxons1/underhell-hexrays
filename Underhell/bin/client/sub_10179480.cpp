// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_10179480@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4@<esi>, double a5)
{
  float *v6; // eax
  double v7; // st7
  double v8; // st6
  double v9; // st5
  int v10; // ebx
  int v11; // ebx
  double v12; // st7
  double v13; // st6
  double v14; // rt2
  double v15; // st6
  double v16; // st7
  double v17; // st6
  double v18; // st5
  double v19; // st6
  float *v20; // eax
  int v21; // edi
  double v22; // rt0
  double v23; // st6
  double v24; // rt2
  float *v25; // eax
  float *v26; // eax
  float *v27; // eax
  double v28; // st7
  double v29; // st6
  float *v30; // eax
  float *v31; // eax
  float *v32; // eax
  double v33; // st7
  double v34; // st6
  float *v35; // eax
  float *v36; // eax
  float *v37; // eax
  double v38; // st7
  double v39; // st6
  float *v40; // eax
  float *v41; // eax
  int v42; // eax
  int v43; // esi
  _DWORD v46[44]; // [esp+14h] [ebp-20Ch] BYREF
  char v47; // [esp+C4h] [ebp-15Ch]
  int v48; // [esp+C8h] [ebp-158h]
  int v49; // [esp+CCh] [ebp-154h]
  char v50; // [esp+D0h] [ebp-150h]
  int v51[3]; // [esp+D4h] [ebp-14Ch] BYREF
  char v52; // [esp+E0h] [ebp-140h]
  int v53; // [esp+E4h] [ebp-13Ch]
  int v54; // [esp+E8h] [ebp-138h]
  int v55; // [esp+ECh] [ebp-134h]
  int v56; // [esp+F0h] [ebp-130h]
  int v57; // [esp+F4h] [ebp-12Ch]
  char v58; // [esp+104h] [ebp-11Ch]
  _DWORD v59[41]; // [esp+108h] [ebp-118h] BYREF
  int v60; // [esp+1ACh] [ebp-74h]
  int v61; // [esp+1B4h] [ebp-6Ch]
  int v62; // [esp+1B8h] [ebp-68h]
  float *v63; // [esp+1C0h] [ebp-60h]
  float *v64; // [esp+1C4h] [ebp-5Ch]
  float *v65; // [esp+1C8h] [ebp-58h]
  int *v66; // [esp+1E8h] [ebp-38h]
  float v67; // [esp+1FCh] [ebp-24h]
  float v68; // [esp+200h] [ebp-20h]
  float v69; // [esp+204h] [ebp-1Ch]
  int v70; // [esp+208h] [ebp-18h]
  float v71; // [esp+20Ch] [ebp-14h]
  int v72; // [esp+210h] [ebp-10h]
  float v73; // [esp+214h] [ebp-Ch]
  float v74; // [esp+218h] [ebp-8h]
  float v75; // [esp+21Ch] [ebp-4h]
  float v76; // [esp+22Ch] [ebp+Ch]

  (*(void (__thiscall **)(int, _DWORD, _DWORD, int, int, int))(*(_DWORD *)a1 + 20))(
    a1,
    LODWORD(a5),
    HIDWORD(a5),
    a3,
    a4,
    a2);
  v67 = *(float *)(a1 + 12) - *(float *)(a1 + 24);
  v68 = *(float *)(a1 + 16) - *(float *)(a1 + 28);
  v69 = *(float *)(a1 + 20) - *(float *)(a1 + 32);
  v6 = sub_101422C0();
  v7 = *(float *)(a1 + 24) - *v6;
  v8 = *(float *)(a1 + 28) - v6[1];
  v9 = *(float *)(a1 + 32) - v6[2];
  v73 = v9 * v68 - v8 * v69;
  v74 = v69 * v7 - v9 * v67;
  v75 = v67 * v8 - v7 * v68;
  off_103EDFEC();
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v70 = v10;
  if ( v10 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10);
  v11 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v10 + 224))(
          v10,
          1,
          0,
          0,
          *(_DWORD *)(a1 + 84));
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
  v12 = *(float *)(a1 + 80) / *(float *)(a1 + 76);
  v13 = (*(float *)(a1 + 72) - *(float *)(a1 + 68)) * v12 + *(float *)(a1 + 68);
  v71 = v13;
  v14 = v13;
  v15 = v12 * (*(float *)(a1 + 64) - *(float *)(a1 + 60));
  v16 = v14;
  v17 = v15 + *(float *)(a1 + 60);
  v18 = 1.0;
  if ( v17 <= 1.0 )
  {
    if ( v17 < 0.0 )
      v17 = 0.0;
    v18 = v17;
    v19 = 1.0;
  }
  else
  {
    v19 = 1.0;
  }
  v20 = v63;
  v72 = (int)(v18 * 255.0);
  v21 = ((unsigned __int8)v72 << 24) | 0xFFFFFF;
  v22 = v19;
  v76 = -v16;
  v23 = -v16 * v74 + *(float *)(a1 + 16);
  v24 = -v16 * v75 + *(float *)(a1 + 20);
  *v63 = v73 * -v16 + *(float *)(a1 + 12);
  v20[1] = v23;
  v20[2] = v24;
  v25 = v65;
  *v65 = v22;
  v25[1] = v22;
  *v66 = v21;
  v26 = v64;
  *v64 = v73;
  v26[1] = v74;
  v26[2] = v75;
  sub_10016A80(v59);
  v27 = v63;
  v28 = v74 * v71 + *(float *)(a1 + 16);
  v29 = v71 * v75 + *(float *)(a1 + 20);
  *v63 = v73 * v71 + *(float *)(a1 + 12);
  v27[1] = v28;
  v27[2] = v29;
  v30 = v65;
  *v65 = 0.0;
  v30[1] = 1.0;
  *v66 = v21;
  v31 = v64;
  *v64 = v73;
  v31[1] = v74;
  v31[2] = v75;
  sub_10016A80(v59);
  v32 = v63;
  v33 = v74 * v71 + *(float *)(a1 + 28);
  v34 = v71 * v75 + *(float *)(a1 + 32);
  *v63 = v73 * v71 + *(float *)(a1 + 24);
  v32[1] = v33;
  v32[2] = v34;
  v35 = v65;
  *v65 = 0.0;
  v35[1] = 0.0;
  *v66 = v21;
  v36 = v64;
  *v64 = v73;
  v36[1] = v74;
  v36[2] = v75;
  sub_10016A80(v59);
  v37 = v63;
  v38 = v76 * v74 + *(float *)(a1 + 28);
  v39 = v76 * v75 + *(float *)(a1 + 32);
  *v63 = v73 * v76 + *(float *)(a1 + 24);
  v37[1] = v38;
  v37[2] = v39;
  v40 = v65;
  *v65 = 1.0;
  v40[1] = 0.0;
  *v66 = v21;
  v41 = v64;
  *v64 = v73;
  v41[1] = v74;
  v41[2] = v75;
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
  v43 = v70;
  (*(void (__thiscall **)(int))(*(_DWORD *)v70 + 12))(v70);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v43 + 4))(v43);
}
