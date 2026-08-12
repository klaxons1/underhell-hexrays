int __userpurge sub_101A5BA0@<eax>(_BYTE *a1@<ecx>, float a2@<ebx>, float a3@<edi>, int a4)
{
  _BYTE *v4; // esi
  bool v5; // zf
  _DWORD *v7; // edi
  int v8; // esi
  int v9; // eax
  int v10; // ebx
  int v11; // esi
  int v12; // esi
  float *v13; // eax
  double v14; // st7
  double v15; // st7
  int v16; // edi
  double v17; // st6
  double v18; // st7
  double v19; // st7
  int v20; // esi
  int v21; // eax
  float *v22; // eax
  float *v23; // esi
  char v24; // cl
  int v25; // eax
  int v26; // edi
  int v27; // esi
  int v28; // eax
  float *v29; // eax
  float *v30; // esi
  int v31; // eax
  double v32; // st7
  unsigned __int8 v33; // al
  char v34; // dl
  int v35; // eax
  double v36; // st7
  unsigned __int8 v37; // al
  double v38; // st7
  unsigned __int8 v39; // al
  int v40; // ecx
  int v41; // edi
  int v42; // esi
  int v43; // eax
  float *v44; // eax
  float *v45; // esi
  int v46; // eax
  double v47; // st7
  _DWORD v50[128]; // [esp+38h] [ebp-29Ch] BYREF
  char v51[12]; // [esp+238h] [ebp-9Ch] BYREF
  float v52[3]; // [esp+244h] [ebp-90h] BYREF
  float v53[3]; // [esp+250h] [ebp-84h] BYREF
  float v54[3]; // [esp+25Ch] [ebp-78h] BYREF
  float v55[3]; // [esp+268h] [ebp-6Ch] BYREF
  float v56; // [esp+274h] [ebp-60h]
  float v57; // [esp+278h] [ebp-5Ch]
  float v58; // [esp+27Ch] [ebp-58h]
  float v59; // [esp+280h] [ebp-54h]
  float v60; // [esp+284h] [ebp-50h]
  float v61; // [esp+288h] [ebp-4Ch]
  float v62; // [esp+28Ch] [ebp-48h]
  float v63; // [esp+290h] [ebp-44h]
  float v64; // [esp+294h] [ebp-40h]
  float v65; // [esp+298h] [ebp-3Ch]
  float v66; // [esp+29Ch] [ebp-38h]
  float v67; // [esp+2A0h] [ebp-34h]
  float v68; // [esp+2A4h] [ebp-30h] BYREF
  float v69; // [esp+2A8h] [ebp-2Ch]
  float v70; // [esp+2ACh] [ebp-28h]
  int v71; // [esp+2B0h] [ebp-24h]
  int v72; // [esp+2B4h] [ebp-20h]
  float v73; // [esp+2B8h] [ebp-1Ch] BYREF
  float v74; // [esp+2BCh] [ebp-18h]
  float v75; // [esp+2C0h] [ebp-14h]
  float v76; // [esp+2C4h] [ebp-10h]
  _BYTE *v77; // [esp+2C8h] [ebp-Ch]
  int v78; // [esp+2CCh] [ebp-8h]
  int v79; // [esp+2D0h] [ebp-4h]

  v4 = a1;
  v5 = a1[2148] == 0;
  v77 = a1;
  if ( v5 && !a1[2160] || 0.0 == *((float *)off_103DC81C + 4) )
    return sub_10033BD0((int)a1, a4);
  if ( !a1[116] )
    return 0;
  a1[2160] = 1;
  if ( !sub_101A5A50((_DWORD *)a1 - 1) )
    goto LABEL_24;
  if ( !v4[116] )
    return 0;
  v7 = (_DWORD *)(*(int (__thiscall **)(_BYTE *))(*((_DWORD *)v4 - 1) + 164))(v4 - 4);
  if ( !v7 )
    return 0;
  if ( !sub_10028810((int)v7, v50) )
    return 0;
  v8 = *(_DWORD *)dword_10413178;
  v9 = (*(int (__thiscall **)(_DWORD *))(v7[1] + 36))(v7 + 1);
  v10 = (*(int (__thiscall **)(int, int))(v8 + 112))(dword_10413178, v9);
  if ( !v10 )
    return 0;
  v11 = *(_DWORD *)(v10 + 176) + 12 * sub_10025760(v7);
  v5 = v10 + v11 == 0;
  v12 = v10 + v11;
  v72 = v12;
  if ( v5 )
    return 0;
  if ( !v77[2148] )
  {
    v4 = v77;
LABEL_24:
    v25 = (*(int (__thiscall **)(_BYTE *, const char *))(*(_DWORD *)v4 + 140))(v4, "core");
    (*(void (__thiscall **)(_BYTE *, int, float *, char *))(*(_DWORD *)v4 + 148))(v4, v25, v55, v51);
    v26 = 1;
    v78 = 1;
    while ( 1 )
    {
      v27 = *((_DWORD *)v4 + 541);
      v28 = sub_100F29B0(v27, v26, v27, "effects/strider_muzzle");
      v29 = sub_100F2B60(v27, v27, 60, v28, &flt_10459240);
      v30 = v29;
      if ( !v29 )
        return 1;
      v29[6] = flt_10459240;
      *(_QWORD *)(v29 + 7) = qword_10459244;
      v29[10] = 0.1;
      v29[11] = 0.0;
      v31 = sub_100EB330(0, 360);
      v79 = v31;
      *((_BYTE *)v30 + 48) = -1;
      v30[9] = (float)v31;
      *((_BYTE *)v30 + 49) = -1;
      *((_BYTE *)v30 + 50) = -1;
      v30[14] = 0.0;
      *((_BYTE *)v30 + 51) = -1;
      *((_BYTE *)v30 + 52) = 0;
      if ( v26 - 1 >= 2 )
      {
        v35 = (*(int (__thiscall **)(int, _DWORD, int, float, float))(*(_DWORD *)dword_10413198 + 8))(
                dword_10413198,
                0,
                20,
                COERCE_FLOAT(LODWORD(a3)),
                COERCE_FLOAT(LODWORD(a2)));
        a2 = 2.0;
        a3 = 1.0;
        if ( !v35 )
        {
          v36 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(dword_10413198);
          v37 = (int)(v36 * (double)v78);
          *((_BYTE *)v30 + 53) = v37;
          v79 = (int)((double)v37 * 4.0);
          *((_BYTE *)v30 + 54) = v79;
          v30[10] = 0.25;
          goto LABEL_33;
        }
        v38 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(dword_10413198);
        v39 = (int)(v38 * (double)v78);
        *((_BYTE *)v30 + 53) = v39;
        v79 = (int)((double)v39 + (double)v39);
        v34 = v79;
      }
      else
      {
        v32 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                1.0,
                2.0);
        v33 = (int)(v32 * (double)v78);
        *((_BYTE *)v30 + 53) = v33;
        v79 = (int)((double)v33 + (double)v33);
        v34 = v79;
      }
      *((_BYTE *)v30 + 54) = v34;
LABEL_33:
      v78 = ++v26;
      if ( v26 - 1 >= 4 )
      {
        v40 = (int)v77;
        if ( !v77[2160] || !v77[2148] )
          return sub_10033BD0(v40, a4);
        sub_100F0D40(*((float **)v77 + 543), v55);
        v41 = 0;
        while ( 1 )
        {
          v79 = sub_10115FB0();
          v68 = (double)v79 * 0.000030518509 * 64.0 - 32.0;
          v79 = sub_10115FB0();
          v69 = (double)v79 * 0.000030518509 * 64.0 - 32.0;
          v79 = sub_10115FB0();
          v42 = *((_DWORD *)v77 + 543);
          v73 = v55[0] + v68;
          v74 = v55[1] + v69;
          v75 = (double)v79 * 0.000030518509 * 64.0 - 32.0 + v55[2];
          v43 = sub_100F29B0(v42, v41, v42, "effects/strider_muzzle");
          v44 = sub_100F2B60(v42, v42, 60, v43, &v73);
          v45 = v44;
          if ( !v44 )
            break;
          v44[6] = 0.0;
          v44[7] = 0.0;
          v44[8] = 8.0;
          v44[10] = 0.5;
          v44[11] = 0.0;
          v46 = sub_100EB330(0, 360);
          v79 = v46;
          *((_BYTE *)v45 + 48) = -1;
          *((_BYTE *)v45 + 49) = -1;
          *((_BYTE *)v45 + 50) = -1;
          v45[9] = (float)v46;
          *((_BYTE *)v45 + 51) = -1;
          *((_BYTE *)v45 + 52) = 0;
          v45[14] = 0.0;
          v47 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  1.0,
                  2.0);
          ++v41;
          *((_BYTE *)v45 + 54) = 0;
          v79 = (int)v47;
          *((_BYTE *)v45 + 53) = (int)v47;
          if ( v41 >= 4 )
          {
            v40 = (int)v77;
            return sub_10033BD0(v40, a4);
          }
        }
        return 1;
      }
      v4 = v77;
    }
  }
  v13 = sub_101422E0();
  v73 = *v13 * 4.0;
  v74 = v13[1] * 4.0;
  v14 = 4.0 * v13[2];
  v71 = 0;
  v75 = v14;
  if ( *(int *)(v12 + 4) <= 0 )
    goto LABEL_22;
  v78 = 0;
