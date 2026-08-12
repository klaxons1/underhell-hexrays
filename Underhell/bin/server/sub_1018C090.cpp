int __thiscall sub_1018C090(int this)
{
  int v1; // edi
  char v2; // bl
  int v4; // ecx
  float v5; // eax
  int v6; // eax
  double v7; // st7
  double v8; // st6
  double v9; // st5
  double v10; // st4
  const char *v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  _DWORD *v18; // eax
  int v19; // eax
  int result; // eax
  double v21; // st7
  double v22; // st5
  double v23; // st3
  double v24; // st6
  double v25; // st5
  double v26; // st3
  double v27; // st6
  double v28; // st5
  double v29; // st3
  double v30; // st6
  double v31; // st5
  double v32; // st7
  double v33; // st6
  double v34; // st5
  double v35; // st3
  double v36; // st5
  double v37; // st3
  double v38; // st6
  double v39; // st5
  double v40; // st3
  double v41; // st5
  double v42; // st3
  double v43; // st6
  double v44; // st6
  double v45; // st4
  double v46; // st4
  double v47; // st4
  double v48; // st6
  int v49; // esi
  double v50; // st5
  double v51; // st5
  float v52; // [esp+0h] [ebp-B8h]
  float v53[3]; // [esp+14h] [ebp-A4h] BYREF
  _BYTE v54[12]; // [esp+20h] [ebp-98h] BYREF
  _BYTE v55[12]; // [esp+2Ch] [ebp-8Ch] BYREF
  _BYTE v56[12]; // [esp+38h] [ebp-80h] BYREF
  int v57; // [esp+44h] [ebp-74h] BYREF
  int v58; // [esp+48h] [ebp-70h] BYREF
  int v59; // [esp+4Ch] [ebp-6Ch] BYREF
  int v60; // [esp+50h] [ebp-68h] BYREF
  int v61; // [esp+54h] [ebp-64h] BYREF
  float v62; // [esp+58h] [ebp-60h]
  float v63; // [esp+5Ch] [ebp-5Ch]
  int v64; // [esp+60h] [ebp-58h] BYREF
  float v65; // [esp+64h] [ebp-54h]
  float v66; // [esp+68h] [ebp-50h]
  int v67; // [esp+6Ch] [ebp-4Ch] BYREF
  float v68; // [esp+70h] [ebp-48h]
  float v69; // [esp+74h] [ebp-44h]
  int v70; // [esp+78h] [ebp-40h] BYREF
  float v71; // [esp+7Ch] [ebp-3Ch]
  float v72; // [esp+80h] [ebp-38h]
  int v73; // [esp+84h] [ebp-34h] BYREF
  float v74; // [esp+88h] [ebp-30h]
  float v75; // [esp+8Ch] [ebp-2Ch]
  int v76; // [esp+90h] [ebp-28h] BYREF
  float v77; // [esp+94h] [ebp-24h]
  float v78; // [esp+98h] [ebp-20h]
  int v79; // [esp+9Ch] [ebp-1Ch] BYREF
  float v80; // [esp+A0h] [ebp-18h]
  float v81; // [esp+A4h] [ebp-14h]
  int v82; // [esp+A8h] [ebp-10h] BYREF
  float v83; // [esp+ACh] [ebp-Ch]
  float v84; // [esp+B0h] [ebp-8h]
  char v85; // [esp+B7h] [ebp-1h]
  int savedregs; // [esp+B8h] [ebp+0h] BYREF

  v1 = 4;
  v2 = 1;
  v85 = 1;
  if ( *(_DWORD *)(dword_106B8370 + 1124) == 4 )
  {
    v4 = *(_DWORD *)(this + 44);
    v85 = 0;
    v2 = 0;
    if ( v4 )
      v1 = (*(_DWORD *)(dword_106B8370 + 1068) != v4) + 2;
  }
  else if ( this == *(_DWORD *)(dword_106B8370 + 1088) )
  {
    v85 = 0;
    v2 = 0;
    v1 = 6;
  }
  else if ( this == *(_DWORD *)(dword_106B8370 + 1092) )
  {
    v1 = 5;
  }
  else
  {
    v1 = 2 * (*(_BYTE *)(this + 48) != 0) + 7;
  }
  if ( *(float *)(this + 16) <= (double)*(float *)(this + 4) || *(float *)(this + 20) <= (double)*(float *)(this + 8) )
  {
    if ( (dword_106B7B98 & 1) != 0 )
    {
      if ( flt_106B7B94 > 0.0 && sub_10264FF0(&flt_106B7B94) - flt_106B7B94 <= 1.0 )
        goto LABEL_16;
    }
    else
    {
      dword_106B7B98 |= 1u;
      flt_106B7B94 = -1.0;
    }
    flt_106B7B94 = sub_10264FF0(&flt_106B7B94);
    byte_106B7B90 = byte_106B7B90 == 0;
LABEL_16:
    v5 = *(float *)this;
    v85 = 0;
    v1 = byte_106B7B90 == 0;
    v6 = sub_1025F440("Degenerate area %d", SLOBYTE(v5));
    sub_1011CF30((float *)(this + 28), v6, 1, 0.1);
    v2 = 0;
  }
  v7 = *(float *)(this + 4);
  v67 = *(int *)(this + 4);
  v8 = *(float *)(this + 8);
  v68 = *(float *)(this + 8);
  v69 = *(float *)(this + 12);
  v9 = *(float *)(this + 16);
  v70 = *(int *)(this + 16);
  v10 = *(float *)(this + 20);
  v71 = *(float *)(this + 20);
  v72 = *(float *)(this + 24);
  *(float *)&v61 = v9;
  v62 = v8;
  v63 = *(float *)(this + 52);
  *(float *)&v64 = v7;
  v65 = v10;
  v66 = *(float *)(this + 56);
  if ( (dword_106B7ABC & 0x1000) != 0 )
  {
    v11 = "FCVAR_NEVER_AS_STRING";
  }
  else
  {
    v11 = *(const char **)(dword_106B7AC4 + 36);
    if ( !v11 )
      v11 = String;
  }
  if ( sscanf(v11, "%d %d %d %d", &v57, &v58, &v59, &v60) == 4 )
  {
    v12 = v57 <= 255 ? (v57 < 0 ? 0 : v57) : 255;
    v57 = v12;
    v13 = v58 <= 255 ? (v58 < 0 ? 0 : v58) : 255;
    v14 = v13;
    v58 = v13;
    v15 = v59 <= 255 ? (v59 < 0 ? 0 : v59) : 255;
    v16 = v15;
    v59 = v15;
    if ( v60 <= 255 )
    {
      v17 = v60 < 0 ? 0 : v60;
      v2 = v85;
    }
    else
    {
      v17 = 255;
    }
    v60 = v17;
    if ( v17 > 0 )
    {
      v76 = v61;
      v77 = v62;
      v78 = v63 + 0.80000001;
      v73 = v70;
      v74 = v71;
      v75 = v72 + 0.80000001;
      v82 = v67;
      v83 = v68;
      v84 = v69 + 0.80000001;
      sub_1011BE00((float *)&v82, (float *)&v73, (float *)&v76, v57, v14, v16, v17, 1, 0.15000001);
      v76 = v64;
      v77 = v65;
      v78 = v66 + 0.80000001;
      v73 = v67;
      v74 = v68;
      v75 = v69 + 0.80000001;
      v82 = v70;
      v83 = v71;
      v84 = v72 + 0.80000001;
      sub_1011BE00((float *)&v82, (float *)&v73, (float *)&v76, v57, v58, v59, v60, 1, 0.15000001);
    }
  }
  *(float *)&v67 = *(float *)&v67 + 0.2;
  v68 = v68 + 0.2;
  *(float *)&v61 = *(float *)&v61 - 0.2;
  v62 = v62 + 0.2;
  *(float *)&v64 = *(float *)&v64 + 0.2;
  v65 = v65 - 0.2;
  *(float *)&v70 = *(float *)&v70 - 0.2;
  v71 = v71 - 0.2;
  if ( (*(_WORD *)(this + 40) & 0x100) != 0 )
  {
    sub_10191C20(&v67, &v61, v1);
    sub_10191C20(&v61, &v70, v1);
    sub_10191C20(&v70, &v64, v1);
    sub_10191C20(&v64, &v67, v1);
  }
  else
  {
    sub_10191A10(&v67, &v61, v1);
    sub_10191A10(&v61, &v70, v1);
    sub_10191A10(&v70, &v64, v1);
    sub_10191A10(&v64, &v67, v1);
  }
  v18 = (_DWORD *)dword_106B8370;
  if ( this != *(_DWORD *)(dword_106B8370 + 1088) )
    goto LABEL_82;
  if ( *(_DWORD *)(dword_106B8370 + 1100) != 4 )
  {
    sub_1018BCE0((float *)this, (int)&savedregs, *(_DWORD *)(dword_106B8370 + 1100), v53);
    sub_10191A10(v54, v55, 6);
    sub_10191A10(v55, v56, 6);
    v18 = (_DWORD *)dword_106B8370;
  }
  if ( this != v18[272] )
  {
LABEL_82:
    if ( this == v18[273] && !v18[281] )
    {
      v19 = sub_1018C040((float *)this);
      sub_1018BCE0((float *)this, (int)&savedregs, v19, v53);
      sub_10191A10(v54, v55, 5);
      sub_10191A10(v55, v56, 5);
    }
  }
  if ( (*(_BYTE *)(this + 40) & 1) != 0 )
  {
    if ( v2 )
      v1 = 21;
    sub_10191A10(&v67, &v70, v1);
  }
  result = *(unsigned __int16 *)(this + 40);
  if ( (result & 2) != 0 )
  {
    if ( v2 )
      v1 = 22;
    if ( (result & 1) == 0 )
      sub_10191A10(&v67, &v70, v1);
    result = sub_10191A10(&v61, &v64, v1);
  }
  v21 = 8.0;
  if ( (*(_BYTE *)(this + 40) & 4) != 0 )
  {
    if ( v2 )
      v1 = 23;
    v73 = *(int *)(this + 28);
    v74 = *(float *)(this + 32) - 8.0;
    v75 = *(float *)(this + 36);
    v76 = *(int *)(this + 28);
    v77 = *(float *)(this + 32) + 8.0;
    v78 = *(float *)(this + 36);
    sub_10191A10(&v73, &v76, v1);
    *(float *)&v79 = *(float *)(this + 28) - 8.0;
    v80 = *(float *)(this + 32);
    v81 = *(float *)(this + 36);
    *(float *)&v82 = *(float *)(this + 28) + 8.0;
    v83 = *(float *)(this + 32);
    v84 = *(float *)(this + 36);
    result = sub_10191A10(&v79, &v82, v1);
    v21 = 8.0;
  }
  if ( (*(_BYTE *)(this + 40) & 8) != 0 )
  {
    if ( v2 )
      v1 = 24;
    v73 = *(int *)(this + 28);
    v74 = *(float *)(this + 32) - v21;
    v75 = *(float *)(this + 36);
    v79 = *(int *)(this + 28);
    v80 = *(float *)(this + 32) + v21;
    v81 = *(float *)(this + 36);
    *(float *)&v76 = *(float *)(this + 28) - v21;
    v77 = *(float *)(this + 32);
    v78 = *(float *)(this + 36);
    *(float *)&v82 = v21 + *(float *)(this + 28);
    v83 = *(float *)(this + 32);
    v84 = *(float *)(this + 36);
    sub_10191A10(&v73, &v82, v1);
    sub_10191A10(&v82, &v79, v1);
    sub_10191A10(&v79, &v76, v1);
    result = sub_10191A10(&v76, &v73, v1);
    v21 = 8.0;
  }
  if ( (*(_BYTE *)(this + 40) & 0x10) != 0 )
  {
    if ( v2 )
      v1 = 25;
    v22 = *(float *)(this + 32);
    v23 = *(float *)(this + 36);
    *(float *)&v82 = v21 + *(float *)(this + 28);
    v83 = v22 - 3.2;
    v84 = v23;
    v24 = *(float *)(this + 32) + 3.2;
    v79 = v82;
    v80 = v24;
    v81 = v23;
    sub_10191A10(&v82, &v79, v1);
    v25 = *(float *)(this + 32);
    v26 = *(float *)(this + 36);
    *(float *)&v82 = *(float *)(this + 28) + 8.0;
    v83 = v25 + 3.2;
    v84 = v26;
    v27 = *(float *)(this + 32) + 8.0;
    *(float *)&v79 = *(float *)(this + 28) + 3.2;
    v80 = v27;
    v81 = v26;
    sub_10191A10(&v82, &v79, v1);
    v28 = *(float *)(this + 32) - 3.2;
    v29 = *(float *)(this + 36);
    *(float *)&v82 = *(float *)(this + 28) - 8.0;
    v83 = v28;
    v84 = v29;
    v30 = *(float *)(this + 32) + 3.2;
    v79 = v82;
    v80 = v30;
    v81 = v29;
    sub_10191A10(&v82, &v79, v1);
    v31 = *(float *)(this + 32);
    v32 = *(float *)(this + 36);
    *(float *)&v82 = *(float *)(this + 28) - 8.0;
    v83 = v31 + 3.2;
    v84 = v32;
    v33 = *(float *)(this + 32) + 8.0;
    *(float *)&v79 = *(float *)(this + 28) - 3.2;
    v80 = v33;
    v81 = v32;
    sub_10191A10(&v82, &v79, v1);
    v34 = *(float *)(this + 32) + 8.0;
    v35 = *(float *)(this + 36);
    *(float *)&v82 = *(float *)(this + 28) - 3.2;
    v83 = v34;
    v84 = v35;
    *(float *)&v79 = *(float *)(this + 28) + 3.2;
    v80 = v34;
    v81 = v35;
    sub_10191A10(&v82, &v79, v1);
    v36 = *(float *)(this + 32);
    v37 = *(float *)(this + 36);
    *(float *)&v82 = *(float *)(this + 28) - 8.0;
    v83 = v36 - 3.2;
    v84 = v37;
    v38 = *(float *)(this + 32) - 8.0;
    *(float *)&v79 = *(float *)(this + 28) - 3.2;
    v80 = v38;
    v81 = v37;
    sub_10191A10(&v82, &v79, v1);
    v39 = *(float *)(this + 32) - 8.0;
    v40 = *(float *)(this + 36);
    *(float *)&v82 = *(float *)(this + 28) - 3.2;
    v83 = v39;
    v84 = v40;
    *(float *)&v79 = *(float *)(this + 28) + 3.2;
    v80 = v39;
    v81 = v40;
    sub_10191A10(&v82, &v79, v1);
    v41 = *(float *)(this + 32);
    v42 = *(float *)(this + 36);
    *(float *)&v82 = *(float *)(this + 28) + 3.2;
    v83 = v41 - 8.0;
    v84 = v42;
    v43 = *(float *)(this + 32) - 3.2;
    *(float *)&v79 = *(float *)(this + 28) + 8.0;
    v80 = v43;
    v81 = v42;
    result = sub_10191A10(&v82, &v79, v1);
    v21 = 8.0;
  }
  v44 = 4.0;
  if ( (*(_BYTE *)(this + 40) & 0x40) != 0 )
  {
    if ( v2 )
      v1 = 27;
    *(float *)&v76 = *(float *)(this + 28) + v21;
    v77 = *(float *)(this + 32);
    v45 = *(float *)(this + 36);
    v78 = *(float *)(this + 36);
    *(float *)&v73 = *(float *)(this + 28) - v21;
    v74 = v77;
    v75 = v45;
    result = sub_10191B30((int)&v73, (int)&v76, 4.0, v1);
    v21 = 8.0;
    v44 = 4.0;
  }
  if ( (*(_BYTE *)(this + 40) & 0x20) != 0 )
  {
    if ( v2 )
      v1 = 26;
    *(float *)&v76 = *(float *)(this + 28) + v21;
    v77 = *(float *)(this + 32) + v44;
    v46 = *(float *)(this + 36);
    v78 = *(float *)(this + 36);
    *(float *)&v73 = *(float *)(this + 28) - v21;
    v74 = v77;
    v75 = v46;
    v52 = v44;
    sub_10191B30((int)&v73, (int)&v76, v52, v1);
    *(float *)&v76 = *(float *)(this + 28) + 8.0;
    v77 = *(float *)(this + 32) - 4.0;
    v47 = *(float *)(this + 36);
    v78 = *(float *)(this + 36);
    *(float *)&v73 = *(float *)(this + 28) - 8.0;
    v74 = v77;
    v75 = v47;
    result = sub_10191B30((int)&v73, (int)&v76, 4.0, v1);
    v21 = 8.0;
  }
  if ( *(char *)(this + 40) < 0 )
  {
    if ( v2 )
      v1 = 28;
    v48 = *(float *)(this + 28);
    v49 = this + 28;
    *(float *)&v76 = v48 + 3.0;
    v77 = v21 + *(float *)(v49 + 4);
    v50 = *(float *)(v49 + 8);
    v78 = *(float *)(v49 + 8);
    *(float *)&v73 = *(float *)v49 - 3.0;
    v74 = v77;
    v75 = v50;
    sub_10191AF0(v49, &v73, &v76, v1);
    *(float *)&v76 = *(float *)v49 + 2.0;
    v77 = *(float *)(v49 + 4) - 6.0;
    v51 = *(float *)(v49 + 8);
    v78 = *(float *)(v49 + 8);
    *(float *)&v73 = *(float *)v49 - 2.0;
    v74 = v77;
    v75 = v51;
    v82 = *(int *)v49;
    v83 = *(float *)(v49 + 4) - 3.0;
    v84 = v75;
    return sub_10191AF0(&v82, &v73, &v76, v1);
  }
  return result;
}
