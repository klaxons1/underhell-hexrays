int __usercall sub_1025C9A0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // ecx
  int *v9; // eax
  unsigned int v10; // ecx
  int result; // eax
  int v12; // eax
  _DWORD *v13; // edi
  unsigned int v14; // eax
  int *v15; // ecx
  int v16; // eax
  int v17; // eax
  const char *v18; // eax
  unsigned int v19; // eax
  int v20; // eax
  unsigned int v21; // eax
  _BYTE *v22; // ecx
  _BYTE *v23; // edi
  unsigned int v24; // eax
  int v25; // ecx
  int v26; // eax
  char *v27; // eax
  unsigned int v28; // eax
  bool v29; // zf
  int v30; // eax
  int v31; // eax
  int v32; // ecx
  const char *v33; // eax
  const char *v34; // edx
  const char *v35; // ecx
  int v36; // eax
  const char *v37; // ecx
  int v38; // eax
  int v39; // eax
  const char *v40; // edx
  const char *v41; // ecx
  const char *v42; // eax
  unsigned int v43; // eax
  int *v44; // ecx
  char *v45; // edx
  unsigned int v46; // eax
  int v47; // eax
  float *v48; // ecx
  unsigned int v49; // eax
  int v50; // ecx
  float *v51; // eax
  unsigned int v52; // eax
  int v53; // ecx
  int v54; // eax
  unsigned int v55; // eax
  int v56; // edi
  int v57; // ecx
  double v58; // st7
  _DWORD *v59; // edi
  _DWORD *v60; // eax
  unsigned int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // edi
  char *v66; // [esp+10h] [ebp-30h]
  _BYTE v68[12]; // [esp+20h] [ebp-20h] BYREF
  float v69; // [esp+2Ch] [ebp-14h] BYREF
  float v70; // [esp+30h] [ebp-10h]
  float v71; // [esp+34h] [ebp-Ch]
  float v72; // [esp+38h] [ebp-8h]
  _DWORD *v73; // [esp+3Ch] [ebp-4h]

  *(_DWORD *)(a1 + 848) = 1;
  v3 = *(_DWORD *)(a1 + 800);
  if ( v3 == -1
    || (v4 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 800) & 0xFFF) + 1], v5 = v3 >> 12, v4[1] != v5)
    || !*v4
    || (v4[1] != v5 ? (v6 = 0) : (v6 = *v4), !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 320))(v6)) )
  {
    v7 = sub_10261B20();
    if ( v7 )
      *(_DWORD *)(a1 + 800) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
    else
      *(_DWORD *)(a1 + 800) = -1;
  }
  v8 = *(_DWORD *)(a1 + 800);
  if ( v8 == -1 )
    return sub_100D8500((_DWORD *)a1);
  v9 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 800) & 0xFFF) + 1];
  v10 = v8 >> 12;
  if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 800) & 0xFFF) + 2] != v10 || !*v9 )
    return sub_100D8500((_DWORD *)a1);
  if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 800) & 0xFFF) + 2] == v10 )
    v12 = *v9;
  else
    v12 = 0;
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 320))(v12) )
    return Warning("CTriggerCamera could not find a player!\n");
  if ( *(_DWORD *)(a1 + 800) == -1
    || off_1061BE18[4 * (*(_DWORD *)(a1 + 800) & 0xFFF) + 2] != *(_DWORD *)(a1 + 800) >> 12 )
  {
    v13 = 0;
  }
  else
  {
    v13 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(a1 + 800) & 0xFFF) + 1];
  }
  v14 = v13[1066];
  v73 = v13;
  if ( v14 != -1 )
  {
    v15 = &off_1061BE18[4 * (v14 & 0xFFF) + 1];
    if ( off_1061BE18[4 * (v14 & 0xFFF) + 2] == v14 >> 12 )
    {
      v16 = *v15;
      if ( *v15 )
      {
        if ( (_DWORD *)v16 != v13 )
        {
          v17 = __RTDynamicCast(
                  v16,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                  (int)&CTriggerCamera `RTTI Type Descriptor',
                  0);
          if ( v17 )
          {
            if ( v17 == a1 )
            {
              v18 = sub_100D6390((_DWORD *)a1);
              return Warning("Viewcontrol %s was enabled twice in a row!\n", v18);
            }
            sub_10259E20(v17);
          }
        }
      }
    }
  }
  *(_DWORD *)(a1 + 904) = v13[823];
  v19 = *(_DWORD *)(a1 + 800);
  if ( v19 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 800) & 0xFFF) + 2] != v19 >> 12 )
    v20 = 0;
  else
    v20 = off_1061BE18[4 * (*(_DWORD *)(a1 + 800) & 0xFFF) + 1];
  *(_DWORD *)(a1 + 908) = *(char *)(v20 + 225);
  v21 = *(_DWORD *)(a1 + 800);
  if ( v21 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 800) & 0xFFF) + 2] != v21 >> 12 )
    v22 = 0;
  else
    v22 = (_BYTE *)off_1061BE18[4 * (*(_DWORD *)(a1 + 800) & 0xFFF) + 1];
  v23 = v22 + 225;
  if ( v22[225] )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)v22 + 480))(v22, v22 + 225);
    *v23 = 0;
  }
  if ( (*(_DWORD *)(a1 + 248) & 0x20) != 0 )
  {
    v24 = *(_DWORD *)(a1 + 800);
    if ( v24 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 800) & 0xFFF) + 2] != v24 >> 12 )
      v25 = 0;
    else
      v25 = off_1061BE18[4 * (*(_DWORD *)(a1 + 800) & 0xFFF) + 1];
    sub_101129A0((unsigned __int16 *)(v25 + 320), *(_WORD *)(v25 + 356) | 4);
  }
  v26 = *(_DWORD *)(a1 + 248);
  *(float *)(a1 + 820) = *(float *)(a1 + 816) + *(float *)(dword_106B31C8 + 12);
  *(float *)(a1 + 108) = *(float *)(a1 + 836);
  *(float *)(a1 + 832) = *(float *)(a1 + 836);
  if ( (v26 & 0x10) != 0 )
    *(_BYTE *)(a1 + 872) = 1;
  if ( (v26 & 2) != 0 )
  {
    *(_DWORD *)(a1 + 804) = *(_DWORD *)(a1 + 800);
  }
  else
  {
    v27 = sub_100D8070((_DWORD *)a1);
    if ( v27 )
      *(_DWORD *)(a1 + 804) = *(_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)v27 + 8))(v27);
    else
      *(_DWORD *)(a1 + 804) = -1;
  }
  v28 = *(_DWORD *)(a1 + 804);
  if ( v28 != -1 && off_1061BE18[4 * (*(_DWORD *)(a1 + 804) & 0xFFF) + 2] == v28 >> 12 )
  {
    if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 804) & 0xFFF) + 1] )
    {
      v29 = *(_DWORD *)(a1 + 864) == 0;
      *(_DWORD *)(a1 + 868) = 0;
      if ( !v29 )
      {
        v30 = sub_1026A890(a1 + 804);
        v31 = (*(int (__thiscall **)(int))(*(_DWORD *)v30 + 208))(v30);
        v32 = a1 + 804;
        if ( v31 )
        {
          v36 = sub_1026A890(v32);
          v37 = *(const char **)(a1 + 864);
          if ( !v37 )
            v37 = String;
          v66 = (char *)v37;
          v38 = (*(int (__thiscall **)(int))(*(_DWORD *)v36 + 208))(v36);
          v39 = sub_100BEF30(v38, v66);
          *(_DWORD *)(a1 + 868) = v39;
          if ( !v39 )
          {
            v40 = *(const char **)(sub_1026A890(a1 + 804) + 260);
            if ( !v40 )
              v40 = String;
            v41 = *(const char **)(a1 + 864);
            if ( !v41 )
              v41 = String;
            v42 = *(const char **)(a1 + 92);
            if ( !v42 )
              v42 = String;
            Warning("%s could not find attachment %s on target %s.\n", v42, v41, v40);
          }
        }
        else
        {
          v33 = *(const char **)(sub_1026A890(v32) + 260);
          if ( !v33 )
            v33 = String;
          v34 = *(const char **)(a1 + 864);
          if ( !v34 )
            v34 = String;
          v35 = *(const char **)(a1 + 92);
          if ( !v35 )
            v35 = String;
          Warning("%s tried to target an attachment (%s) on target %s, which has no model.\n", v35, v34, v33);
        }
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 248) & 4) != 0 )
  {
    v43 = *(_DWORD *)(a1 + 800);
    if ( v43 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 800) & 0xFFF) + 2] != v43 >> 12 )
      v44 = 0;
    else
      v44 = (int *)off_1061BE18[4 * (*(_DWORD *)(a1 + 800) & 0xFFF) + 1];
    sub_101E3190(v44, 0);
  }
  v45 = *(char **)(a1 + 812);
  if ( v45 )
  {
    v46 = *(_DWORD *)(a1 + 800);
    if ( v46 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 800) & 0xFFF) + 2] != v46 >> 12 )
      v47 = 0;
    else
      v47 = off_1061BE18[4 * (*(_DWORD *)(a1 + 800) & 0xFFF) + 1];
    *(_DWORD *)(a1 + 808) = sub_1012BF20(&dword_1069E3E0, 0, v45, 0, v47, 0, 0);
  }
  else
  {
    *(_DWORD *)(a1 + 808) = 0;
  }
  v48 = *(float **)(a1 + 808);
  *(float *)(a1 + 824) = *(float *)(dword_106B31C8 + 12);
  if ( v48 )
  {
    if ( 0.0 != v48[27] )
      *(float *)(a1 + 832) = v48[27];
    *(float *)(a1 + 824) = ((double (__thiscall *)(float *))*(_DWORD *)(*(_DWORD *)v48 + 292))(v48)
                         + *(float *)(a1 + 824);
  }
  if ( *(_BYTE *)(a1 + 873) )
  {
    v49 = *(_DWORD *)(a1 + 800);
    if ( v49 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 800) & 0xFFF) + 2] != v49 >> 12 )
      v50 = 0;
    else
      v50 = off_1061BE18[4 * (*(_DWORD *)(a1 + 800) & 0xFFF) + 1];
    v51 = (float *)(*(int (__thiscall **)(int, float *, int))(*(_DWORD *)v50 + 504))(v50, &v69, a2);
    *(float *)(a1 + 876) = *v51;
    *(float *)(a1 + 880) = v51[1];
    *(float *)(a1 + 884) = v51[2];
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    *(float *)(a1 + 888) = *(float *)(a1 + 580);
    *(float *)(a1 + 892) = *(float *)(a1 + 584);
    *(float *)(a1 + 896) = *(float *)(a1 + 588);
    *(float *)(a1 + 900) = *(float *)(dword_106B31C8 + 12);
    v52 = *(_DWORD *)(a1 + 800);
    if ( v52 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 800) & 0xFFF) + 2] != v52 >> 12 )
      v53 = 0;
    else
      v53 = off_1061BE18[4 * (*(_DWORD *)(a1 + 800) & 0xFFF) + 1];
    v54 = (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 504))(v53);
    sub_1025F370(a1, v54, (char)&v69);
    v55 = *(_DWORD *)(a1 + 800);
    if ( v55 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 800) & 0xFFF) + 2] != *(_DWORD *)(a1 + 800) >> 12 )
      v56 = 0;
    else
      v56 = off_1061BE18[4 * (*(_DWORD *)(a1 + 800) & 0xFFF) + 1];
    if ( v55 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 800) & 0xFFF) + 2] != v55 >> 12 )
      v57 = 0;
    else
      v57 = off_1061BE18[4 * (*(_DWORD *)(a1 + 800) & 0xFFF) + 1];
    v58 = *(float *)(v56 + 732);
    v69 = *(float *)(v57 + 728);
    v70 = v58;
    v71 = 0.0;
    sub_100E11A0(a1, &v69);
  }
  else if ( (*(_BYTE *)(a1 + 248) & 1) != 0 )
  {
    v62 = sub_1026A890(a1 + 800);
    v63 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v62 + 504))(v62, v68);
    sub_1025F370(a1, v63, 0);
    v72 = *(float *)(sub_1026A890(a1 + 800) + 732);
    v69 = *(float *)(sub_1026A890(a1 + 800) + 728);
    v70 = v72;
    v71 = 0.0;
    sub_100E11A0(a1, &v69);
    v64 = sub_1026A890(a1 + 800);
    v65 = v64;
    if ( (*(_DWORD *)(v64 + 252) & 0x1000) != 0 )
      sub_100DAFD0(v64);
    sub_100DD660(a1, (float *)(v65 + 476));
    goto LABEL_114;
  }
  sub_100DD660(a1, &flt_106F1CA8);
LABEL_114:
  v59 = v73;
  sub_101E7640(v73, a1);
  if ( sub_100CF460(v59) )
  {
    v60 = (_DWORD *)sub_100CF460(v59);
    sub_100EAB80(v60, 32);
  }
  v61 = *(_DWORD *)(a1 + 804);
  if ( v61 != -1 && off_1061BE18[4 * (*(_DWORD *)(a1 + 804) & 0xFFF) + 2] == v61 >> 12 )
  {
    if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 804) & 0xFFF) + 1] )
    {
      sub_100EC3F0((_DWORD *)a1, (int)sub_1025B870, 0.0, 0);
      sub_100EC4A0((int *)a1, *(float *)(dword_106B31C8 + 12), 0);
    }
  }
  *(float *)(a1 + 828) = 0.0;
  sub_1025A080(a1);
  result = sub_100D8500((_DWORD *)a1);
  byte_106C761C = 1;
  return result;
}
