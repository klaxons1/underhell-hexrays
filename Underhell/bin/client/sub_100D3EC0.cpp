int __usercall sub_100D3EC0@<eax>(_BYTE *a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int result; // eax
  int (*v5)(void); // eax
  bool v6; // zf
  int v7; // ecx
  int v8; // ecx
  int v9; // edi
  double v10; // st6
  double v11; // st6
  bool v12; // c0
  bool v13; // c3
  double v14; // st6
  int v15; // ecx
  double v16; // st7
  double v17; // st7
  double v18; // st7
  double v19; // st6
  double v20; // st7
  int v21; // edx
  double v22; // st7
  double v23; // st7
  double v24; // st6
  int v25; // ecx
  int v26; // edi
  double v27; // st7
  double v28; // st7
  bool v29; // c0
  bool v30; // c3
  double v31; // st7
  double v32; // st6
  double v33; // st4
  double v34; // st7
  double v35; // st3
  double v36; // st6
  double v37; // st3
  bool v38; // c0
  bool v39; // c3
  double v40; // st5
  double v41; // st7
  double v42; // st6
  double v43; // st5
  double v44; // st7
  double v45; // st6
  double v46; // rt2
  int v47; // ecx
  double v48; // st7
  double v49; // st5
  bool v50; // c0
  bool v51; // c3
  int v52; // ecx
  double v53; // st7
  double v54; // st6
  double v55; // st5
  double v56; // st7
  double v57; // st4
  double v58; // st7
  char *v59; // eax
  float *v60; // edi
  float *v61; // eax
  float v62; // ecx
  double v63; // st7
  float v64; // edx
  float v65; // [esp+34h] [ebp-C8h]
  float v66; // [esp+38h] [ebp-C4h]
  float v67; // [esp+38h] [ebp-C4h]
  float v68; // [esp+3Ch] [ebp-C0h]
  float v69; // [esp+3Ch] [ebp-C0h]
  float v70; // [esp+3Ch] [ebp-C0h]
  int v71; // [esp+40h] [ebp-BCh]
  _BYTE v72[44]; // [esp+4Ch] [ebp-B0h] BYREF
  float v73; // [esp+78h] [ebp-84h]
  _BYTE v74[12]; // [esp+A0h] [ebp-5Ch] BYREF
  float v75[3]; // [esp+ACh] [ebp-50h] BYREF
  int v76; // [esp+B8h] [ebp-44h] BYREF
  float v77; // [esp+BCh] [ebp-40h] BYREF
  float v78; // [esp+C0h] [ebp-3Ch]
  float v79; // [esp+C4h] [ebp-38h]
  int v80; // [esp+C8h] [ebp-34h] BYREF
  int v81; // [esp+CCh] [ebp-30h] BYREF
  float v82; // [esp+D0h] [ebp-2Ch] BYREF
  float v83; // [esp+D4h] [ebp-28h]
  float v84; // [esp+D8h] [ebp-24h]
  float v85; // [esp+DCh] [ebp-20h] BYREF
  float v86; // [esp+E0h] [ebp-1Ch]
  int v87; // [esp+E4h] [ebp-18h]
  float v88; // [esp+E8h] [ebp-14h] BYREF
  int v89; // [esp+ECh] [ebp-10h]
  float v90; // [esp+F0h] [ebp-Ch]
  float v91; // [esp+F4h] [ebp-8h]
  float v92; // [esp+F8h] [ebp-4h]
  int savedregs; // [esp+FCh] [ebp+0h] BYREF

  if ( *((_DWORD *)a1 + 62) )
    return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 196))(a1);
  if ( *(_DWORD *)(dword_104311B4 + 48) == 1 )
  {
    v5 = *(int (**)(void))(*(_DWORD *)a1 + 140);
  }
  else
  {
    result = *(_DWORD *)(dword_104311B4 + 48) - 2;
    if ( *(_DWORD *)(dword_104311B4 + 48) != 2 )
      goto LABEL_8;
    v5 = *(int (**)(void))(*(_DWORD *)a1 + 144);
  }
  result = v5();
LABEL_8:
  if ( !a1[185] )
    return result;
  if ( !dword_1043A340 )
    dword_1043A340 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "sv_cheats");
  if ( byte_10431148 )
  {
    result = (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 81)
          || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 82);
    a1[186] = result;
    a1[184] = result;
    if ( !(_BYTE)result )
      return result;
    dword_1043118C = 0;
    dword_10431190 = 0;
    dword_10431194 = 0;
    dword_10431180 = 0;
    dword_10431184 = 0;
    dword_10431188 = 0;
    dword_10431174 = 0;
    dword_10431178 = 0;
    dword_1043117C = 0;
    dword_10431168 = 0;
    dword_1043116C = 0;
    dword_10431170 = 0;
    dword_1043115C = 0;
    dword_10431160 = 0;
    dword_10431164 = 0;
    dword_10431150 = 0;
    dword_10431154 = 0;
    dword_10431158 = 0;
    if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 40))(dword_1047CA68, 107)
      || !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 40))(dword_1047CA68, 109) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 40))(dword_1047CA68, 107) )
      {
        a1[200] = 0;
        goto LABEL_24;
      }
      if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 40))(dword_1047CA68, 108) )
        return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 120))(a1);
    }
    a1[200] = 1;
  }
