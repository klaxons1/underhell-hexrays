void __thiscall sub_10117C50(int this)
{
  int *v1; // ebx
  bool v2; // zf
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  unsigned int v5; // eax
  float v6; // edi
  _DWORD *v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  int v14; // edi
  double v15; // st7
  int *v16; // edi
  int v17; // eax
  float *v18; // edi
  float *v19; // eax
  double v20; // st7
  _DWORD *v21; // eax
  float *v22; // eax
  int (__thiscall *v23)(_DWORD *, _BYTE *); // edx
  int v24; // eax
  _DWORD *v25; // eax
  float *v26; // eax
  float *v27; // eax
  int v28; // eax
  int (__thiscall *v29)(_DWORD *, _BYTE *); // edx
  float *v30; // edi
  float *v31; // eax
  double v32; // st7
  double v33; // st7
  long double v34; // st7
  long double v37; // st7
  long double v38; // st7
  double v39; // st7
  unsigned int v40; // eax
  int v41; // eax
  int v42; // eax
  unsigned int v43; // eax
  int v44; // eax
  unsigned int *v45; // ebx
  int v46; // eax
  int v47; // eax
  int v48; // eax
  double v49; // st7
  unsigned int v50; // eax
  int v51; // edi
  float *v52; // eax
  double v53; // st7
  unsigned int v54; // eax
  int v55; // ecx
  float *v56; // [esp+18h] [ebp-50h]
  float *v57; // [esp+18h] [ebp-50h]
  float *v58; // [esp+18h] [ebp-50h]
  float v59; // [esp+18h] [ebp-50h]
  float v60; // [esp+18h] [ebp-50h]
  float *v61; // [esp+18h] [ebp-50h]
  _BYTE v62[12]; // [esp+28h] [ebp-40h] BYREF
  float v63; // [esp+34h] [ebp-34h] BYREF
  float v64; // [esp+38h] [ebp-30h]
  float v65; // [esp+3Ch] [ebp-2Ch]
  float v66; // [esp+40h] [ebp-28h] BYREF
  float v67; // [esp+44h] [ebp-24h]
  float v68; // [esp+4Ch] [ebp-1Ch] BYREF
  float v69; // [esp+50h] [ebp-18h]
  float v70; // [esp+54h] [ebp-14h]
  float v71; // [esp+58h] [ebp-10h]
  float v72; // [esp+5Ch] [ebp-Ch]
  float v73; // [esp+60h] [ebp-8h]
  int *v74; // [esp+64h] [ebp-4h]

  v1 = (int *)this;
  v2 = *(_BYTE *)(this + 1268) == 0;
  v74 = (int *)this;
  if ( v2 )
    return;
  v3 = (_DWORD *)(*(int *)(dword_106B31C8 + 20) > 1 ? sub_1025FB50(1) : sub_10261B20());
  v4 = v3;
  if ( !v3 )
    return;
  v5 = v1[285];
  LODWORD(v6) = v1 + 285;
  LODWORD(v73) = v1 + 285;
  if ( v5 != -1 && off_1061BE18[4 * (v5 & 0xFFF) + 2] == v5 >> 12 && off_1061BE18[4 * (v5 & 0xFFF) + 1] )
  {
    v7 = v1 + 286;
    if ( (unsigned __int8)sub_102DC130(v7) )
    {
      if ( (unsigned __int8)sub_102DC130(v74 + 289) )
      {
        v8 = sub_101811E0("point_commentary_viewpoint", -1);
        sub_10019680(v7, v8);
        v56 = (float *)(*(int (__thiscall **)(_DWORD *, float *))(*v4 + 504))(v4, &v63);
        v9 = sub_1026A890(v7);
        sub_100E0D20(v9, v56);
        v57 = (float *)(*(int (__thiscall **)(_DWORD *))(*v4 + 508))(v4);
        v10 = sub_1026A890(v7);
        sub_100E0EA0(v10, v57);
        v11 = sub_1026A890(v7);
        sub_101E7640(v11);
        if ( sub_100CF460(v4) )
        {
          v12 = sub_100CF460(v4);
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 996))(v12, 0);
        }
      }
    }
    v13 = v74[289];
    if ( v13 != -1 )
    {
      if ( off_1061BE18[4 * (v74[289] & 0xFFF) + 2] == v13 >> 12 && off_1061BE18[4 * (v74[289] & 0xFFF) + 1] )
      {
        v14 = sub_1026A890(v74 + 289);
        if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
          sub_100DAE60(v14);
        v68 = *(float *)(v14 + 704);
        v69 = *(float *)(v14 + 708);
        v15 = *(float *)(v14 + 712);
        v16 = v74;
        v70 = v15;
        v73 = COERCE_FLOAT(sub_1026A890(v74 + 285));
        v17 = sub_1026A890(v16 + 289);
        v18 = (float *)v17;
        if ( (*(_DWORD *)(v17 + 252) & 0x800) != 0 )
          sub_100DAE60(v17);
        v19 = (float *)(*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v73) + 576))(COERCE_FLOAT(LODWORD(v73)));
        v63 = *v19 - v18[145];
        v64 = v19[1] - v18[146];
        v20 = v19[2] - v18[147];
        goto LABEL_26;
      }
      v6 = v73;
    }
    if ( sub_1026A890(v7) )
    {
      v21 = (_DWORD *)sub_1026A890(v7);
      v22 = (float *)sub_1001F410(v21);
      v68 = *v22;
      v69 = v22[1];
      v23 = *(int (__thiscall **)(_DWORD *, _BYTE *))(*v4 + 504);
      v70 = v22[2];
      v58 = (float *)v23(v4, v62);
      v24 = sub_1026A890(v7);
      sub_100E0D20(v24, v58);
      v73 = COERCE_FLOAT(sub_1026A890(LODWORD(v6)));
      v25 = (_DWORD *)sub_1026A890(v7);
      v26 = (float *)sub_10019640(v25);
    }
    else
    {
      v27 = (float *)(*(int (__thiscall **)(_DWORD *))(*v4 + 508))(v4);
      v68 = *v27;
      v69 = v27[1];
      v70 = v27[2];
      *(float *)&v28 = COERCE_FLOAT(sub_1026A890(LODWORD(v6)));
      v29 = *(int (__thiscall **)(_DWORD *, _BYTE *))(*v4 + 504);
      v73 = *(float *)&v28;
      v26 = (float *)v29(v4, v62);
    }
    v30 = v26;
    v31 = (float *)(*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v73) + 576))(COERCE_FLOAT(LODWORD(v73)));
    v63 = *v31 - *v30;
    v64 = v31[1] - v30[1];
    v20 = v31[2] - v30[2];
