int __usercall sub_100A2F00@<eax>(float *a1@<ecx>, int a2@<edi>, float a3@<esi>)
{
  int result; // eax
  int v5; // edi
  float *v6; // ebx
  double v7; // st7
  double v8; // st7
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int v12; // edx
  double v13; // st7
  double (__thiscall *v14)(int, _DWORD, _DWORD); // eax
  double v15; // st7
  double v16; // st6
  double v17; // st5
  double v18; // st7
  double v19; // st7
  double v20; // st7
  bool v21; // c0
  double v22; // st7
  double v23; // st7
  double v24; // st7
  bool v25; // c0
  bool v26; // c3
  double v27; // st7
  double v28; // st7
  double v29; // st6
  double v30; // st5
  double v31; // st4
  double v32; // st7
  double v33; // st7
  double v34; // st7
  int v35; // eax
  int v36; // esi
  double (__thiscall *v37)(int, _DWORD, _DWORD); // edx
  double v38; // st7
  double v39; // st6
  double v40; // st5
  double v41; // st7
  bool v42; // c0
  double v43; // st7
  double v44; // st7
  bool v45; // c0
  bool v46; // c3
  double v47; // st7
  double v48; // st7
  double v49; // st6
  double v50; // st5
  double v51; // st4
  double v52; // st7
  int v53; // esi
  int v54; // edi
  int v55; // esi
  int v56; // eax
  int v57; // edi
  double v58; // st7
  double v59; // st7
  double v60; // st7
  float *v61; // ecx
  double v62; // st6
  double v63; // st5
  double v64; // st4
  double v65; // st7
  double v66; // st5
  double v67; // st7
  double v68; // st5
  double v69; // st3
  double v70; // st4
  unsigned __int8 v71; // al
  int v72; // eax
  double v73; // st7
  double v74; // st7
  int v75; // eax
  float v76; // [esp+B0h] [ebp-60h]
  float v77; // [esp+B0h] [ebp-60h]
  float v78; // [esp+B4h] [ebp-5Ch]
  float v79; // [esp+B4h] [ebp-5Ch]
  float v80; // [esp+B8h] [ebp-58h]
  float v81; // [esp+B8h] [ebp-58h]
  int v83; // [esp+C4h] [ebp-4Ch]
  float v85; // [esp+CCh] [ebp-44h] BYREF
  float v86; // [esp+D0h] [ebp-40h]
  float v87; // [esp+D4h] [ebp-3Ch]
  float v88; // [esp+D8h] [ebp-38h] BYREF
  float v89; // [esp+DCh] [ebp-34h]
  float v90; // [esp+E0h] [ebp-30h]
  float v91; // [esp+E4h] [ebp-2Ch] BYREF
  float v92; // [esp+E8h] [ebp-28h]
  float v93; // [esp+ECh] [ebp-24h]
  int v94; // [esp+F0h] [ebp-20h]
  int v95; // [esp+F4h] [ebp-1Ch]
  int v96; // [esp+F8h] [ebp-18h]
  int v97; // [esp+FCh] [ebp-14h]
  int v98; // [esp+100h] [ebp-10h]
  float *v99; // [esp+104h] [ebp-Ch]
  int i; // [esp+108h] [ebp-8h]
  int v101; // [esp+10Ch] [ebp-4h]

  v99 = a1;
  sub_100F0920("effects/splash2");
  v97 = sub_100F0950(v83);
  result = sub_100DDA40(384);
  if ( result )
  {
    result = sub_1017A770("splash");
    v5 = result;
    v94 = result;
    if ( result )
    {
      sub_100F2950(result);
      v6 = a1 + 13;
      sub_100F3060(v6);
      *(float *)(v5 + 364) = 800.0;
      *(_DWORD *)(v5 + 376) |= 1u;
      i = 0;
      *(float *)(v5 + 380) = 2.0;
      do
      {
        v91 = *v6;
        v92 = v6[1];
        v93 = v6[2];
        v7 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
               dword_10413198,
               -16.0,
               16.0);
        v91 = v7 + v7 + v91;
        v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
               dword_10413198,
               -16.0,
               16.0);
        v92 = v8 + v8 + v92;
        v9 = sub_100F2B60(56, v97, &v91);
        v10 = v9;
        if ( !v9 )
          break;
        *(float *)(v9 + 44) = 0.0;
        *(float *)(v9 + 40) = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD, int))*(_DWORD *)(*(_DWORD *)dword_10413198
                                                                                                  + 4))(
                                dword_10413198,
                                0.5,
                                1.0,
                                LODWORD(a3),
                                a2);
        v96 = sub_10115FB0();
        v85 = (double)v96 * 0.000030518509 + (double)v96 * 0.000030518509 - 1.0;
        v96 = sub_10115FB0();
        v86 = (double)v96 * 0.000030518509 + (double)v96 * 0.000030518509 - 1.0;
        v11 = sub_10115FB0();
        v12 = *(_DWORD *)dword_10413198;
        v96 = v11;
        v13 = (double)v11;
        v14 = *(double (__thiscall **)(int, _DWORD, _DWORD))(v12 + 4);
        v88 = v85;
        v89 = v86;
        v90 = v13 * 0.000030518509 + v13 * 0.000030518509 - 1.0 + 1.0;
        v15 = v14(dword_10413198, 200.0, 400.0);
        v16 = v85 * v15;
        v17 = v86 * v15;
        v18 = v15 * v90;
        *(float *)(v10 + 24) = v16;
        *(float *)(v10 + 28) = v17;
        *(float *)(v10 + 32) = v18;
        v19 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                32.0,
                128.0);
        *(float *)(v10 + 32) = v19 + v19 + *(float *)(v10 + 32);
        v20 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                1.0,
                3.0);
        v21 = v20 + v20 > 4.0;
        v22 = 4.0;
        if ( !v21 )
        {
          v23 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  1.0,
                  3.0);
          v24 = v23 + v23;
          v25 = v24 > 0.1;
          v26 = 0.1 == v24;
          v22 = 0.1;
          if ( v25 || v26 )
          {
            v27 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                    dword_10413198,
                    1.0,
                    3.0);
            v22 = v27 + v27;
          }
        }
        *(float *)(v10 + 52) = v22;
        *(float *)&a2 = 0.1;
        a3 = 0.025;
        *(float *)(v10 + 48) = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(dword_10413198);
        v28 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                1.5,
                2.0);
        v29 = v99[19] * v28;
        v30 = 1.0;
        if ( v29 <= 1.0 )
          v30 = v29;
        v31 = v99[18] * v28;
        if ( v31 > 1.0 )
          v31 = 1.0;
        v32 = v28 * v99[17];
        if ( v32 > 1.0 )
          v32 = 1.0;
        v80 = v30;
        v78 = v31;
        v76 = v32;
        sub_1009ECE0((_BYTE *)(v10 + 36), v76, v78, v80, v99[20]);
        ++i;
      }
      while ( i < 32 );
      for ( i = 0; i < 4; ++i )
      {
        v91 = *v6;
        v92 = v6[1];
        v93 = v6[2];
        v33 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                -16.0,
                16.0);
        v91 = v33 + v33 + v91;
        v34 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                -16.0,
                16.0);
        v92 = v34 + v34 + v92;
        v35 = sub_100F2B60(56, v97, &v91);
        v36 = v35;
        if ( !v35 )
          break;
        *(float *)(v35 + 44) = 0.0;
        *(float *)(v35 + 40) = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD, int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                 dword_10413198,
                                 0.5,
                                 1.0,
                                 LODWORD(a3),
                                 a2);
        v96 = sub_10115FB0();
        v85 = (double)v96 * 0.000030518509 * 0.40000001 - 0.2;
        v96 = sub_10115FB0();
        v86 = (double)v96 * 0.000030518509 * 0.40000001 - 0.2;
        v96 = sub_10115FB0();
        v37 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
        v88 = v85;
        v89 = v86;
        v90 = (double)v96 * 0.000030518509 * 0.40000001 - 0.2 + 1.0;
        v38 = v37(dword_10413198, 300.0, 600.0);
        v39 = v85 * v38;
        v40 = v86 * v38;
        v41 = v38 * v90;
        *(float *)(v36 + 24) = v39;
        *(float *)(v36 + 28) = v40;
        *(float *)(v36 + 32) = v41;
        *(float *)(v36 + 32) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                 dword_10413198,
                                 32.0,
                                 128.0)
                             * 2.0
                             + *(float *)(v36 + 32);
        v42 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                2.0,
                3.0)
            * 2.0 > 4.0;
        v43 = 4.0;
        if ( !v42 )
        {
          v44 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  2.0,
                  3.0)
              * 2.0;
          v45 = v44 > 0.1;
          v46 = 0.1 == v44;
          v43 = 0.1;
          if ( v45 || v46 )
          {
            v47 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                    dword_10413198,
                    2.0,
                    3.0);
            v43 = v47 + v47;
          }
        }
        *(float *)(v36 + 52) = v43;
        *(float *)&a2 = 0.1;
        a3 = 0.025;
        *(float *)(v36 + 48) = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(dword_10413198);
        v48 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                1.5,
                2.0);
        v49 = v99[19] * v48;
        v50 = 1.0;
        if ( v49 <= 1.0 )
          v50 = v49;
        v51 = v99[18] * v48;
        if ( v51 > 1.0 )
          v51 = 1.0;
        v52 = v48 * v99[17];
        if ( v52 > 1.0 )
          v52 = 1.0;
        v81 = v50;
        v79 = v51;
        v77 = v52;
        sub_1009ECE0((_BYTE *)(v36 + 36), v77, v79, v81, v99[20]);
      }
      v53 = sub_100DDA40(268);
      if ( v53 )
      {
        sub_100F2BA0("splish");
        *(_DWORD *)v53 = &CSplashParticle::`vftable';
        *(_BYTE *)(v53 + 264) = 0;
        v54 = v53;
      }
      else
      {
        v54 = 0;
      }
      v55 = 0;
      v98 = 0;
      if ( v54 )
      {
        sub_100F2950(v54);
        v98 = v54;
        v55 = v54;
      }
      sub_100F3060(v6);
      sub_100A6440(v99[15]);
      v85 = *v6 + 64.0;
      v86 = v6[1] + 64.0;
      v87 = v6[2] + 64.0;
      v88 = *v6 - 64.0;
      v89 = v6[1] - 64.0;
      v90 = v6[2] - 64.0;
      sub_100EC3F0(&v88, &v85, 1);
      i = 0;
      v96 = 8;
      do
      {
        v56 = sub_100F2B60(60, v97, v6);
        v57 = v56;
        if ( !v56 )
          break;
        *(float *)(v56 + 44) = 0.0;
        *(float *)(v56 + 40) = 2.0;
        v101 = sub_10115FB0();
        *(float *)(v57 + 24) = (double)v101 * 0.000030518509 * 0.40000001 - 0.2;
        v101 = sub_10115FB0();
        *(float *)(v57 + 28) = (double)v101 * 0.000030518509 * 0.40000001 - 0.2;
        v101 = sub_10115FB0();
        *(float *)(v57 + 32) = (double)v101 * 0.000030518509 * 0.40000001 - 0.2;
        v58 = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD, int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                4.0,
                6.0,
                LODWORD(a3),
                a2);
        *(float *)(v57 + 24) = *(float *)(v57 + 24);
        *(float *)(v57 + 28) = *(float *)(v57 + 28);
        *(float *)(v57 + 32) = v58 + *(float *)(v57 + 32);
        off_103EDFEC();
        v59 = (double)v96 * 100.0;
        *(float *)(v57 + 24) = v59 * *(float *)(v57 + 24);
        *(float *)(v57 + 28) = *(float *)(v57 + 28) * v59;
        *(float *)(v57 + 32) = v59 * *(float *)(v57 + 32);
        v60 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                0.75,
                1.25);
        v61 = v99;
        v62 = v99[17] * v60;
        v63 = 1.0;
        if ( v62 <= 1.0 )
          v63 = v62;
        v95 = (int)(v63 * 255.0);
        *(_BYTE *)(v57 + 48) = v95;
        v64 = v61[18] * v60;
        if ( v64 > 1.0 )
          v64 = 1.0;
        v95 = (int)(v64 * 255.0);
        *(_BYTE *)(v57 + 49) = v95;
        v65 = v60 * v61[19];
        v66 = 1.0;
        if ( v65 <= 1.0 )
          v66 = v65;
        v67 = 1.0;
        v95 = (int)(v66 * 255.0);
        *(_BYTE *)(v57 + 50) = v95;
        v68 = ((double)i - 7.0) * -0.14285715;
        v69 = 0.0;
        if ( v68 >= 0.0 )
        {
          v69 = v68;
          v70 = 0.0;
          if ( v68 > 1.0 )
            v69 = 1.0;
        }
        else
        {
          v70 = 0.0;
        }
        v95 = (int)((1.0 - v69 * 0.5) * 48.0);
        v71 = v95;
        *(_BYTE *)(v57 + 53) = v95;
        v72 = 2 * v71;
        if ( v72 > 255 )
          LOBYTE(v72) = -1;
        *(_BYTE *)(v57 + 54) = v72;
        if ( v70 <= v68 )
        {
          if ( v68 <= 1.0 )
            v67 = v68;
        }
        else
        {
          v67 = v70;
        }
        a2 = 360;
        a3 = 0.0;
        v95 = HIWORD(v101) | 0xC00;
        v73 = (255.0 - v67 * 223.0) * v61[20];
        *(_BYTE *)(v57 + 52) = 0;
        v95 = (int)v73;
        *(_BYTE *)(v57 + 51) = (int)v73;
        v95 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198);
        *(float *)(v57 + 36) = (float)v95;
        v74 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                -4.0,
                4.0);
        v75 = v96;
        *(float *)(v57 + 56) = v74;
        ++i;
        v55 = v98;
        v96 = v75 - 1;
      }
      while ( v75 - 1 > -8 );
      if ( v55 )
        sub_100F2FF0(v55);
      return sub_100F2FF0(v94);
    }
  }
  return result;
}