LABEL_24:
  v6 = a1[186] == 0;
  v90 = *(float *)(dword_1043131C + 44);
  v71 = a3;
  v91 = *(float *)(dword_104312D4 + 44);
  v92 = *(float *)(dword_10431364 + 44);
  if ( v6 )
    goto LABEL_52;
  sub_100D9830(&v88, &v76);
  v6 = a1[200] == 0;
  v7 = v76;
  *((float *)a1 + 53) = v88;
  *((_DWORD *)a1 + 54) = v7;
  if ( !v6 )
    goto LABEL_52;
  sub_100D9640(&v80, &v81);
  v8 = *((_DWORD *)a1 + 53);
  if ( v8 <= v80 )
  {
    if ( v8 >= v80 )
      goto LABEL_36;
    v9 = dword_10431514;
    v11 = *(float *)(dword_10431514 + 44);
    v12 = v91 < v11;
    v13 = v91 == v11;
    v14 = v91;
    if ( !v12 && !v13 )
    {
      v89 = (v80 - v8) / 2;
      v14 = v14 - (double)v89 * 0.5;
      v91 = v14;
    }
    if ( v14 >= *(float *)(dword_10431514 + 44) )
      goto LABEL_36;
  }
  else
  {
    v9 = dword_104314CC;
    v10 = v91;
    if ( v91 < (double)*(float *)(dword_104314CC + 44) )
    {
      v89 = (v8 - v80) / 2;
      v10 = v10 + (double)v89 * 0.5;
      v91 = v10;
    }
    if ( v10 <= *(float *)(dword_104314CC + 44) )
      goto LABEL_36;
  }
  v91 = *(float *)(v9 + 44);
LABEL_36:
  v15 = *((_DWORD *)a1 + 54);
  if ( v15 <= v81 )
  {
    if ( v15 < v81 )
    {
      if ( v90 <= (double)*(float *)(dword_10431484 + 44) )
      {
        v17 = v90;
      }
      else
      {
        v89 = (v81 - v15) / 2;
        v17 = v90 - 0.5 * (double)v89;
        v90 = v17;
      }
      if ( v17 < *(float *)(dword_10431484 + 44) )
        v90 = *(float *)(dword_10431484 + 44);
    }
  }
  else
  {
    if ( v90 >= (double)*(float *)(dword_1043143C + 44) )
    {
      v16 = v90;
    }
    else
    {
      v89 = (v15 - v81) / 2;
      v16 = 0.5 * (double)v89 + v90;
      v90 = v16;
    }
    if ( v16 > *(float *)(dword_1043143C + 44) )
      v90 = *(float *)(dword_1043143C + 44);
  }
  v18 = sub_100B3A10((float *)&dword_1042FB78);
  if ( 0.0 == v18 )
  {
    v21 = *((_DWORD *)a1 + 54);
    *((_DWORD *)a1 + 51) = *((_DWORD *)a1 + 53);
    *((_DWORD *)a1 + 52) = v21;
  }
  else
  {
    v19 = (double)*((int *)a1 + 53) * v18;
    v20 = v18 * (double)*((int *)a1 + 54);
    *((_DWORD *)a1 + 51) = (int)v19;
    *((_DWORD *)a1 + 52) = (int)v20;
  }
  (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)a1 + 120))(a1, v71);
LABEL_52:
  if ( 0.0 == ((double (__thiscall *)(int *, int *, int, int))*(_DWORD *)(*off_103ED0D8 + 64))(
                off_103ED0D8,
                &dword_1043118C,
                v71,
                a2) )
  {
    if ( 0.0 == ((double (__thiscall *)(int *, int *))*(_DWORD *)(*off_103ED0D8 + 64))(off_103ED0D8, &dword_10431180) )
      goto LABEL_57;
    v22 = v90 - *(float *)(dword_1043128C + 44);
  }
  else
  {
    v22 = *(float *)(dword_1043128C + 44) + v90;
  }
  v90 = v22;
LABEL_57:
  if ( 0.0 == ((double (__thiscall *)(int *, int *))*(_DWORD *)(*off_103ED0D8 + 64))(off_103ED0D8, &dword_10431174) )
  {
    if ( 0.0 == ((double (__thiscall *)(int *, int *))*(_DWORD *)(*off_103ED0D8 + 64))(off_103ED0D8, &dword_10431168) )
      goto LABEL_62;
    v23 = *(float *)(dword_1043128C + 44) + v91;
  }
  else
  {
    v23 = v91 - *(float *)(dword_1043128C + 44);
  }
  v91 = v23;
