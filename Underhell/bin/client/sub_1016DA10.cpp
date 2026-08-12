char __thiscall sub_1016DA10(int this, float a2, int a3)
{
  double v4; // st7
  float *v5; // eax
  float *v6; // edi
  double v7; // st5
  double v8; // st7
  double v9; // st6
  double v10; // st7
  int v11; // eax
  int v12; // eax
  float *v13; // eax
  float *v14; // ecx
  double v15; // st7
  double v16; // st7
  double v17; // st7
  float *v18; // eax
  float *v19; // eax
  int v20; // eax
  double v21; // st7
  double v22; // st6
  bool v23; // zf
  char result; // al
  double v25; // st6
  int v26; // eax
  float *v27; // eax
  float v28; // ecx
  float v29; // edx
  int v30; // eax
  int v31; // ebx
  int v32; // eax
  float *v33; // eax
  int v34; // eax
  float *v35; // eax
  double v36; // st7
  int v37; // ecx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  _DWORD *v43; // ebx
  int v44; // eax
  int v45; // eax
  float v46; // ecx
  float v47; // eax
  double v48; // st6
  double v49; // st5
  double v50; // st3
  float *v51; // eax
  int v52; // ebx
  float *v53; // eax
  int v54; // eax
  double v55; // st7
  double v56; // st7
  double v57; // st6
  double v58; // st5
  double v59; // st7
  double v60; // st6
  double v61; // st5
  double v62; // st6
  double v63; // rt1
  double v64; // st5
  double v65; // st7
  double v66; // st5
  double v67; // st7
  int v68; // [esp+8h] [ebp-104h]
  int v69; // [esp+Ch] [ebp-100h]
  float v70; // [esp+10h] [ebp-FCh]
  float v71; // [esp+10h] [ebp-FCh]
  float v72[18]; // [esp+20h] [ebp-ECh] BYREF
  __int16 v73; // [esp+68h] [ebp-A4h]
  int v74; // [esp+70h] [ebp-9Ch]
  int v75; // [esp+74h] [ebp-98h]
  float v76[3]; // [esp+80h] [ebp-8Ch] BYREF
  float v77; // [esp+8Ch] [ebp-80h] BYREF
  float v78; // [esp+90h] [ebp-7Ch]
  float v79; // [esp+94h] [ebp-78h]
  float v80; // [esp+98h] [ebp-74h]
  float v81; // [esp+9Ch] [ebp-70h]
  float v82; // [esp+A0h] [ebp-6Ch]
  float v83; // [esp+ACh] [ebp-60h]
  __int16 v84; // [esp+C0h] [ebp-4Ch]
  char v85; // [esp+C2h] [ebp-4Ah]
  int v86; // [esp+CCh] [ebp-40h]
  int v87; // [esp+D0h] [ebp-3Ch]
  float *v88; // [esp+D4h] [ebp-38h]
  float v89; // [esp+D8h] [ebp-34h]
  float *v90; // [esp+DCh] [ebp-30h]
  float v91; // [esp+E0h] [ebp-2Ch]
  float v92; // [esp+E4h] [ebp-28h]
  float v93; // [esp+E8h] [ebp-24h] BYREF
  float v94; // [esp+ECh] [ebp-20h] BYREF
  float v95; // [esp+F0h] [ebp-1Ch]
  float v96; // [esp+F4h] [ebp-18h]
  float v97; // [esp+F8h] [ebp-14h] BYREF
  float v98; // [esp+FCh] [ebp-10h] BYREF
  float v99; // [esp+100h] [ebp-Ch] BYREF
  float v100; // [esp+104h] [ebp-8h]
  float v101; // [esp+108h] [ebp-4h]
  int savedregs; // [esp+10Ch] [ebp+0h] BYREF

  v98 = *((float *)off_103DC81C + 3) * 5.5;
  v4 = -(*(float *)(dword_10434644 + 44) * a2);
  v91 = v4;
  v89 = v4 * 0.5;
  v92 = 1.0;
  v5 = (float *)sub_10034A00((char *)this);
  *(float *)(this + 2120) = *v5;
  v6 = (float *)(this + 2108);
  *(float *)(this + 2124) = v5[1];
  *(float *)(this + 2128) = v5[2];
  v7 = *(float *)(this + 2136) * a2 + *(float *)(this + 2112);
  v8 = *(float *)(this + 2140) * a2 + *(float *)(this + 2116);
  *(float *)(this + 2108) = *(float *)(this + 2132) * a2 + *(float *)(this + 2108);
  *(float *)(this + 2112) = v7;
  v9 = v8;
  v10 = a2;
  *(float *)(this + 2116) = v9;
  v11 = *(_DWORD *)(this + 1980);
  if ( (v11 & 0x8000) != 0 )
  {
    v12 = (*(int (__thiscall **)(char *, _DWORD))(*((_DWORD *)off_103DCD78 + 16389) + 12))(
            (char *)off_103DCD78 + 65556,
            *(__int16 *)(this + 2016));
    if ( !v12 )
      goto LABEL_10;
    v13 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 36))(v12);
    v14 = &v99;
    v99 = *(float *)(this + 2020) + *v13;
    v100 = *(float *)(this + 2024) + v13[1];
    v101 = *(float *)(this + 2028) + v13[2];
  }
  else
  {
    if ( (v11 & 1) != 0 )
    {
      *(float *)(this + 1992) = *v6 * v10 + *(float *)(this + 1992);
      v15 = v10 * *(float *)(this + 2112) + *(float *)(this + 1996);
      *(float *)(this + 1996) = v15;
      v93 = sin(*((float *)off_103DC81C + 3) + *(float *)(this + 2116)) * (*(float *)(this + 2060) * 10.0)
          + *(float *)(this + 1992);
      v98 = v15 + sin(v98 + *(float *)(this + 2116) + 0.7) * (*(float *)(this + 2060) * 8.0);
      v16 = sub_10034A10((float *)this, 2) + a2 * *(float *)(this + 2116);
      v99 = v93;
      v100 = v98;
      v101 = v16;
      sub_10034A30((float *)this, &v99);
      goto LABEL_10;
    }
    if ( (v11 & 0x400) != 0 )
    {
      v17 = v98 + *(float *)(this + 2116);
      v90 = &v93;
      v88 = &v98;
      v97 = v17;
      v93 = cos(v97);
      v98 = sin(v97);
      v99 = *v6 * a2 + sin(*((float *)off_103DC81C + 3) * 20.0) * 8.0;
      v100 = sin(*((float *)off_103DC81C + 3) * 30.0) * 4.0 + *(float *)(this + 2112) * a2;
      v101 = a2 * *(float *)(this + 2116);
      v18 = (float *)sub_10034A00((char *)this);
      v94 = *v18 + v99;
      v95 = v18[1] + v100;
      v96 = v18[2] + v101;
      sub_10034A30((float *)this, &v94);
      goto LABEL_10;
    }
    v99 = *v6 * v10;
    v100 = *(float *)(this + 2112) * v10;
    v101 = v10 * *(float *)(this + 2116);
    v19 = (float *)sub_10034A00((char *)this);
    v14 = &v94;
    v94 = v99 + *v19;
    v95 = v19[1] + v100;
    v96 = v19[2] + v101;
  }
  sub_10034A30((float *)this, v14);
