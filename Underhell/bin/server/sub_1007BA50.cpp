char __thiscall sub_1007BA50(_DWORD *this, float *a2, float *a3, int a4, float a5, char a6, float *a7)
{
  float *v8; // esi
  double v10; // st6
  double v11; // st5
  double v12; // st7
  double v13; // st6
  double v14; // st7
  int v16; // ecx
  double (__thiscall *v17)(int); // edx
  double v18; // st7
  _DWORD *v19; // ecx
  double v20; // st7
  double v21; // st7
  double v22; // st7
  double v23; // st6
  float *v24; // ecx
  double v25; // st5
  double v26; // st4
  double v27; // st6
  double v28; // st5
  float *v29; // esi
  float *v30; // eax
  int v31; // eax
  int v32; // esi
  int v33; // eax
  int *v34; // eax
  int v35; // eax
  bool v36; // al
  int v37; // ecx
  int v38; // eax
  int v39; // eax
  double v40; // st6
  int v41; // edx
  int v42; // eax
  int v43; // ebx
  int v44; // ebx
  double v45; // st7
  int v46; // eax
  bool v47; // zf
  double v48; // st7
  int v49; // eax
  double v50; // st7
  int v51; // eax
  int v52; // ecx
  int v53; // eax
  double v54; // st6
  double v55; // st5
  int v56; // [esp+0h] [ebp-F4h]
  int v57; // [esp+0h] [ebp-F4h]
  int v58; // [esp+0h] [ebp-F4h]
  float v59; // [esp+14h] [ebp-E0h]
  float v60; // [esp+14h] [ebp-E0h]
  float v61; // [esp+14h] [ebp-E0h]
  _BYTE v62[56]; // [esp+24h] [ebp-D0h] BYREF
  float v63; // [esp+5Ch] [ebp-98h]
  float v64; // [esp+60h] [ebp-94h]
  float v65; // [esp+64h] [ebp-90h] BYREF
  float v66; // [esp+68h] [ebp-8Ch]
  float v67; // [esp+6Ch] [ebp-88h]
  float v68; // [esp+70h] [ebp-84h]
  float v69; // [esp+74h] [ebp-80h]
  float v70; // [esp+78h] [ebp-7Ch]
  float v71; // [esp+7Ch] [ebp-78h]
  float v72; // [esp+80h] [ebp-74h]
  float v73; // [esp+84h] [ebp-70h]
  float v74; // [esp+88h] [ebp-6Ch]
  int v75; // [esp+8Ch] [ebp-68h]
  int v76; // [esp+90h] [ebp-64h]
  float v77; // [esp+94h] [ebp-60h]
  float v78; // [esp+98h] [ebp-5Ch]
  float v79; // [esp+9Ch] [ebp-58h]
  float v80; // [esp+A0h] [ebp-54h]
  float v81; // [esp+A4h] [ebp-50h]
  float v82; // [esp+A8h] [ebp-4Ch]
  int v83; // [esp+ACh] [ebp-48h]
  float v84; // [esp+B0h] [ebp-44h]
  float v85; // [esp+B4h] [ebp-40h]
  float v86; // [esp+B8h] [ebp-3Ch]
  int v87; // [esp+BCh] [ebp-38h] BYREF
  float v88; // [esp+C0h] [ebp-34h]
  float v89; // [esp+C4h] [ebp-30h]
  float v90; // [esp+C8h] [ebp-2Ch]
  float v91; // [esp+CCh] [ebp-28h]
  float v92; // [esp+D0h] [ebp-24h]
  char v93; // [esp+D4h] [ebp-20h]
  int v94; // [esp+D8h] [ebp-1Ch]
  int v95; // [esp+DCh] [ebp-18h]
  int v96; // [esp+E0h] [ebp-14h]
  int v97; // [esp+E4h] [ebp-10h]
  int v98; // [esp+E8h] [ebp-Ch]
  int v99; // [esp+ECh] [ebp-8h]
  int v100; // [esp+F0h] [ebp-4h]
  int savedregs; // [esp+F4h] [ebp+0h] BYREF
  int v102; // [esp+FCh] [ebp+8h]
  float v103; // [esp+108h] [ebp+14h]
  char v104; // [esp+10Bh] [ebp+17h]

  memset(v62, 0, sizeof(v62));
  v8 = a7;
  if ( !a7 )
  {
    v8 = (float *)v62;
    a7 = (float *)v62;
  }
  v8[9] = 0.0;
  v8[7] = 0.0;
  v8[4] = flt_106F1CA8;
  v8[5] = flt_106F1CAC;
  v8[6] = flt_106F1CB0;
  *v8 = 0.0;
  v8[1] = *a2;
  v8[2] = a2[1];
  v8[3] = a2[2];
  v8[13] = 0.0;
  v10 = *a3 - *a2;
  v84 = v10;
  v11 = a3[1] - a2[1];
  v85 = v11;
  v86 = 0.0;
  v59 = v11 * v11 + v10 * v10;
  v12 = off_10689708(v59);
  if ( 0.0 == v12 )
  {
    v85 = 0.0;
    v84 = 0.0;
  }
  else
  {
    v84 = v84 * (1.0 / v12);
    v85 = 1.0 / v12 * v85;
  }
  v13 = v12;
  v14 = 0.0;
  v8[8] = v13;
  if ( 0.0 == v13 )
    return 1;
  if ( (a6 & 1) != 0 || a5 < 0.001 )
  {
    a5 = 0.0;
    v100 = 0;
  }
  else
  {
    if ( a5 > 99.999 )
      a5 = 100.0;
    if ( (a6 & 2) != 0 || (v14 = 0.0, sub_1007A470((int)this, a2, a4)) )
      v100 = 1;
    else
      v100 = 2;
  }
  v83 = a6 & 8;
  if ( (a6 & 8) != 0 )
  {
    if ( !sub_1007A470((int)this, a2, a4) )
      sub_1011C120((int)a2, 16.0, 128, 0, 0, 1, 2.0);
    v14 = 0.0;
  }
  v16 = this[1];
  *(float *)&v102 = v14;
  v17 = *(double (__thiscall **)(int))(*(_DWORD *)v16 + 1724);
  v65 = *a2;
  v66 = a2[1];
  v67 = a2[2];
  v68 = v84;
  v69 = v85;
  v70 = v86;
  v71 = v14;
  v18 = v17(v16);
  v19 = (_DWORD *)this[1];
  v72 = v18;
  v73 = sub_10042670(v19);
  v74 = sub_100737B0(*(_DWORD *)(this[1] + 1676)) * 0.3333333;
  v20 = *a2;
  v75 = a4;
  *(float *)&v87 = v20;
  v76 = v100;
  v21 = a2[1];
  v94 = 0;
  v88 = v21;
  v22 = a2[2];
  v89 = a2[2];
  v90 = flt_106F1CA8;
  v91 = flt_106F1CAC;
  v92 = flt_106F1CB0;
  if ( 100.0 == a5 )
    v23 = v8[8];
  else
    v23 = a5 * 0.01 * v8[8];
  v24 = (float *)this[1];
  v63 = v23;
  v25 = a2[1] - v24[180];
  v26 = *a2 - v24[179];
  if ( v26 * v26 + v25 * v25 >= 0.1 || (v104 = 1, v72 * 0.5 <= fabs(a2[2] - v24[181])) )
    v104 = 0;
  v27 = *(float *)&v102;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  v98 = 0;
  v99 = 0;
  while ( 1 )
  {
    v28 = v8[8] - v27;
    if ( v28 > 16.0 )
      v28 = 16.0;
    v64 = v28;
    if ( v28 < 0.001 )
      break;
    v71 = v28;
    if ( v27 - v63 > 0.001 )
      v76 = 0;
    sub_1007B830((int)this, (int)&savedregs, (int)this, (int)v8, (int)&v65);
    v100 = 0;
    while ( 1 )
    {
      sub_1007A7E0(this, (int)&v65, (int)&v87);
      if ( !v104
        || !v94
        || !v93
        || *(_BYTE *)(v94 + 306) != 6 && !(*(unsigned __int8 (**)(void))(*(_DWORD *)v94 + 284))() )
      {
        break;
      }
      if ( *a2 != v65 || a2[1] != v66 || a2[2] != v67 )
      {
        v104 = 0;
        break;
      }
      if ( *(_BYTE *)(v94 + 306) != 6 )
        goto LABEL_102;
      v77 = *a3 - *a2;
      v78 = a3[1] - a2[1];
      v79 = a3[2] - a2[2];
      off_10689714();
      v29 = (float *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[1] + 576))(this[1]);
      v30 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v94 + 576))(v94);
      v80 = *v30 - *v29;
      v81 = v30[1] - v29[1];
      v82 = v30[2] - v29[2];
      off_10689714();
      if ( v80 * v77 + v81 * v78 + v82 * v79 < 0.0 )
      {
LABEL_102:
        if ( v83 && v93 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v94 + 284))(v94) )
        {
          sub_1011BBD0(this[1], 0, 0, 255, 0, 0.5);
          sub_1011BBD0(v94, 255, 0, 0, 0, 0.5);
        }
        v31 = v98;
        v32 = v98;
        if ( v98 + 1 > v96 )
        {
          sub_102ABFC0(v98 - v96 + 1);
          v31 = v98;
        }
        v98 = v31 + 1;
        v33 = v31 - v32;
        v99 = v95;
        if ( v33 > 0 )
          memcpy((void *)(v95 + 4 * v32 + 4), (const void *)(v95 + 4 * v32), 4 * v33);
        v34 = (int *)(v95 + 4 * v32);
        if ( v34 )
          *v34 = v94;
        if ( *(float *)(v94 + 448) < 3.4028235e38 )
          *(float *)(v94 + 448) = 3.4028235e38;
        if ( ++v100 < 16 )
          continue;
      }
      break;
    }
    v35 = this[3];
    if ( v35 )
    {
      *(_DWORD *)(v35 + 4) = 0;
      *(_DWORD *)(v35 + 28) = 0;
    }
    if ( v83 )
    {
      v36 = sub_1007A470((int)this, (float *)&v87, a4);
      v37 = this[1] + 320;
      if ( v36 )
      {
        v57 = (*(int (__thiscall **)(int))(*(_DWORD *)v37 + 8))(v37);
        v39 = (*(int (__thiscall **)(int))(*(_DWORD *)(this[1] + 320) + 4))(this[1] + 320);
        sub_1011BB20((int)&v87, v39, v57, 0, 255, 0, 0, 0.1);
        sub_1011C120((int)&v87, 16.0, 0, 255, 0, 1, 0.1);
      }
      else
      {
        v56 = (*(int (__thiscall **)(int))(*(_DWORD *)v37 + 8))(v37);
        v38 = (*(int (**)(void))(*(_DWORD *)(this[1] + 320) + 4))();
        sub_1011BB20((int)&v87, v38, v56, 255, 0, 0, 0, 0.1);
        sub_1011C120((int)&v87, 16.0, 255, 0, 0, 1, 0.1);
      }
    }
    if ( v94 )
    {
      v60 = (*(float *)&v87 - v65) * (*(float *)&v87 - v65) + (v88 - v66) * (v88 - v66);
      v8 = a7;
      *(float *)&v102 = off_10689708(v60) + *(float *)&v102;
      v22 = v89;
      break;
    }
    v22 = v89;
    v40 = v89 - v67;
    if ( v40 < 0.0 )
      v40 = 0.0;
    v8 = a7;
    a7[13] = v40 + a7[13];
    v27 = v64 + *(float *)&v102;
    *(float *)&v102 = v27;
    v65 = *(float *)&v87;
    v66 = v88;
    v67 = v22;
  }
  v41 = v98;
  v42 = 0;
  if ( v98 > 0 )
  {
    do
    {
      v43 = *(_DWORD *)(v95 + 4 * v42++);
      *(float *)(v43 + 448) = 0.0;
    }
    while ( v42 < v41 );
    v22 = v89;
  }
  v44 = v94;
  v8[1] = *(float *)&v87;
  v8[2] = v88;
  v8[3] = v22;
  if ( v44 )
  {
    v45 = v90;
    *((_DWORD *)v8 + 7) = v44;
    v8[4] = v45;
    v8[5] = v91;
    v8[6] = v92;
    if ( sub_100D7680(v44) )
      v46 = -3;
    else
      v46 = ((*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
               dword_106B31D0,
               *(_DWORD *)(v44 + 24)) != 0)
          - 2;
    v47 = v83 == 0;
    v48 = v8[8] - *(float *)&v102;
    *(_DWORD *)v8 = v46;
    v8[9] = v48;
    if ( !v47 )
    {
      v58 = (*(int (__thiscall **)(int))(*(_DWORD *)(this[1] + 320) + 8))(this[1] + 320);
      v49 = (*(int (**)(void))(*(_DWORD *)(this[1] + 320) + 4))();
      sub_1011BB20((int)&v87, v49, v58, 255, 0, 0, 0, 0.5);
    }
    if ( v97 >= 0 && v95 )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v95);
    return 0;
  }
  else if ( (a6 & 4) != 0
         || ((v103 = sub_100737D0(*(_DWORD *)(this[1] + 1676)) * 0.5,
              v103 <= ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)this[1] + 1724))(this[1]) + 0.1)
           ? (v50 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)this[1] + 1724))(this[1]) + 0.1)
           : (v50 = sub_100737D0(*(_DWORD *)(this[1] + 1676)) * 0.5),
             fabs(v8[3] - a3[2]) <= v50) )
  {
    if ( v97 >= 0 && v95 )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v95);
    return 1;
  }
  else
  {
    v51 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0);
    if ( v51 && (v52 = *(_DWORD *)(v51 + 12)) != 0 )
      v53 = (*(int (__thiscall **)(int))(*(_DWORD *)v52 + 20))(v52);
    else
      v53 = 0;
    *((_DWORD *)v8 + 7) = v53;
    v8[4] = flt_106F1CA8;
    v8[5] = flt_106F1CAC;
    v8[6] = flt_106F1CB0;
    *v8 = NAN;
    v54 = a3[1] - v8[2];
    v55 = *a3 - v8[1];
    v61 = v55 * v55 + v54 * v54;
    v8[9] = off_10689708(v61);
    if ( v97 >= 0 && v95 )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v95);
    return 0;
  }
}