LABEL_62:
  if ( 0.0 == ((double (__thiscall *)(int *, int *))*(_DWORD *)(*off_103ED0D8 + 64))(off_103ED0D8, &dword_1043115C) )
  {
    if ( 0.0 != ((double (__thiscall *)(int *, int *))*(_DWORD *)(*off_103ED0D8 + 64))(off_103ED0D8, &dword_10431150) )
      v92 = *(float *)(dword_1043128C + 44) + *(float *)(dword_1043128C + 44) + v92;
  }
  else
  {
    v24 = v92 - (*(float *)(dword_1043128C + 44) + *(float *)(dword_1043128C + 44));
    v92 = v24;
    if ( v24 < 30.0 )
    {
      v90 = 0.0;
      v91 = 0.0;
      v92 = 30.0;
    }
  }
  if ( a1[200] )
  {
    sub_100D9640(&v80, &v81);
    v25 = *((_DWORD *)a1 + 54);
    if ( v25 <= v81 )
    {
      if ( v25 >= v81 )
        goto LABEL_78;
      v26 = dword_104315A4;
      v28 = *(float *)(dword_104315A4 + 44);
      v29 = v92 < v28;
      v30 = v92 == v28;
      v31 = v92;
      if ( !v29 && !v30 )
      {
        v89 = (v81 - v25) / 2;
        v31 = v31 - (double)v89 * *(float *)(dword_1043128C + 44);
        v92 = v31;
      }
      if ( v31 >= *(float *)(dword_104315A4 + 44) )
        goto LABEL_78;
    }
    else
    {
      v26 = dword_1043155C;
      v27 = v92;
      if ( v92 < (double)*(float *)(dword_1043155C + 44) )
      {
        v89 = (*((_DWORD *)a1 + 54) - v81) / 2;
        v27 = v27 + (double)v89 * *(float *)(dword_1043128C + 44);
        v92 = v27;
      }
      if ( v27 <= *(float *)(dword_1043155C + 44) )
        goto LABEL_78;
    }
    v92 = *(float *)(v26 + 44);
LABEL_78:
    *((_DWORD *)a1 + 51) = (int)(sub_100B3A10((float *)&dword_1042FB78) * (double)*((int *)a1 + 53));
    *((_DWORD *)a1 + 52) = (int)(sub_100B3A10((float *)&dword_1042FB78) * (double)*((int *)a1 + 54));
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 120))(a1);
  }
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, &v85);
  if ( (dword_10431960 & 1) == 0 )
  {
    dword_10431960 |= 1u;
    dword_10431954 = LODWORD(v85);
    dword_10431958 = LODWORD(v86);
    dword_1043195C = v87;
  }
  if ( byte_10431148 && sub_1000E340((float *)&dword_10431954, &v85) )
  {
    v32 = *(float *)&dword_10431954 - v85 + v90;
    v33 = *(float *)&dword_10431958 - v86 + v91;
    v91 = v33;
    v34 = v33;
    *(float *)&dword_10431954 = v85;
    *(float *)&dword_10431958 = v86;
    dword_1043195C = v87;
  }
  else
  {
    v34 = v91;
    v32 = v90;
  }
  if ( v32 <= 180.0 )
  {
    v38 = v32 > -180.0;
    v39 = -180.0 == v32;
    v37 = v32;
    v36 = -180.0;
    if ( !v38 && !v39 )
      v37 = v37 + 360.0;
  }
  else
  {
    v35 = v32;
    v36 = -180.0;
    v37 = v35 - 360.0;
  }
  if ( v34 < 180.0 )
  {
    if ( v36 < v34 )
    {
      v42 = v34;
      v41 = v37;
    }
    else
    {
      v43 = v34;
      v41 = v37;
      v42 = v43 + 360.0;
      v91 = v43 + 360.0;
    }
  }
  else
  {
    v40 = v34;
    v41 = v37;
    v42 = v40 - 360.0;
    v91 = v40 - 360.0;
  }
  if ( *(float *)(dword_1043143C + 44) >= v41 )
  {
    if ( *(float *)(dword_10431484 + 44) <= v41 )
    {
      v46 = v42;
      v45 = v41;
      v44 = v46;
    }
    else
    {
      v44 = v42;
      v45 = *(float *)(dword_10431484 + 44);
    }
  }
  else
  {
    v44 = v42;
    v45 = *(float *)(dword_1043143C + 44);
  }
  v47 = dword_104314CC;
  if ( *(float *)(dword_104314CC + 44) >= v44 )
  {
    v47 = dword_10431514;
    v49 = *(float *)(dword_10431514 + 44);
    v50 = v49 < v44;
    v51 = v49 == v44;
    v48 = v45;
    if ( v50 || v51 )
      goto LABEL_103;
  }
  else
  {
    v48 = v45;
  }
  v91 = *(float *)(v47 + 44);