LABEL_10:
  v20 = *(_DWORD *)(this + 1980);
  if ( (v20 & 0x100) != 0 )
  {
    v21 = a2;
    v22 = *(float *)(this + 2068) * a2 + *(float *)(this + 2072);
    *(float *)(this + 2072) = v22;
    if ( v22 >= *(float *)(this + 1988) )
    {
      v23 = (*(_DWORD *)(this + 1980) & 0x10000) == 0;
      LODWORD(v97) = (int)v22;
      *(float *)(this + 2072) = v22 - (double)(int)v22;
      if ( v23 )
      {
        result = 0;
        *(float *)(this + 1984) = 0.0;
        return result;
      }
    }
  }
  else
  {
    v21 = a2;
    if ( (v20 & 0x800) != 0 )
    {
      v25 = 10.0 * v21 + *(float *)(this + 2072);
      *(float *)(this + 2072) = v25;
      if ( v25 >= *(float *)(this + 1988) )
      {
        LODWORD(v97) = (int)v25;
        *(float *)(this + 2072) = v25 - (double)(int)v25;
      }
    }
  }
  v26 = *(_DWORD *)(this + 1980);
  if ( (v26 & 0x20000) != 0 )
    *(float *)(this + 2060) = 0.5 * v21 + *(float *)(this + 2060);
  if ( (v26 & 4) != 0 )
  {
    v99 = *(float *)(this + 2032) * v21;
    v100 = *(float *)(this + 2036) * v21;
    v101 = v21 * *(float *)(this + 2040);
    v27 = (float *)sub_10034AE0((char *)this);
    v94 = *v27 + v99;
    v95 = v27[1] + v100;
    v96 = v27[2] + v101;
    sub_10034B10((float *)this, &v94);
  }
  else if ( (v26 & 0x4000000) != 0 )
  {
    v70 = *(float *)(this + 2116) * *(float *)(this + 2116)
        + *v6 * *v6
        + *(float *)(this + 2112) * *(float *)(this + 2112);
    if ( off_103EDFE0(v70) > 0.0 )
    {
      sub_101EE190(this + 2108, &v99);
      sub_10037CA0(this, &v99);
    }
  }
  v28 = *(float *)(this + 1980);
  v97 = v28;
  if ( (LOWORD(v28) & 0x1020) != 0 )
  {
    v94 = 0.0;
    v95 = 0.0;
    v96 = 0.0;
    if ( (LOWORD(v28) & 0x1000) != 0 )
    {
      v29 = *(float *)(this + 2120);
      v100 = *(float *)(this + 2124);
      v30 = *(_DWORD *)(dword_10443CFC + 48);
      v99 = v29;
      v101 = *(float *)(this + 2128);
      if ( v30 > 0 && (LODWORD(v28) & 0x10000000) != 0 )
      {
        v31 = *((_DWORD *)off_103DC81C + 1);
        if ( v30 + *(_DWORD *)(this + 2092) > v31 )
          goto LABEL_73;
        if ( sub_1000E340((float *)(this + 2096), &flt_10459240) )
        {
          v99 = *(float *)(this + 2096);
          v100 = *(float *)(this + 2100);
          v101 = *(float *)(this + 2104);
        }
        v28 = v97;
        *(_DWORD *)(this + 2092) = v31;
      }
      v32 = 0;
      if ( (LODWORD(v28) & 0x2000000) != 0 )
        v32 = *(_DWORD *)(this + 736);
      v69 = v32;
      v68 = sub_100116E0((_DWORD *)this);
      v33 = (float *)sub_10034A00((char *)this);
      sub_1000FCE0((int)&savedregs, this, &v99, v33, 33570827, v68, v69, (int)v76);
      if ( 1.0 != v83 )
      {
        if ( sub_100AF2F0(v76) || (v34 = sub_1007A6A0(off_103DCD78, *(__int16 *)(this + 2016)), v86 != v34) )
        {
          v92 = v83;
          v94 = v80;
          v95 = v81;
          v96 = v82;
        }
      }
      *(float *)(this + 2096) = v77;
      *(float *)(this + 2100) = v78;
      *(float *)(this + 2104) = v79;
    }
    else
    {
      if ( (LOBYTE(v28) & 0x20) == 0 )
        goto LABEL_73;
      v97 = COERCE_FLOAT(&CTraceFilterWorldOnly::`vftable');
      v35 = (float *)sub_10034A00((char *)this);
      sub_1000EDD0(COERCE_FLOAT(&savedregs), this, (float *)(this + 2120), v35, 33570827, (int)&v97, (int)v76);
      if ( 1.0 == v83 )
        goto LABEL_73;
      v92 = v83;
      v94 = v80;
      v95 = v81;
      v96 = v82;
    }
    if ( 1.0 != v92 )
    {
      sub_10034A30((float *)this, &v77);
      v36 = *(float *)(this + 2004);
      v37 = *(_DWORD *)(this + 1980);
      v98 = *(float *)(this + 2004);
      if ( (v37 & 0xA) != 0 )
      {
        v98 = v36 * 0.5;
        if ( v96 > 0.9 && *(float *)(this + 2116) <= 0.0 && v91 * 3.0 <= *(float *)(this + 2116) )
        {
          v98 = 0.0;
          *(_DWORD *)(this + 1980) = v37 & 0xFFFFFFC1;
          sub_10034B80((float *)this, 0, 0.0);
          sub_10034B80((float *)this, 2, 0.0);
        }
      }
      v38 = *(_DWORD *)(this + 1980);
      if ( (v38 & 0x1000000) != 0 )
      {
        *(_DWORD *)(this + 2076) = 13;
        *(_DWORD *)(this + 1980) = v38 & 0xFEFFFFFF;
      }
      if ( *(_DWORD *)(this + 2008) )
        ((void (__stdcall *)(int, _DWORD))(*off_103E9C2C)[28])(this, LODWORD(v98));
      if ( *(_DWORD *)(this + 2080) )
      {
        sub_1000E650(v72);
        v72[0] = v77;
        v72[1] = v78;
        v75 = v87;
        v72[2] = v79;
        v73 = v84;
        v39 = *(__int16 *)(this + 2016);
        v72[3] = v76[0];
        v74 = 0;
        v72[4] = v76[1];
        v72[5] = v76[2];
        v40 = (*(int (__thiscall **)(char *, int))(*((_DWORD *)off_103DCD78 + 16389) + 12))(
                (char *)off_103DCD78 + 65556,
                v39);
        if ( v40 )
        {
          v41 = v40 + 8;
          if ( v41 )
          {
            v42 = __RTDynamicCast(
                    v41,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&IClientNetworkable `RTTI Type Descriptor',
                    (int)&C_BasePlayer `RTTI Type Descriptor',
                    0);
            if ( v42 )
              v74 = (*(int (__thiscall **)(int))(*(_DWORD *)v42 + 296))(v42);
          }
        }
        if ( v86 )
        {
          v43 = off_103DCD78;
          v44 = (*(int (__thiscall **)(int))(*(_DWORD *)(v86 + 8) + 36))(v86 + 8);
          v72[13] = *(float *)sub_1000E5F0(v43, &v97, v44);
        }
        sub_10168E60(*(_DWORD *)(this + 2080), (int)v72);
      }
      if ( (*(_DWORD *)(this + 1980) & 0x8000000) != 0 )
      {
        sub_100EA4D0((_DWORD *)(this + 444), 0, 0, 0);
        *(_BYTE *)(this + 2088) = 1;
      }
      v45 = *(_DWORD *)(this + 1980);
      if ( (v45 & 0x4000) != 0 )
      {
        *(_DWORD *)(this + 1980) = v45 & 0xFFFFFF7F;
        *(float *)(this + 1984) = *((float *)off_103DC81C + 3);
      }
      else if ( (v45 & 0x40000) != 0 )
      {
        if ( !sub_100AF2F0(v76) || (v85 & 4) != 0 )
        {
          *(_DWORD *)(this + 1980) &= ~0x80u;
          *(float *)(this + 1984) = *((float *)off_103DC81C + 3);
        }
        else
        {
          *v6 = flt_10459240;
          *(_QWORD *)(this + 2112) = qword_10459244;
          *(float *)(this + 2132) = flt_10459240;
          *(_QWORD *)(this + 2136) = qword_10459244;
          *(_DWORD *)(this + 1980) &= 0xFFFFEFDF;
        }
      }
      else
      {
        if ( 0.0 != v98 )
        {
          v46 = *v6;
          v47 = *(float *)(this + 2116);
          v100 = *(float *)(this + 2112);
          v48 = v95;
          v99 = v46;
          v101 = v47;
          v49 = v96;
          v50 = (v47 * v96 + v46 * v94 + v100 * v95) * -2.0;
          *v6 = v94 * v50 + *v6;
          *(float *)(this + 2112) = v48 * v50 + *(float *)(this + 2112);
          *(float *)(this + 2116) = v50 * v49 + *(float *)(this + 2116);
          v71 = -sub_10034AF0((float *)this, 1);
          sub_10034B80((float *)this, 1, v71);
        }
        if ( 1.0 != v98 )
        {
          sub_10016940((float *)(this + 2108), v98, (float *)(this + 2108));
          v51 = (float *)sub_10034AE0((char *)this);
          v99 = *v51 * 0.89999998;
          v100 = v51[1] * 0.89999998;
          v101 = 0.89999998 * v51[2];
          sub_10034B10((float *)this, &v99);
        }
      }
    }
  }
LABEL_73:
  if ( (*(_BYTE *)(this + 1980) & 0x40) != 0 && a3 == *(_DWORD *)(this + 2064) )
  {
    v52 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413164 + 16))(dword_10413164, 0x10000000);
    v53 = (float *)sub_10034A00((char *)this);
    *(float *)(v52 + 4) = *v53;
    *(float *)(v52 + 8) = v53[1];
    *(float *)(v52 + 12) = v53[2];
    *(_WORD *)(v52 + 20) = 30975;
    *(_BYTE *)(v52 + 22) = 0;
    *(float *)(v52 + 16) = 60.0;
    *(float *)(v52 + 24) = *((float *)off_103DC81C + 3) + 0.01;
  }
  if ( 1.0 == v92 )
  {
    v54 = *(_DWORD *)(this + 1980);
    if ( (v54 & 2) != 0 )
    {
      v55 = v91;
    }
    else
    {
      if ( (v54 & 8) == 0 )
        goto LABEL_82;
      v55 = v89;
    }
    *(float *)(this + 2116) = v55 + *(float *)(this + 2116);
  }
LABEL_82:
  if ( (*(_DWORD *)(this + 1980) & 0x200000) != 0 )
  {
    sub_1009C8A0(COERCE_INT(*((float *)off_103DC81C + 3)), &v99);
    v56 = v99;
    v57 = 50.0;
    if ( v99 <= (double)*v6 )
    {
      v60 = v99;
      if ( v99 >= (double)*v6 )
      {
        v62 = a2;
      }
      else
      {
        *v6 = *v6 - a2 * 50.0;
        v61 = v60;
        v62 = a2;
        if ( v61 > *v6 )
          *v6 = v61;
      }
      v63 = v62;
      v57 = 50.0;
      v59 = v63;
    }
    else
    {
      *v6 = a2 * 50.0 + *v6;
      v58 = v56;
      v59 = a2;
      if ( v58 < *v6 )
        *v6 = v58;
    }
    if ( v100 <= (double)*(float *)(this + 2112) )
    {
      if ( v100 < (double)*(float *)(this + 2112) )
      {
        v66 = v59;
        v67 = v100;
        *(float *)(this + 2112) = *(float *)(this + 2112) - v57 * v66;
        if ( v67 > *(float *)(this + 2112) )
        {
          *(float *)(this + 2112) = v67;
          return 1;
        }
      }
    }
    else
    {
      v64 = v59;
      v65 = v100;
      *(float *)(this + 2112) = v57 * v64 + *(float *)(this + 2112);
      if ( v65 < *(float *)(this + 2112) )
      {
        *(float *)(this + 2112) = v65;
        return 1;
      }
    }
  }
  return 1;
}
