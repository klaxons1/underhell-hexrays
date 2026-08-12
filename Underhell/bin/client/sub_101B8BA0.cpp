void __usercall sub_101B8BA0(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int v4; // eax
  int v5; // eax
  double v6; // st7
  double v7; // st7
  double v8; // st6
  double v9; // st7
  bool v10; // zf
  double v11; // st7
  int i; // edi
  double v13; // st7
  int v14; // ebx
  double v15; // st7
  double v16; // st6
  int v17; // eax
  int v18; // edi
  int v19; // eax
  double v20; // st7
  int v21; // ebx
  double v22; // st7
  float *v23; // edi
  double v24; // st6
  double v25; // st7
  double v26; // st7
  float *v27; // eax
  float *v28; // eax
  int v29; // eax
  int v30; // ecx
  int v31; // esi
  _DWORD v32[44]; // [esp+4h] [ebp-310h] BYREF
  char v33; // [esp+B4h] [ebp-260h]
  int v34; // [esp+B8h] [ebp-25Ch]
  int v35; // [esp+BCh] [ebp-258h]
  char v36; // [esp+C0h] [ebp-254h]
  int v37[3]; // [esp+C4h] [ebp-250h] BYREF
  char v38; // [esp+D0h] [ebp-244h]
  int v39; // [esp+D4h] [ebp-240h]
  int v40; // [esp+D8h] [ebp-23Ch]
  int v41; // [esp+DCh] [ebp-238h]
  int v42; // [esp+E0h] [ebp-234h]
  int v43; // [esp+E4h] [ebp-230h]
  char v44; // [esp+F4h] [ebp-220h]
  _DWORD v45[41]; // [esp+F8h] [ebp-21Ch] BYREF
  int v46; // [esp+19Ch] [ebp-178h]
  int v47; // [esp+1A4h] [ebp-170h]
  int v48; // [esp+1A8h] [ebp-16Ch]
  float *v49; // [esp+1B0h] [ebp-164h]
  float *v50; // [esp+1B8h] [ebp-15Ch]
  int *v51; // [esp+1D8h] [ebp-13Ch]
  float v52; // [esp+1ECh] [ebp-128h]
  float v53; // [esp+1F0h] [ebp-124h]
  float v54; // [esp+1F4h] [ebp-120h]
  float v55; // [esp+1F8h] [ebp-11Ch] BYREF
  float v56; // [esp+1FCh] [ebp-118h]
  float v57; // [esp+200h] [ebp-114h]
  float v58; // [esp+204h] [ebp-110h]
  float v59; // [esp+208h] [ebp-10Ch]
  float v60; // [esp+20Ch] [ebp-108h]
  float v61; // [esp+210h] [ebp-104h]
  float v62; // [esp+214h] [ebp-100h]
  float v63; // [esp+218h] [ebp-FCh]
  float v64; // [esp+21Ch] [ebp-F8h]
  float v65; // [esp+220h] [ebp-F4h]
  float v66; // [esp+224h] [ebp-F0h]
  float v67; // [esp+228h] [ebp-ECh]
  float v68; // [esp+22Ch] [ebp-E8h]
  float v69; // [esp+230h] [ebp-E4h]
  float v70; // [esp+234h] [ebp-E0h]
  float v71; // [esp+238h] [ebp-DCh]
  float v72; // [esp+23Ch] [ebp-D8h]
  float v73; // [esp+240h] [ebp-D4h]
  float v74; // [esp+244h] [ebp-D0h]
  float v75; // [esp+248h] [ebp-CCh]
  float v76; // [esp+24Ch] [ebp-C8h]
  float v77; // [esp+250h] [ebp-C4h]
  float v78; // [esp+254h] [ebp-C0h]
  float v79; // [esp+258h] [ebp-BCh]
  float v80; // [esp+25Ch] [ebp-B8h]
  float v81; // [esp+260h] [ebp-B4h]
  float v82; // [esp+264h] [ebp-B0h]
  float v83; // [esp+268h] [ebp-ACh]
  float v84; // [esp+26Ch] [ebp-A8h]
  float v85; // [esp+270h] [ebp-A4h]
  float v86; // [esp+274h] [ebp-A0h]
  float v87; // [esp+278h] [ebp-9Ch]
  float v88; // [esp+27Ch] [ebp-98h]
  float v89; // [esp+280h] [ebp-94h]
  float v90; // [esp+284h] [ebp-90h]
  float v91; // [esp+288h] [ebp-8Ch]
  float v92; // [esp+28Ch] [ebp-88h]
  float v93; // [esp+290h] [ebp-84h]
  float v94; // [esp+294h] [ebp-80h]
  float v95; // [esp+298h] [ebp-7Ch]
  float v96; // [esp+29Ch] [ebp-78h]
  float v97; // [esp+2A0h] [ebp-74h]
  float v98; // [esp+2A4h] [ebp-70h]
  float v99; // [esp+2A8h] [ebp-6Ch]
  float v100; // [esp+2ACh] [ebp-68h]
  float v101; // [esp+2B0h] [ebp-64h]
  float v102; // [esp+2B4h] [ebp-60h]
  float v103; // [esp+2B8h] [ebp-5Ch]
  float v104; // [esp+2BCh] [ebp-58h]
  float v105; // [esp+2C0h] [ebp-54h]
  float v106; // [esp+2C4h] [ebp-50h]
  float v107; // [esp+2C8h] [ebp-4Ch]
  float v108; // [esp+2CCh] [ebp-48h]
  float v109; // [esp+2D0h] [ebp-44h]
  float v110; // [esp+2D4h] [ebp-40h]
  float v111; // [esp+2D8h] [ebp-3Ch]
  float v112; // [esp+2DCh] [ebp-38h]
  float v113; // [esp+2E0h] [ebp-34h]
  float v114; // [esp+2E4h] [ebp-30h]
  float v115; // [esp+2E8h] [ebp-2Ch]
  int v116; // [esp+2ECh] [ebp-28h]
  float v117; // [esp+2F0h] [ebp-24h]
  int v118; // [esp+2F4h] [ebp-20h] BYREF
  int v119; // [esp+2F8h] [ebp-1Ch] BYREF
  int v120; // [esp+2FCh] [ebp-18h] BYREF
  int v121; // [esp+300h] [ebp-14h]
  int v122; // [esp+304h] [ebp-10h]
  int v123; // [esp+308h] [ebp-Ch]
  int v124; // [esp+30Ch] [ebp-8h]
  float v125; // [esp+310h] [ebp-4h]

  *(_BYTE *)(a1 + 256) = 0;
  v4 = sub_100422D0();
  v5 = __RTDynamicCast(
         v4,
         0,
         (struct _s_RTTICompleteObjectLocator *)&C_BasePlayer `RTTI Type Descriptor',
         (int)&C_BaseHLPlayer `RTTI Type Descriptor',
         0);
  if ( !v5 )
    return;
  if ( *(_BYTE *)(v5 + 5172) )
  {
    if ( *(_BYTE *)(a1 + 251) )
      goto LABEL_9;
    *(_BYTE *)(a1 + 251) = 1;
    v6 = *((float *)off_103DC81C + 3);
    goto LABEL_8;
  }
  if ( *(_BYTE *)(a1 + 251) )
  {
    *(_BYTE *)(a1 + 251) = 0;
    v6 = *((float *)off_103DC81C + 3);
LABEL_8:
    *(float *)(a1 + 252) = v6;
  }
LABEL_9:
  v7 = (*((float *)off_103DC81C + 3) - *(float *)(a1 + 252)) * 2.5;
  v8 = 1.0;
  if ( v7 <= 1.0 )
  {
    if ( v7 < 0.0 )
      v7 = 0.0;
    v8 = v7;
    v9 = 1.0;
  }
  else
  {
    v9 = 1.0;
  }
  v10 = *(_BYTE *)(a1 + 251) == 0;
  v125 = v8;
  if ( v10 )
  {
    if ( v8 >= v9 )
      return;
    *(float *)&v121 = (v9 - v8) * 0.25;
    v125 = v9 - v8 * 0.5;
  }
  else
  {
    *(float *)&v121 = v8;
  }
  (*(void (__thiscall **)(int, int *, int, int))(*(_DWORD *)a1 + 228))(a1, &v118, a3, a2);
  v124 = (int)(*(float *)&v121 * 64.0);
  HIBYTE(v118) = v124;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, v118);
  sub_102361D0(&v120, &v119);
  (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 384))(
    dword_1047CA6C,
    v120 / 2,
    v119 / 2,
    (int)(*(float *)(a1 + 260) * v125),
    48);
  (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 384))(
    dword_1047CA6C,
    v120 / 2,
    v119 / 2,
    (int)(*(float *)(a1 + 268) * v125),
    64);
  v11 = *(float *)(a1 + 276) + *(float *)(a1 + 276);
  v123 = (int)(((double)v119 - *(float *)(a1 + 284)) * 0.5);
  v124 = 2;
  v122 = v120 / 2;
  for ( i = (int)(v11 * v125 + (double)(v120 / 2)); i < v120; i = (int)(v15 * v16 + (double)(v120 / 2)) )
  {
    if ( i <= 0 )
      break;
    v13 = (double)v123;
    v14 = *(_DWORD *)dword_1047CA6C;
    *(float *)&v122 = v13;
    (*(void (__thiscall **)(int, int, int, int, int))(v14 + 48))(
      dword_1047CA6C,
      i,
      v123,
      i + 1,
      (int)(v13 + *(float *)(a1 + 284)));
    (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
      dword_1047CA6C,
      v120 - i,
      v123,
      v120 - i + 1,
      (int)(*(float *)&v122 + *(float *)(a1 + 284)));
    v15 = 0.1;
    if ( v125 > 0.1 )
      v15 = v125;
    v16 = (double)++v124 * *(float *)(a1 + 276);
    v122 = v120 / 2;
  }
  v17 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v18 = v17;
  v116 = v17;
  if ( v17 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 8))(v17);
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v18 + 36))(v18, *(_DWORD *)(a1 + 288), 0);
  v19 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v18 + 224))(v18, 1, 0, 0, 0);
  v20 = (double)v120;
  v21 = v19;
  v52 = 0.0;
  v53 = 0.0;
  v54 = 0.99607843;
  v55 = 0.0039215689;
  v58 = 0.0039215689;
  v59 = 0.0039215689;
  v62 = 0.0039215689;
  v70 = 0.0039215689;
  v71 = 0.0039215689;
  v75 = 0.0039215689;
  v82 = 0.0039215689;
  v86 = 0.0039215689;
  v95 = 0.0039215689;
  v98 = 0.0039215689;
  v99 = 0.0039215689;
  v106 = 0.0039215689;
  v110 = 0.0039215689;
  v111 = 0.0039215689;
  v115 = 0.0039215689;
  v56 = v20 * 0.5;
  v60 = v56;
  v68 = v56;
  v80 = v56;
  v84 = v56;
  v96 = v56;
  v104 = v56;
  v108 = v56;
  v57 = 0.0;
  v64 = 0.0;
  v69 = 0.0;
  v73 = 0.0;
  v100 = 0.0;
  v112 = 0.0;
  v61 = 0.5 * (double)v119;
  v65 = v61;
  v77 = v61;
  v81 = v61;
  v85 = v61;
  v89 = v61;
  v101 = v61;
  v105 = v61;
  v63 = 0.99607843;
  v66 = 0.99607843;
  v67 = 0.99607843;
  v74 = 0.99607843;
  v78 = 0.99607843;
  v79 = 0.99607843;
  v83 = 0.99607843;
  v87 = 0.99607843;
  v90 = 0.99607843;
  v91 = 0.99607843;
  v94 = 0.99607843;
  v102 = 0.99607843;
  v103 = 0.99607843;
  v107 = 0.99607843;
  v114 = 0.99607843;
  v72 = v20;
  v76 = v72;
  v88 = v72;
  v92 = v72;
  v93 = (float)v119;
  v97 = v93;
  v109 = v93;
  v113 = v93;
  sub_10016C20((int)v32);
  v34 = v21;
  v36 = 1;
  v35 = 7;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v21 + 40))(v21, 2);
  (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v34 + 68))(v34, 16, 24, v32);
  v42 = v32[39];
  v39 = v21 + 4;
  v38 = v33;
  v41 = 0;
  v40 = 24;
  v44 = 0;
  v37[0] = v32[41];
  v43 = 0;
  sub_10016990((int)v45, v21, 16, v32);
  v43 = 0;
  sub_10016A00(v45);
  v22 = *(float *)&v121 * 255.0;
  v23 = &v55;
  v121 = 16;
  v24 = v22 + 8388608.0;
  v25 = 8388608.0;
  *(float *)&v122 = v24;
  while ( 1 )
  {
    v117 = v25;
    *(float *)&v123 = v25;
    v125 = v25;
    v124 = v122;
    v26 = *(v23 - 1);
    *v51 = LOBYTE(v117) | (((unsigned __int8)v123 | ((LOBYTE(v125) | ((unsigned __int8)v124 << 8)) << 8)) << 8);
    v27 = v50;
    *v50 = v26;
    v27[1] = *v23;
    v28 = v49;
    *v49 = *(v23 - 3);
    v28[1] = *(v23 - 2);
    v28[2] = 0.0;
    sub_10016A80(v45);
    v23 += 4;
    --v121;
    if ( *(float *)&v121 == 0.0 )
      break;
    v25 = 8388608.0;
  }
  if ( v36 )
  {
    switch ( v35 )
    {
      case 4:
        v29 = 2 * v48 - 2;
        break;
      case 5:
        v29 = 2 * v48;
        break;
      case 6:
        v29 = 3 * v48 - 6;
        break;
      case 7:
        v29 = 6 * v48 / 4;
        break;
      case 8:
        v29 = 0;
        break;
      default:
        v29 = v48;
        break;
    }
    sub_10016B00(v37, v35, v29);
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v34 + 80))(v34, v48);
  v39 = 0;
  v40 = 0;
  v47 = 0;
  v46 = 0;
  v45[19] = -1;
  v34 = 0;
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v21 + 48))(v21, -1, 0);
  v30 = v46;
  *(_BYTE *)(a1 + 256) = 1;
  if ( v30 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v30 + 8))(v30) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v46 + 16))(v46);
  if ( v39 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v39 + 8))(v39) )
      (*(void (__thiscall **)(int))(*(_DWORD *)v39 + 16))(v39);
  }
  v31 = v116;
  (*(void (__thiscall **)(int))(*(_DWORD *)v116 + 12))(v116);
  (*(void (__thiscall **)(int))(*(_DWORD *)v31 + 4))(v31);
}