LABEL_103:
  v52 = dword_1043155C;
  if ( v92 > (double)*(float *)(dword_1043155C + 44)
    || (v52 = dword_104315A4, v92 < (double)*(float *)(dword_104315A4 + 44)) )
  {
    v92 = *(float *)(v52 + 44);
  }
  v68 = v48;
  sub_10229120(v68);
  sub_10229120(v91);
  sub_10229120(v92);
  v90 = *((float *)a1 + 47);
  v6 = *(_DWORD *)(dword_104311FC + 48) == 0;
  v53 = *((float *)a1 + 48);
  v91 = *((float *)a1 + 48);
  v54 = *((float *)a1 + 49);
  v92 = *((float *)a1 + 49);
  v55 = 1.0;
  if ( v6 )
  {
    v57 = *(float *)(dword_10431244 + 44) + 1.0;
    if ( v57 >= 1.0 )
      v55 = v57;
    v88 = v55;
    if ( *(float *)(dword_104312D4 + 44) == v53 - v86 )
    {
      v58 = v55;
    }
    else
    {
      v69 = v55;
      v66 = v86 + *(float *)(dword_104312D4 + 44);
      v65 = v53;
      v91 = sub_100D3A20(v65, v66, v69);
      v54 = v92;
      v58 = v88;
    }
    if ( *(float *)(dword_1043131C + 44) != v90 - v85 )
    {
      v70 = v58;
      v67 = v85 + *(float *)(dword_1043131C + 44);
      v90 = sub_100D3A20(v90, v67, v70);
      v54 = v92;
      v58 = v88;
    }
    if ( fabs(v54 - *(float *)(dword_10431364 + 44)) >= 2.0 )
      v56 = (*(float *)(dword_10431364 + 44) - v54) / v58 + v54;
    else
      v56 = *(float *)(dword_10431364 + 44);
  }
  else
  {
    v91 = *(float *)(dword_104312D4 + 44) + v86;
    v90 = *(float *)(dword_1043131C + 44) + v85;
    v56 = *(float *)(dword_10431364 + 44);
  }
  v92 = v56;
  if ( *(_DWORD *)(dword_104313AC + 48) )
  {
    v59 = (char *)sub_100422D0();
    v60 = (float *)v59;
    if ( v59 )
    {
      v61 = (float *)sub_10034A00(v59);
      v62 = v61[1];
      v82 = *v61;
      v63 = v82 + v60[55];
      v64 = v61[2];
      v83 = v62;
      v84 = v64;
      v82 = v63;
      v83 = v60[56] + v62;
      v84 = v60[57] + v64;
      v77 = v90;
      v78 = v91;
      v79 = 0.0;
      sub_101EE040(&v77, v75, 0, 0);
      sub_1012D400(v60, 0);
      v77 = v82 - v75[0] * v92;
      v78 = v83 - v75[1] * v92;
      v79 = v84 - v92 * v75[2];
      sub_1000EE50(
        COERCE_FLOAT(&savedregs),
        (int)a1,
        &v82,
        &v77,
        flt_103E0E6C,
        flt_103E0E78,
        33570827,
        (int)v74,
        (int)v72);
      if ( v73 < 1.0 )
        v92 = v73 * v92;
    }
  }
  result = dword_104313F4;
  if ( *(_DWORD *)(dword_104313F4 + 48) )
  {
    (*(void (**)(int, int, const char *, ...))(*(_DWORD *)dword_1041315C + 116))(
      dword_1041315C,
      4,
      "Pitch: %6.1f   Yaw: %6.1f %38s",
      v85,
      v86,
      "view angles");
    (*(void (**)(int, int, const char *, ...))(*(_DWORD *)dword_1041315C + 116))(
      dword_1041315C,
      6,
      "Pitch: %6.1f   Yaw: %6.1f   Dist: %6.1f %19s",
      *(float *)(dword_1043131C + 44),
      *(float *)(dword_104312D4 + 44),
      *(float *)(dword_10431364 + 44),
      "ideal angles");
    result = (*(int (**)(int, int, const char *, ...))(*(_DWORD *)dword_1041315C + 116))(
               dword_1041315C,
               8,
               "Pitch: %6.1f   Yaw: %6.1f   Dist: %6.1f %16s",
               *((float *)a1 + 47),
               *((float *)a1 + 48),
               *((float *)a1 + 49),
               "camera offset");
  }
  *((float *)a1 + 47) = v90;
  *((float *)a1 + 48) = v91;
  *((float *)a1 + 49) = v92;
  return result;
}
