void __thiscall sub_1019C610(char *this)
{
  int v2; // edi
  float *v3; // ebx
  float *v4; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st7
  double v8; // st7
  double v9; // st5
  double v10; // st7
  bool v11; // bl
  bool v12; // dl
  bool v13; // al
  double v14; // st7
  double v15; // st6
  double v16; // st5
  double v17; // rtt
  double v18; // st5
  const char *v19; // eax
  int v20; // eax
  int v21; // ebx
  int v22; // eax
  int v23; // edi
  int v24; // eax
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  double v29; // st7
  int v30; // eax
  double v31; // st6
  double v32; // st7
  double v33; // st6
  double v34; // rtt
  int v35; // edi
  double v36; // st7
  double v37; // st4
  double v38; // rtt
  double v39; // st4
  float v40; // edx
  float v41; // eax
  float v42; // ecx
  float v43; // edx
  int v44; // ecx
  double v45; // st7
  int v46; // edi
  char v47; // al
  char *v48; // ecx
  int v49; // edi
  char v50; // al
  char *v51; // ecx
  int v52; // edi
  char v53; // al
  char *v54; // ecx
  int v55; // edi
  char v56; // al
  char *v57; // ecx
  int v58; // edi
  char v59; // al
  float v60; // [esp+4h] [ebp-BCh]
  char v61[12]; // [esp+14h] [ebp-ACh] BYREF
  float v62[3]; // [esp+20h] [ebp-A0h] BYREF
  float v63; // [esp+2Ch] [ebp-94h]
  float v64; // [esp+30h] [ebp-90h]
  float v65; // [esp+34h] [ebp-8Ch]
  int v66; // [esp+38h] [ebp-88h] BYREF
  float v67; // [esp+3Ch] [ebp-84h]
  float v68; // [esp+40h] [ebp-80h]
  int v69; // [esp+44h] [ebp-7Ch] BYREF
  float v70; // [esp+48h] [ebp-78h]
  float v71; // [esp+4Ch] [ebp-74h]
  float v72; // [esp+50h] [ebp-70h] BYREF
  float v73; // [esp+54h] [ebp-6Ch]
  float v74; // [esp+58h] [ebp-68h]
  float v75; // [esp+5Ch] [ebp-64h] BYREF
  float v76; // [esp+60h] [ebp-60h]
  float v77; // [esp+64h] [ebp-5Ch]
  float v78; // [esp+68h] [ebp-58h] BYREF
  float v79; // [esp+6Ch] [ebp-54h]
  float v80; // [esp+70h] [ebp-50h]
  int v81; // [esp+74h] [ebp-4Ch] BYREF
  int v82; // [esp+78h] [ebp-48h] BYREF
  int v83; // [esp+7Ch] [ebp-44h] BYREF
  int v84; // [esp+80h] [ebp-40h] BYREF
  int v85; // [esp+84h] [ebp-3Ch] BYREF
  float v86; // [esp+88h] [ebp-38h]
  float v87; // [esp+8Ch] [ebp-34h]
  float v88; // [esp+90h] [ebp-30h] BYREF
  float v89; // [esp+94h] [ebp-2Ch]
  float v90; // [esp+98h] [ebp-28h]
  float v91; // [esp+9Ch] [ebp-24h] BYREF
  float v92; // [esp+A0h] [ebp-20h]
  float v93; // [esp+A4h] [ebp-1Ch]
  float v94; // [esp+A8h] [ebp-18h] BYREF
  float v95; // [esp+ACh] [ebp-14h]
  int v96; // [esp+B0h] [ebp-10h]
  int v97; // [esp+B4h] [ebp-Ch] BYREF
  float v98; // [esp+B8h] [ebp-8h]
  float v99; // [esp+BCh] [ebp-4h]

  v2 = sub_1025FC50();
  if ( v2 )
  {
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v2 + 504))(v2, v62);
    v3 = (float *)sub_101E7560(v2);
    v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 508))(v2);
    *(float *)&v97 = *v3 + *v4;
    v98 = v3[1] + v4[1];
    v99 = v3[2] + v4[2];
    sub_10422220(&v97, v61);
    v5 = v62[0] - *((float *)this + 3);
    v95 = v5;
    v6 = v62[1] - *((float *)this + 4);
    *(float *)&v96 = v6;
    v60 = v5 * v5 + v6 * v6;
    v7 = off_10689708(v60);
    if ( 0.0 == v7 )
    {
      v10 = 0.0;
      v9 = 0.0;
    }
    else
    {
      v8 = 1.0 / v7;
      v9 = v8 * v95;
      v10 = v8 * *(float *)&v96;
    }
    v11 = this == *(char **)(dword_106B8370 + 1172);
    v12 = this == *(char **)(dword_106B8370 + 1180);
    v13 = v10 * *((float *)this + 15) + v9 * *((float *)this + 14) > 0.0;
    if ( *(_DWORD *)(dword_106B8370 + 1124) == 4 )
    {
      v12 = 0;
      v11 = 0;
      v13 = 1;
    }
    v96 = 7;
    if ( v13 )
    {
      if ( v12 )
        v96 = 6;
      else
        v96 = v11 ? 5 : 2;
    }
    else if ( v12 )
    {
      v96 = 6;
    }
    else if ( v11 )
    {
      v96 = 5;
    }
    v75 = 0.0;
    v76 = 0.0;
    v77 = 0.0;
    v63 = 0.0;
    v64 = 0.0;
    v65 = 0.0;
    sub_10421D80(this + 56, &v75);
    v14 = *((float *)this + 7) * 0.5;
    v15 = v75 * v14;
    v75 = v15;
    v16 = v76 * v14;
    v76 = v16;
    v17 = v16;
    v18 = v14 * v77;
    v77 = v18;
    v88 = *((float *)this + 3) - v15;
    v89 = *((float *)this + 4) - v17;
    v90 = *((float *)this + 5) - v18;
    v91 = *((float *)this + 3) + v15;
    v92 = v17 + *((float *)this + 4);
    v93 = v18 + *((float *)this + 5);
    v78 = *(float *)this - v15;
    v79 = *((float *)this + 1) - v17;
    v80 = *((float *)this + 2) - v18;
    v72 = v15 + *(float *)this;
    v73 = v17 + *((float *)this + 1);
    v74 = v18 + *((float *)this + 2);
    if ( (dword_106B7ABC & 0x1000) != 0 )
    {
      v19 = "FCVAR_NEVER_AS_STRING";
    }
    else
    {
      v19 = *(const char **)(dword_106B7AC4 + 36);
      if ( !v19 )
        v19 = String;
    }
    if ( sscanf(v19, "%d %d %d %d", &v81, &v82, &v83, &v84) == 4 )
    {
      v20 = v81 <= 255 ? (v81 < 0 ? 0 : v81) : 255;
      v21 = v20;
      v81 = v20;
      v22 = v82 <= 255 ? (v82 < 0 ? 0 : v82) : 255;
      v23 = v22;
      v82 = v22;
      v24 = v83 <= 255 ? (v83 < 0 ? 0 : v83) : 255;
      v25 = v24;
      v83 = v24;
      v26 = v84 <= 255 ? (v84 < 0 ? 0 : v84) : 255;
      v27 = v26;
      v84 = v26;
      if ( v26 > 0 )
      {
        v28 = *((_DWORD *)this + 13);
        *(float *)&v97 = 0.0;
        v29 = 0.0;
        v98 = 0.0;
        switch ( v28 )
        {
          case 0:
            v30 = 2;
            break;
          case 1:
            v30 = 3;
            break;
          case 3:
            v30 = 1;
            break;
          default:
            v30 = 0;
            break;
        }
        switch ( v30 )
        {
          case 0:
            v31 = -1.0;
            v98 = -1.0;
            break;
          case 1:
            v32 = 0.0;
            v33 = 1.0;
            goto LABEL_43;
          case 2:
            v31 = 1.0;
            v98 = 1.0;
            break;
          case 3:
            v32 = 0.0;
            v33 = -1.0;
LABEL_43:
            *(float *)&v97 = v33;
            v34 = v33;
            v31 = v32;
            v29 = v34;
            break;
        }
        *(float *)&v66 = v29 + v91;
        v67 = v92 + v31;
        v68 = v93;
        *(float *)&v69 = v72 + v29;
        v70 = v73 + v31;
        v71 = v74;
        *(float *)&v85 = v29 + v78;
        v86 = v31 + v79;
        v87 = v80;
        sub_1011BE00((float *)&v85, (float *)&v69, (float *)&v66, v21, v23, v25, v27, 1, 0.15000001);
        *(float *)&v85 = v78 + *(float *)&v97;
        v86 = v79 + v98;
        v87 = v80;
        *(float *)&v69 = *(float *)&v97 + v88;
        v70 = v89 + v98;
        v71 = v90;
        *(float *)&v66 = *(float *)&v97 + v91;
        v67 = v98 + v92;
        v68 = v93;
        sub_1011BE00((float *)&v66, (float *)&v69, (float *)&v85, v81, v82, v83, v84, 1, 0.15000001);
      }
    }
    v35 = v96;
    sub_10191A10((int)&v78, (int)&v88, v96);
    sub_10191A10((int)&v72, (int)&v91, v35);
    if ( v74 > (double)v93 )
    {
      do
      {
        sub_10191A10((int)&v91, (int)&v88, v35);
        v36 = v63 * 12.5;
        v37 = v64 * 12.5;
        v91 = v36 + v91;
        v92 = v37 + v92;
        v38 = v37;
        v39 = 12.5 * v65 + v93;
        v93 = v39;
        v88 = v36 + v88;
        v89 = v38 + v89;
        v90 = 12.5 * v65 + v90;
      }
      while ( v39 < v74 );
    }
    if ( *(_DWORD *)(dword_106B8370 + 1124) != 4 )
    {
      v40 = *((float *)this + 4);
      v41 = *((float *)this + 5);
      v97 = *((int *)this + 3);
      v42 = *(float *)this;
      v98 = v40;
      v43 = *((float *)this + 1);
      v94 = v42;
      v95 = v43;
      v99 = v41;
      v96 = *((int *)this + 2);
      sub_10191A10((int)&v94, (int)&v97, 15);
      v44 = *((_DWORD *)this + 12);
      if ( v44 )
      {
        v45 = 25.0;
        v46 = v44 + 28;
        if ( *(float *)&v96 - v99 < 37.5 )
          v45 = 0.0;
        if ( v99 - *(float *)(v44 + 36) > 37.5 )
          v45 = 0.0;
        v85 = v97;
        v86 = v98;
        v87 = v45 + v99;
        v47 = sub_1018D020((char *)v44, (int)this, 0);
        sub_10191A10((int)&v85, v46, 16 - (v47 != 0));
      }
      if ( *((_DWORD *)this + 8) )
      {
        v48 = (char *)*((_DWORD *)this + 8);
        v49 = (int)(v48 + 28);
        v50 = sub_1018D020(v48, (int)this, 1);
        sub_10191A10((int)&v94, v49, 16 - (v50 != 0));
      }
      if ( *((_DWORD *)this + 9) )
      {
        v51 = (char *)*((_DWORD *)this + 9);
        v52 = (int)(v51 + 28);
        v53 = sub_1018D020(v51, (int)this, 1);
        sub_10191A10((int)&v94, v52, 16 - (v53 != 0));
      }
      if ( *((_DWORD *)this + 10) )
      {
        v54 = (char *)*((_DWORD *)this + 10);
        v55 = (int)(v54 + 28);
        v56 = sub_1018D020(v54, (int)this, 1);
        sub_10191A10((int)&v94, v55, 16 - (v56 != 0));
      }
      if ( *((_DWORD *)this + 11) )
      {
        v57 = (char *)*((_DWORD *)this + 11);
        v58 = (int)(v57 + 28);
        v59 = sub_1018D020(v57, (int)this, 1);
        sub_10191A10((int)&v94, v58, 16 - (v59 != 0));
      }
    }
  }
}
