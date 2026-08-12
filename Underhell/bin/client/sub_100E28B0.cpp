// bad sp value at call has been detected, the output may be wrong!
void __userpurge sub_100E28B0(int a1@<ecx>, int a2@<ebp>, float *a3, float *a4, float *a5, float *a6)
{
  bool v6; // zf
  double v7; // st7
  double v8; // st6
  double v9; // st6
  double v10; // st5
  double v11; // st7
  double v12; // st7
  double v13; // st6
  double v14; // st5
  double v15; // st7
  double v16; // st4
  float v17; // edx
  float v18; // eax
  double v19; // rt2
  double v20; // st5
  float v21; // ecx
  float v22; // edx
  double v23; // rtt
  double v24; // st5
  float v25; // eax
  double v26; // rt0
  double v27; // st5
  double v28; // st1
  double v29; // st1
  double v30; // st0
  void (__stdcall *v31)(float *, _BYTE *, int, _DWORD); // eax
  int v32; // esi
  double v33; // st7
  double v34; // st7
  float v35; // eax
  int v36; // eax
  int v37; // eax
  void (__thiscall *v38)(void *, int); // edx
  int v39; // eax
  int v40; // edi
  float v41[22]; // [esp+88h] [ebp-1FCh] BYREF
  _BYTE v42[12]; // [esp+E0h] [ebp-1A4h] BYREF
  _BYTE v43[76]; // [esp+ECh] [ebp-198h] BYREF
  _BYTE v44[12]; // [esp+138h] [ebp-14Ch] BYREF
  float v45[10]; // [esp+144h] [ebp-140h] BYREF
  char v46; // [esp+16Eh] [ebp-116h]
  char v47; // [esp+16Fh] [ebp-115h]
  float v48[3]; // [esp+190h] [ebp-F4h] BYREF
  float v49[17]; // [esp+19Ch] [ebp-E8h] BYREF
  __int16 v50; // [esp+1E0h] [ebp-A4h]
  float v51; // [esp+1E4h] [ebp-A0h]
  float v52; // [esp+1E8h] [ebp-9Ch]
  float v53; // [esp+1ECh] [ebp-98h]
  float v54; // [esp+1F0h] [ebp-94h]
  float v55; // [esp+1F4h] [ebp-90h]
  float v56; // [esp+1F8h] [ebp-8Ch]
  int v57; // [esp+1FCh] [ebp-88h]
  char v58; // [esp+200h] [ebp-84h]
  int v59; // [esp+204h] [ebp-80h]
  int v60; // [esp+208h] [ebp-7Ch]
  int v61; // [esp+20Ch] [ebp-78h]
  int v62; // [esp+210h] [ebp-74h]
  int v63; // [esp+218h] [ebp-6Ch]
  float v64; // [esp+21Ch] [ebp-68h]
  float v65; // [esp+220h] [ebp-64h] BYREF
  float v66; // [esp+224h] [ebp-60h]
  float v67; // [esp+228h] [ebp-5Ch]
  void **v68; // [esp+22Ch] [ebp-58h] BYREF
  float v69; // [esp+230h] [ebp-54h] BYREF
  float v70; // [esp+234h] [ebp-50h]
  float v71; // [esp+238h] [ebp-4Ch]
  float v72; // [esp+23Ch] [ebp-48h] BYREF
  float v73; // [esp+240h] [ebp-44h]
  float v74; // [esp+244h] [ebp-40h]
  float v75; // [esp+248h] [ebp-3Ch] BYREF
  float v76; // [esp+24Ch] [ebp-38h]
  float v77; // [esp+250h] [ebp-34h]
  float v78; // [esp+254h] [ebp-30h] BYREF
  float v79; // [esp+258h] [ebp-2Ch]
  float v80; // [esp+25Ch] [ebp-28h]
  float v81; // [esp+260h] [ebp-24h] BYREF
  float v82; // [esp+264h] [ebp-20h]
  float v83; // [esp+268h] [ebp-1Ch]
  float v84; // [esp+26Ch] [ebp-18h] BYREF
  float v85; // [esp+270h] [ebp-14h]
  float v86; // [esp+274h] [ebp-10h]
  int v87; // [esp+278h] [ebp-Ch]
  void *v88; // [esp+27Ch] [ebp-8h]
  void *retaddr; // [esp+284h] [ebp+0h]

  v87 = a2;
  v88 = retaddr;
  v63 = a1;
  CVProfile::EnterScope(g_VProfCurrentProfile, "CNightVisionEffect::UpdateLightNew", 0, "Flashlight Shadows", 0, 4);
  v51 = 1024.0;
  v52 = 2.0;
  v50 = 0;
  v58 = 0;
  v53 = 16.0;
  v59 = -1;
  v60 = -1;
  v54 = 0.00050000002;
  v61 = -1;
  v62 = -1;
  v55 = 0.0;
  v57 = 0;
  v56 = 0.0;
  v6 = *(_BYTE *)(sub_100422D0() + 316) == 9;
  v68 = &CTraceFilterSkipPlayerAndViewModel::`vftable';
  v7 = *(float *)(dword_10435274 + 44);
  if ( *(_DWORD *)(dword_10435154 + 48) )
  {
    v8 = a4[2] * -12.0 + a3[2];
    if ( v8 > a3[2] )
      v7 = v7 + v8 - a3[2];
  }
  v9 = *a6 * v7;
  v10 = a6[1] * v7;
  v11 = v7 * a6[2];
  v84 = v9 + *a3;
  v85 = v10 + a3[1];
  v86 = v11 + a3[2];
  if ( v6 )
    goto LABEL_10;
  v69 = 4.0;
  v70 = 4.0;
  v71 = 4.0;
  v72 = -4.0;
  v73 = -4.0;
  v74 = -4.0;
  sub_1000E4B0(v41, a3, &v84, &v72, &v69);
  (*(void (__thiscall **)(int, float *, int, void ***, _BYTE *))(*(_DWORD *)dword_104131A0 + 16))(
    dword_104131A0,
    v41,
    33570827,
    &v68,
    v44);
  if ( *(_DWORD *)(dword_10439134 + 48) )
    sub_10130AC0((int)v44, (int)v45, 255, 255, 0, 1, -1.0);
  if ( v45[8] < 1.0 || v46 || v47 )
  {
LABEL_10:
    v84 = *a3;
    v85 = a3[1];
    v86 = a3[2];
  }
  v12 = *(float *)(dword_1043534C + 44);
  v13 = *a4 * v12;
  v14 = a4[1] * v12;
  v15 = v12 * a4[2];
  v16 = *a3;
  v17 = a5[1];
  v18 = a5[2];
  v81 = *a5;
  v19 = v14;
  v20 = v13 + v16;
  v21 = *a6;
  v82 = v17;
  v65 = v20;
  v22 = a6[1];
  v23 = v20;
  v83 = v18;
  v24 = v19 + a3[1];
  v25 = a6[2];
  v78 = v21;
  v66 = v24;
  v79 = v22;
  v26 = v24;
  v80 = v25;
  v27 = v15 + a3[2];
  v67 = v27;
  v75 = v23 - v84;
  v76 = v26 - v85;
  v77 = v27 - v86;
  off_103EDFEC();
  off_103EDFEC();
  off_103EDFEC();
  v28 = v80 * v77 + v79 * v76 + v75 * v78;
  v78 = v78 - v75 * v28;
  v79 = v79 - v76 * v28;
  v80 = v80 - v77 * v28;
  off_103EDFEC();
  v29 = v83 * v77 + v82 * v76 + v75 * v81;
  v81 = v81 - v75 * v29;
  v82 = v82 - v76 * v29;
  v83 = v83 - v77 * v29;
  off_103EDFEC();
  v30 = v83 * v80 + v82 * v79 + v81 * v78;
  v81 = v81 - v78 * v30;
  v82 = v82 - v79 * v30;
  off_103EDFEC();
  v72 = 4.0;
  v73 = 4.0;
  v74 = 4.0;
  v69 = -4.0;
  v70 = -4.0;
  v71 = -4.0;
  sub_1000E4B0(v41, &v84, &v65, &v69, &v72);
  (*(void (__thiscall **)(int, float *, int, void ***, _BYTE *))(*(_DWORD *)dword_104131A0 + 16))(
    dword_104131A0,
    v41,
    33570947,
    &v68,
    v42);
  if ( *(_DWORD *)(dword_10439134 + 48) )
    sub_10130AC0((int)v42, (int)v43, 255, 255, 0, 1, -1.0);
  if ( *(_DWORD *)(dword_1043546C + 48) )
  {
    v65 = 0.0;
    v86 = *(float *)&dword_1041316C;
    v66 = 0.0;
    v67 = 0.0;
    v72 = 4.0;
    v73 = 4.0;
    v74 = 4.0;
    v69 = -4.0;
    v70 = -4.0;
    v71 = -4.0;
    (*(void (__thiscall **)(int, _BYTE *, float *, float *, float *, _DWORD, _DWORD, int, int, _DWORD))(*(_DWORD *)dword_1041316C + 4))(
      dword_1041316C,
      v43,
      &v69,
      &v72,
      &v65,
      0,
      0,
      255,
      16,
      0.0);
    v31 = *(void (__stdcall **)(float *, _BYTE *, int, _DWORD))(*(_DWORD *)dword_1041316C + 12);
    v86 = 0.0;
    v85 = 0.0;
    v84 = 0.0;
    v31(&v84, v43, 255, 0);
  }
  v32 = v63;
  v64 = *(float *)(dword_104351E4 + 44);
  v33 = *(float *)(v63 + 20);
  v86 = COERCE_FLOAT(v49);
  v85 = COERCE_FLOAT(&v78);
  v84 = COERCE_FLOAT(&v81);
  v34 = -v33 * 0.2 + *(float *)(v63 + 20);
  v83 = COERCE_FLOAT(&v75);
  *(float *)(v63 + 20) = v34;
  v84 = v84 - v75 * v34;
  v48[0] = v84;
  v85 = v85 - v76 * v34;
  v48[1] = v85;
  v86 = v86 - v34 * v77;
  v48[2] = v86;
  sub_101F0FA0(LODWORD(v83), LODWORD(v84), LODWORD(v85), LODWORD(v86));
  v49[8] = *(float *)(dword_10435424 + 44);
  sub_100422D0();
  v49[9] = *(float *)(dword_104353DC + 44);
  v49[6] = v64;
  v49[7] = v64;
  v49[10] = *(float *)(dword_10435394 + 44);
  v49[11] = 1.0;
  v49[12] = 1.0;
  v49[13] = 1.0;
  v49[14] = *(float *)(dword_104354B4 + 44);
  v49[4] = *(float *)(dword_10435304 + 44) + *(float *)(v32 + 20);
  v49[5] = *(float *)(dword_1043534C + 44);
  v35 = *(float *)(v32 + 24);
  LOBYTE(v50) = *(_DWORD *)(dword_1042C2EC + 48) != 0;
  v51 = (float)*(int *)(dword_1042C37C + 48);
  v49[15] = v35;
  v49[16] = 0.0;
  v56 = *(float *)(dword_104354FC + 44);
  v53 = *(float *)(dword_1043558C + 44);
  v36 = *(unsigned __int16 *)(v32 + 12);
  v54 = *(float *)(dword_104355D4 + 44);
  if ( (_WORD)v36 == 0xFFFF )
  {
    *(_WORD *)(v32 + 12) = (*(int (__thiscall **)(void *, float *))(*(_DWORD *)off_103DD080 + 72))(off_103DD080, v48);
  }
  else if ( !*(_DWORD *)(dword_1043519C + 48) )
  {
    (*(void (__thiscall **)(void *, int, float *))(*(_DWORD *)off_103DD080 + 76))(off_103DD080, v36, v48);
  }
  v37 = *(unsigned __int16 *)(v32 + 12);
  v38 = *(void (__thiscall **)(void *, int))(*(_DWORD *)off_103DD080 + 84);
  LODWORD(v86) = 1;
  v38(off_103DD080, v37);
  v39 = *(_DWORD *)(v32 + 16);
  if ( v39 && *(_DWORD *)(v39 + 36) == *(_DWORD *)(v32 + 8) )
  {
    *(float *)(v39 + 24) = *((float *)off_103DC81C + 3);
    *(_DWORD *)(v32 + 16) = 0;
  }
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578) )
  {
    if ( sub_10229D00(32) )
      v40 = sub_10229D20("FlashlightState");
    else
      v40 = 0;
    sub_1022ACC0("time", *((float *)off_103DC81C + 3));
    sub_1022ACA0("entindex", *(_DWORD *)(v32 + 8));
    sub_1022ACA0("nightvisionHandle", *(unsigned __int16 *)(v32 + 12));
    sub_1022ACE0("nightvisionState", (int)v48);
    sub_101BC9C0(0, v40);
    sub_1022AF00(v40);
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