LABEL_18:
  sub_101A55A0(
    (float *)(v12 + v78 + *(_DWORD *)(v12 + 8)),
    v50[*(_DWORD *)(v12 + v78 + *(_DWORD *)(v12 + 8))],
    v52,
    v54,
    v53);
  v62 = v54[0];
  v63 = v54[1];
  v64 = v54[2];
  v76 = off_103EDFEC() * 0.75;
  v65 = v53[0];
  v66 = v53[1];
  v67 = v53[2];
  v15 = off_103EDFEC() * 0.75;
  v16 = 0;
  v56 = v15 * 0.5;
  v57 = v15 * -0.5;
  v17 = v76;
  v76 = 0.5 * v76;
  v58 = -0.5 * v17;
  while ( 1 )
  {
    v18 = v57;
    sub_100EB300(v57, v56);
    v59 = v65 * v18;
    v60 = v66 * v18;
    v61 = v18 * v67;
    v19 = v58;
    sub_100EB300(v58, v76);
    v20 = *((_DWORD *)v77 + 542);
    v68 = v62 * v19 + v59 + v73 + v52[0];
    v69 = v63 * v19 + v60 + v74 + v52[1];
    v70 = v19 * v64 + v61 + v75 + v52[2];
    v21 = sub_100F29B0(v20, v16, v20, "effects/combinemuzzle1");
    v22 = sub_100F2B60(v20, v20, 60, v21, &v68);
    v23 = v22;
    if ( !v22 )
      return 1;
    v22[6] = flt_10459240;
    *(_QWORD *)(v22 + 7) = qword_10459244;
    *((_BYTE *)v22 + 53) = 16;
    v22[10] = 0.2;
    v22[11] = 0.0;
    v79 = sub_100EB330(0, 360);
    v23[9] = (float)v79;
    sub_100EB300(-2.0, 2.0);
    v24 = *((_BYTE *)v23 + 53);
    v23[14] = -2.0;
    ++v16;
    *((_BYTE *)v23 + 48) = 40;
    *((_BYTE *)v23 + 49) = 40;
    *((_BYTE *)v23 + 50) = 40;
    *((_BYTE *)v23 + 51) = 40;
    *((_BYTE *)v23 + 52) = 0;
    *((_BYTE *)v23 + 54) = 2 * v24;
    if ( v16 >= 3 )
    {
      v78 += 68;
      if ( ++v71 >= *(_DWORD *)(v72 + 4) )
      {
LABEL_22:
        v4 = v77;
        goto LABEL_24;
      }
      v12 = v72;
      goto LABEL_18;
    }
  }
}
