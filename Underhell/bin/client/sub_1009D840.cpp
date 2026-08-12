// bad sp value at call has been detected, the output may be wrong!
void __userpurge sub_1009D840(float a1@<ecx>, int a2@<ebp>, float *a3, float *a4, float *a5, float *a6)
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
  float v32; // esi
  double v33; // st7
  double v34; // st7
  int v35; // eax
  int v36; // edi
  double v37; // st7
  float *v38; // ecx
  double v39; // st7
  double v40; // st6
  double v41; // st5
  double v42; // st7
  double v43; // st4
  bool v44; // c0
  bool v45; // c3
  double v46; // st7
  long double v47; // st5
  long double v48; // st5
  double v49; // rt2
  double v50; // st6
  double v51; // st7
  double v52; // st6
  int v53; // edx
  int v54; // eax
  int v55; // eax
  void (__thiscall *v56)(void *, int); // edx
  int v57; // eax
  int v58; // edi
  float v59[22]; // [esp+8Ch] [ebp-1FCh] BYREF
  _BYTE v60[12]; // [esp+E4h] [ebp-1A4h] BYREF
  _BYTE v61[76]; // [esp+F0h] [ebp-198h] BYREF
  _BYTE v62[12]; // [esp+13Ch] [ebp-14Ch] BYREF
  float v63[10]; // [esp+148h] [ebp-140h] BYREF
  char v64; // [esp+172h] [ebp-116h]
  char v65; // [esp+173h] [ebp-115h]
  float v66[3]; // [esp+194h] [ebp-F4h] BYREF
  float v67[6]; // [esp+1A0h] [ebp-E8h] BYREF
  float v68; // [esp+1B8h] [ebp-D0h]
  float v69; // [esp+1BCh] [ebp-CCh]
  float v70; // [esp+1C0h] [ebp-C8h]
  float v71; // [esp+1C4h] [ebp-C4h]
  float v72; // [esp+1C8h] [ebp-C0h]
  float v73; // [esp+1CCh] [ebp-BCh]
  float v74; // [esp+1D0h] [ebp-B8h]
  float v75; // [esp+1D4h] [ebp-B4h]
  float v76; // [esp+1D8h] [ebp-B0h]
  int v77; // [esp+1DCh] [ebp-ACh]
  int v78; // [esp+1E0h] [ebp-A8h]
  __int16 v79; // [esp+1E4h] [ebp-A4h]
  float v80; // [esp+1E8h] [ebp-A0h]
  float v81; // [esp+1ECh] [ebp-9Ch]
  float v82; // [esp+1F0h] [ebp-98h]
  float v83; // [esp+1F4h] [ebp-94h]
  float v84; // [esp+1F8h] [ebp-90h]
  float v85; // [esp+1FCh] [ebp-8Ch]
  int v86; // [esp+200h] [ebp-88h]
  char v87; // [esp+204h] [ebp-84h]
  int v88; // [esp+208h] [ebp-80h]
  int v89; // [esp+20Ch] [ebp-7Ch]
  int v90; // [esp+210h] [ebp-78h]
  int v91; // [esp+214h] [ebp-74h]
  float v92; // [esp+21Ch] [ebp-6Ch]
  float v93; // [esp+220h] [ebp-68h] BYREF
  float v94; // [esp+224h] [ebp-64h]
  float v95; // [esp+228h] [ebp-60h]
  void **v96; // [esp+22Ch] [ebp-5Ch] BYREF
  float v97; // [esp+230h] [ebp-58h] BYREF
  float v98; // [esp+234h] [ebp-54h]
  float v99; // [esp+238h] [ebp-50h]
  float v100; // [esp+23Ch] [ebp-4Ch] BYREF
  float v101; // [esp+240h] [ebp-48h]
  float v102; // [esp+244h] [ebp-44h]
  float v103; // [esp+248h] [ebp-40h] BYREF
  float v104; // [esp+24Ch] [ebp-3Ch]
  float v105; // [esp+250h] [ebp-38h]
  float v106; // [esp+254h] [ebp-34h] BYREF
  float v107; // [esp+258h] [ebp-30h]
  float v108; // [esp+25Ch] [ebp-2Ch]
  float v109; // [esp+260h] [ebp-28h]
  float v110; // [esp+264h] [ebp-24h] BYREF
  float v111; // [esp+268h] [ebp-20h]
  float v112; // [esp+26Ch] [ebp-1Ch]
  float v113; // [esp+270h] [ebp-18h] BYREF
  float v114; // [esp+274h] [ebp-14h]
  float v115; // [esp+278h] [ebp-10h]
  int v116; // [esp+27Ch] [ebp-Ch]
  void *v117; // [esp+280h] [ebp-8h]
  void *retaddr; // [esp+288h] [ebp+0h]

  v116 = a2;
  v117 = retaddr;
  v109 = a1;
  CVProfile::EnterScope(g_VProfCurrentProfile, "CFlashlightEffect::UpdateLightNew", 0, "Flashlight Shadows", 0, 4);
  v80 = 1024.0;
  v81 = 2.0;
  v79 = 0;
  v87 = 0;
  v82 = 16.0;
  v88 = -1;
  v89 = -1;
  v83 = 0.00050000002;
  v90 = -1;
  v91 = -1;
  v84 = 0.0;
  v86 = 0;
  v85 = 0.0;
  v6 = *(_BYTE *)(sub_100422D0() + 316) == 9;
  v96 = &CTraceFilterSkipPlayerAndViewModel::`vftable';
  v7 = *(float *)(dword_1042D9B4 + 44);
  if ( *(_DWORD *)(dword_1042D894 + 48) )
  {
    v8 = a4[2] * -12.0 + a3[2];
    if ( v8 > a3[2] )
      v7 = v7 + v8 - a3[2];
  }
  v9 = *a6 * v7;
  v10 = a6[1] * v7;
  v11 = v7 * a6[2];
  v113 = v9 + *a3;
  v114 = v10 + a3[1];
  v115 = v11 + a3[2];
  if ( v6 )
    goto LABEL_10;
  v100 = 4.0;
  v101 = 4.0;
  v102 = 4.0;
  v97 = -4.0;
  v98 = -4.0;
  v99 = -4.0;
  sub_1000E4B0(v59, a3, &v113, &v97, &v100);
  (*(void (__thiscall **)(int, float *, int, void ***, _BYTE *))(*(_DWORD *)dword_104131A0 + 16))(
    dword_104131A0,
    v59,
    33570827,
    &v96,
    v62);
  if ( *(_DWORD *)(dword_10439134 + 48) )
    sub_10130AC0((int)v62, (int)v63, 255, 255, 0, 1, -1.0);
  if ( v63[8] < 1.0 || v64 || v65 )
  {
LABEL_10:
    v113 = *a3;
    v114 = a3[1];
    v115 = a3[2];
  }
  v12 = *(float *)(dword_1042DA8C + 44);
  v13 = *a4 * v12;
  v14 = a4[1] * v12;
  v15 = v12 * a4[2];
  v16 = *a3;
  v17 = a5[1];
  v18 = a5[2];
  v110 = *a5;
  v19 = v14;
  v20 = v13 + v16;
  v21 = *a6;
  v111 = v17;
  v93 = v20;
  v22 = a6[1];
  v23 = v20;
  v112 = v18;
  v24 = v19 + a3[1];
  v25 = a6[2];
  v106 = v21;
  v94 = v24;
  v107 = v22;
  v26 = v24;
  v108 = v25;
  v27 = v15 + a3[2];
  v95 = v27;
  v103 = v23 - v113;
  v104 = v26 - v114;
  v105 = v27 - v115;
  off_103EDFEC();
  off_103EDFEC();
  off_103EDFEC();
  v28 = v108 * v105 + v107 * v104 + v103 * v106;
  v106 = v106 - v103 * v28;
  v107 = v107 - v104 * v28;
  v108 = v108 - v105 * v28;
  off_103EDFEC();
  v29 = v112 * v105 + v111 * v104 + v103 * v110;
  v110 = v110 - v103 * v29;
  v111 = v111 - v104 * v29;
  v112 = v112 - v105 * v29;
  off_103EDFEC();
  v30 = v112 * v108 + v111 * v107 + v110 * v106;
  v110 = v110 - v106 * v30;
  v111 = v111 - v107 * v30;
  off_103EDFEC();
  v97 = 4.0;
  v98 = 4.0;
  v99 = 4.0;
  v100 = -4.0;
  v101 = -4.0;
  v102 = -4.0;
  sub_1000E4B0(v59, &v113, &v93, &v100, &v97);
  (*(void (__thiscall **)(int, float *, int, void ***, _BYTE *))(*(_DWORD *)dword_104131A0 + 16))(
    dword_104131A0,
    v59,
    33570947,
    &v96,
    v60);
  if ( *(_DWORD *)(dword_10439134 + 48) )
    sub_10130AC0((int)v60, (int)v61, 255, 255, 0, 1, -1.0);
  if ( *(_DWORD *)(dword_1042DBAC + 48) )
  {
    v93 = 0.0;
    v115 = *(float *)&dword_1041316C;
    v94 = 0.0;
    v95 = 0.0;
    v97 = 4.0;
    v98 = 4.0;
    v99 = 4.0;
    v100 = -4.0;
    v101 = -4.0;
    v102 = -4.0;
    (*(void (__thiscall **)(int, _BYTE *, float *, float *, float *, _DWORD, _DWORD, int, int, _DWORD))(*(_DWORD *)dword_1041316C + 4))(
      dword_1041316C,
      v61,
      &v100,
      &v97,
      &v93,
      0,
      0,
      255,
      16,
      0.0);
    v31 = *(void (__stdcall **)(float *, _BYTE *, int, _DWORD))(*(_DWORD *)dword_1041316C + 12);
    v115 = 0.0;
    v114 = 0.0;
    v113 = 0.0;
    v31(&v113, v61, 255, 0);
  }
  v32 = v109;
  v92 = *(float *)(dword_1042D924 + 44);
  v33 = *(float *)(LODWORD(v109) + 20);
  v115 = COERCE_FLOAT(v67);
  v114 = COERCE_FLOAT(&v106);
  v113 = COERCE_FLOAT(&v110);
  v34 = -v33 * 0.2 + *(float *)(LODWORD(v109) + 20);
  v112 = COERCE_FLOAT(&v103);
  *(float *)(LODWORD(v109) + 20) = v34;
  v113 = v113 - v103 * v34;
  v66[0] = v113;
  v114 = v114 - v104 * v34;
  v66[1] = v114;
  v115 = v115 - v34 * v105;
  v66[2] = v115;
  sub_101F0FA0(LODWORD(v112), LODWORD(v113), LODWORD(v114), LODWORD(v115));
  v70 = *(float *)(dword_1042DB64 + 44);
  v35 = sub_100422D0();
  v36 = v35;
  if ( v35 )
  {
    v37 = *(float *)(v35 + 5212);
    v109 = *(float *)(v35 + 5212);
    if ( v37 <= 25.0 || *(_DWORD *)(dword_1042DD5C + 48) )
    {
      v38 = (float *)off_103DC81C;
      if ( (double)dword_1042D828 < *((float *)off_103DC81C + 3) )
      {
        sub_10229140(&unk_1042DD58, 0);
        v37 = v109;
        v38 = (float *)off_103DC81C;
      }
      if ( v37 > 10.0 )
      {
        v40 = 1.0;
        v41 = v37;
        v39 = 1.0;
      }
      else
      {
        v111 = v37;
        v39 = sub_10049180(v111, 10.0, 0.0, 1.0, 0.0);
        v40 = 1.0;
        v38 = (float *)off_103DC81C;
        v41 = v109;
      }
      if ( v41 >= 5.0 )
      {
        v43 = v39;
        v42 = 5.0;
        if ( v43 <= v40 )
        {
          if ( v43 < 0.0 )
            v43 = 0.0;
        }
        else
        {
          v43 = v40;
        }
      }
      else
      {
        v42 = 5.0;
        v43 = 0.12;
      }
      if ( *(_DWORD *)(dword_1042DDA4 + 48) )
      {
        v44 = v41 < v42;
        v45 = v41 == v42;
        v46 = v43;
        if ( (v44 || v45) && *(int *)(v36 + 5292) <= 0 )
          goto LABEL_35;
      }
      else
      {
        v46 = v43;
      }
      if ( !*(_DWORD *)(dword_1042DD5C + 48) )
      {
        v48 = cos(v38[3] * 7.0) * sin(v38[3] * 25.0) * 1.5 + *(float *)(dword_1042DB1C + 44) * v46;
LABEL_40:
        v71 = v48;
        v49 = v40;
        v50 = v40 - v46;
        v51 = v49;
        v52 = v50 * 16.0;
        v68 = *(float *)(dword_1042D924 + 44) - v52;
        v69 = *(float *)(dword_1042D924 + 44) - v52;
        goto LABEL_42;
      }
LABEL_35:
      v47 = cos(v38[3] * 6.0) * sin(v38[3] * 15.0);
      if ( v47 <= 0.25 || v47 >= 0.5 )
        v48 = 0.0;
      else
        v48 = *(float *)(dword_1042DB1C + 44) * v46;
      goto LABEL_40;
    }
  }
  v71 = *(float *)(dword_1042DB1C + 44);
  v68 = v92;
  v69 = v92;
  v51 = 1.0;
LABEL_42:
  v72 = *(float *)(dword_1042DAD4 + 44);
  v73 = v51;
  v74 = v51;
  v75 = v51;
  v76 = *(float *)(dword_1042DBF4 + 44);
  v67[4] = *(float *)(dword_1042DA44 + 44) + *(float *)(LODWORD(v32) + 20);
  v67[5] = *(float *)(dword_1042DA8C + 44);
  v53 = *(_DWORD *)(LODWORD(v32) + 24);
  LOBYTE(v79) = *(_DWORD *)(dword_1042C2A4 + 48) != 0;
  v80 = (float)*(int *)(dword_1042C334 + 48);
  v77 = v53;
  v78 = 0;
  v54 = *(unsigned __int16 *)(LODWORD(v32) + 12);
  v85 = *(float *)(dword_1042DC3C + 44);
  v82 = *(float *)(dword_1042DCCC + 44);
  v83 = *(float *)(dword_1042DD14 + 44);
  if ( (_WORD)v54 == 0xFFFF )
  {
    *(_WORD *)(LODWORD(v32) + 12) = (*(int (__thiscall **)(void *, float *))(*(_DWORD *)off_103DD080 + 72))(
                                      off_103DD080,
                                      v66);
  }
  else if ( !*(_DWORD *)(dword_1042D8DC + 48) )
  {
    (*(void (__thiscall **)(void *, int, float *))(*(_DWORD *)off_103DD080 + 76))(off_103DD080, v54, v66);
  }
  v55 = *(unsigned __int16 *)(LODWORD(v32) + 12);
  v56 = *(void (__thiscall **)(void *, int))(*(_DWORD *)off_103DD080 + 84);
  LODWORD(v115) = 1;
  v56(off_103DD080, v55);
  v57 = *(_DWORD *)(LODWORD(v32) + 16);
  if ( v57 && *(_DWORD *)(v57 + 36) == *(_DWORD *)(LODWORD(v32) + 8) )
  {
    *(float *)(v57 + 24) = *((float *)off_103DC81C + 3);
    *(_DWORD *)(LODWORD(v32) + 16) = 0;
  }
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578) )
  {
    if ( sub_10229D00(32) )
      v58 = sub_10229D20("FlashlightState");
    else
      v58 = 0;
    sub_1022ACC0("time", *((float *)off_103DC81C + 3));
    sub_1022ACA0("entindex", *(_DWORD *)(LODWORD(v32) + 8));
    sub_1022ACA0("flashlightHandle", *(unsigned __int16 *)(LODWORD(v32) + 12));
    sub_1022ACE0("flashlightState", (int)v66);
    sub_101BC9C0(0, v58);
    sub_1022AF00(v58);
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