LABEL_26:
    v65 = v20;
    sub_10422540(&v63, &v66);
    v32 = v66;
    sub_10424C10(v66, v68);
    v73 = v32;
    v33 = v67;
    sub_10424C10(v67, v69);
    v71 = v33;
    v34 = __FYL2X__(0.5, 0.6931471805599453094) * 3.3333333 * *(float *)(dword_106B31C8 + 16) * 1.442695040888963407;
    _ST6 = v34;
    __asm { frndint }
    v37 = 1.0 - __FSCALE__(__F2XM1__(v34 - _ST6) + 1.0, _ST6);
    v72 = v37;
    v38 = v37 * v73 + v68;
    v59 = v38;
    sub_10424CA0(v59);
    v68 = v38;
    v39 = v72 * v71 + v69;
    v60 = v39;
    sub_10424CA0(v60);
    v69 = v39;
    v40 = v74[289];
    if ( v40 != -1 && off_1061BE18[4 * (v74[289] & 0xFFF) + 2] == v40 >> 12 && off_1061BE18[4 * (v74[289] & 0xFFF) + 1] )
    {
      v41 = sub_1026A890(v74 + 289);
      sub_100E0EA0(v41, &v68);
    }
    else
    {
      if ( sub_1026A890(v7) )
      {
        v42 = sub_1026A890(v7);
        sub_100E0EA0(v42, &v68);
      }
      sub_101E1CC0(&v68, 0);
    }
    sub_100EC4A0(v74, *(float *)(dword_106B31C8 + 12), off_10615804);
    v1 = v74;
  }
  v43 = v1[288];
  if ( v43 != -1 && off_1061BE18[4 * (v1[288] & 0xFFF) + 2] == v43 >> 12 && off_1061BE18[4 * (v1[288] & 0xFFF) + 1] )
  {
    if ( sub_100CF460(v4) )
    {
      v44 = sub_100CF460(v4);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v44 + 996))(v44, 0);
    }
    v45 = (unsigned int *)(v1 + 289);
    if ( (unsigned __int8)sub_102DC130(v45) )
    {
      v46 = sub_101811E0("point_commentary_viewpoint", -1);
      sub_10019680(v45, v46);
      v61 = (float *)(*(int (__thiscall **)(_DWORD *))(*v4 + 508))(v4);
      v47 = sub_1026A890(v45);
      sub_100E0EA0(v47, v61);
      v48 = sub_1026A890(v45);
      sub_101E7640(v48);
    }
    v49 = (*(float *)(dword_106B31C8 + 12) - *((float *)v74 + 318)) * 0.5;
    if ( v49 <= 1.0 )
    {
      if ( v49 < 0.0 )
        v49 = 0.0;
    }
    else
    {
      v49 = 1.0;
    }
    v50 = v74[288];
    v71 = v49;
    if ( v50 == -1 || off_1061BE18[4 * (v50 & 0xFFF) + 2] != v50 >> 12 )
      v51 = 0;
    else
      v51 = off_1061BE18[4 * (v50 & 0xFFF) + 1];
    if ( (*(_DWORD *)(v51 + 252) & 0x800) != 0 )
      sub_100DAE60(v51);
    v52 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v4 + 504))(v4, v62);
    v63 = (*(float *)(v51 + 580) - *v52) * v71 + *v52;
    v64 = (*(float *)(v51 + 584) - v52[1]) * v71 + v52[1];
    v53 = v71 * (*(float *)(v51 + 588) - v52[2]) + v52[2];
    v54 = *v45;
    v65 = v53;
    if ( v54 == -1 || off_1061BE18[4 * (v54 & 0xFFF) + 2] != v54 >> 12 )
      v55 = 0;
    else
      v55 = off_1061BE18[4 * (v54 & 0xFFF) + 1];
    sub_100E0D20(v55, &v63);
    sub_100EC4A0(v74, *(float *)(dword_106B31C8 + 12), off_10615804);
  }
}
