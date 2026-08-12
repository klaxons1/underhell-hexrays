int __thiscall sub_100F04D0(int this)
{
  int v2; // ebx
  int *v3; // ecx
  char *v4; // edi
  char *v5; // eax
  char v6; // cl
  int v7; // ebx
  int i; // edi
  int j; // edi
  int v10; // eax
  int v11; // edx
  int v12; // edi
  float *v13; // ebx
  int v14; // edi
  float *v15; // ebx
  long double v16; // st7
  char *k; // eax
  char *v18; // ebx
  char v19; // al
  int v20; // edi
  float *v21; // ebx
  int m; // edi
  const char *v23; // eax
  int v24; // eax
  bool v25; // zf
  double (__thiscall *v26)(int, _DWORD, _DWORD); // edx
  double v27; // st7
  int v28; // edi
  int v29; // eax
  int v30; // ecx
  const char *v31; // eax
  const char *v32; // eax
  const char *v33; // eax
  int v34; // edi
  int v35; // ebx
  int v36; // edi
  int v37; // ecx
  double v38; // st7
  double v39; // st6
  int v40; // ecx
  double v41; // st7
  double (__stdcall *v42)(_DWORD, _DWORD); // eax
  double v43; // st7
  int v44; // eax
  int v45; // ebx
  int v46; // edi
  int v47; // ecx
  double v48; // st7
  double v49; // st6
  int v50; // ecx
  double v51; // st7
  float *v52; // edi
  int *v53; // ecx
  int v54; // edi
  int v55; // eax
  const char *v56; // ecx
  int v57; // edi
  int v58; // ebx
  int (__thiscall *v59)(int, float *, _DWORD); // edx
  int v60; // eax
  const char *v61; // eax
  const char *v62; // eax
  int v63; // ebx
  int v64; // edi
  int (__thiscall *v65)(int, float *, _DWORD); // edx
  int v66; // eax
  int v67; // eax
  int v68; // ebx
  int *v69; // ecx
  int result; // eax
  int v71; // edi
  float *v72; // eax
  float *v73; // ebx
  float *v74; // eax
  float *v75; // eax
  double v76; // st7
  double v77; // st7
  double (__thiscall *v78)(int, _DWORD, _DWORD); // eax
  double v79; // st7
  int (__thiscall *v80)(int, _BYTE *); // edx
  float *v81; // eax
  double v82; // st6
  double v83; // st7
  int v84; // ebx
  int *v85; // ecx
  float *v86; // eax
  int v87; // [esp+40h] [ebp-1BCh]
  float v88; // [esp+48h] [ebp-1B4h]
  int v89; // [esp+4Ch] [ebp-1B0h]
  float v90; // [esp+60h] [ebp-19Ch]
  float v91; // [esp+64h] [ebp-198h]
  const char *v92; // [esp+64h] [ebp-198h]
  float v93; // [esp+64h] [ebp-198h]
  float v94; // [esp+68h] [ebp-194h]
  int v95; // [esp+68h] [ebp-194h]
  float v96; // [esp+68h] [ebp-194h]
  float v97; // [esp+6Ch] [ebp-190h]
  char v98[128]; // [esp+74h] [ebp-188h] BYREF
  char Buffer[128]; // [esp+F4h] [ebp-108h] BYREF
  _BYTE v100[12]; // [esp+174h] [ebp-88h] BYREF
  float v101[3]; // [esp+180h] [ebp-7Ch] BYREF
  float v102[3]; // [esp+18Ch] [ebp-70h] BYREF
  char String1[32]; // [esp+198h] [ebp-64h] BYREF
  float v104; // [esp+1B8h] [ebp-44h] BYREF
  float v105; // [esp+1BCh] [ebp-40h]
  float v106; // [esp+1C0h] [ebp-3Ch]
  float v107; // [esp+1C4h] [ebp-38h] BYREF
  float v108; // [esp+1C8h] [ebp-34h]
  float v109; // [esp+1CCh] [ebp-30h]
  float v110; // [esp+1D0h] [ebp-2Ch]
  double v111; // [esp+1D4h] [ebp-28h] BYREF
  float v112; // [esp+1DCh] [ebp-20h] BYREF
  float v113; // [esp+1E0h] [ebp-1Ch]
  float v114; // [esp+1E4h] [ebp-18h]
  int v115; // [esp+1E8h] [ebp-14h]
  int v116; // [esp+1ECh] [ebp-10h]
  float v117; // [esp+1F0h] [ebp-Ch]
  float v118; // [esp+1F4h] [ebp-8h] BYREF
  char *v119; // [esp+1F8h] [ebp-4h]

  v90 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v90, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
  if ( *(_BYTE *)(this + 896) && !*(_BYTE *)(this + 897) )
  {
    v2 = dword_106B31C8;
    if ( *(_DWORD *)(this + 124) != *(_DWORD *)(dword_106B31C8 + 12) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v3 = *(int **)(this + 24);
        if ( v3 )
          sub_100194B0(v3, 124);
      }
      *(float *)(this + 124) = *(float *)(v2 + 12);
    }
    v111 = 1.0;
    sub_10045730((float *)(this + 864), &v111);
    *(float *)(this + 804) = 0.0;
    *(_BYTE *)(this + 896) = 0;
    v118 = 0.0;
    sub_100EE8F0((float *)(this + 904), (int *)&v118);
  }
  if ( sub_100BF790(this) > 2 )
  {
    if ( (dword_10698C1C & 0x1000) != 0 )
    {
      v4 = "FCVAR_NEVER_AS_STRING";
    }
    else
    {
      v5 = *(char **)(dword_10698C24 + 36);
      if ( !v5 )
        goto LABEL_59;
      v4 = *(char **)(dword_10698C24 + 36);
      v6 = *v5;
      if ( *v5 == 43 && v4[1] )
      {
        v7 = atoi(v4 + 1);
        for ( i = 0; i < sub_100BF790(this); ++i )
          *(float *)(this + 4 * *(_DWORD *)(this + 1672) + 1676) = 0.0;
        for ( j = 0; j < 35; ++j )
        {
          if ( !(&off_106112B0)[j] )
            break;
          v10 = sub_100ED210((void *)this, (&off_106112B0)[j]);
          v11 = j + 30 * v7;
          *(_DWORD *)(this + 1672) = v10;
          *(float *)(this + 4 * v10 + 1676) = flt_10611330[v11];
        }
        goto LABEL_65;
      }
      if ( v6 == 49 && !v4[1] )
      {
        v12 = 0;
        if ( sub_100BF790(this) > 0 )
        {
          v13 = (float *)(this + 1676);
          do
          {
            *v13 = 1.0;
            sub_100ED710((_DWORD *)this, v12++, 1.0);
            ++v13;
          }
          while ( v12 < sub_100BF790(this) );
        }
        goto LABEL_65;
      }
      if ( v6 == 94 && !v4[1] )
      {
        *(float *)&v14 = 0.0;
        v118 = 0.0;
        if ( sub_100BF790(this) > 0 )
        {
          v15 = (float *)(this + 1676);
          do
          {
            v116 = sub_100BF790(this);
            v16 = (sin(1.0 / (double)v116 * (double)SLODWORD(v118) + *(float *)(dword_106B31C8 + 12)) + 1.0) * 0.5;
            *v15 = v16;
            v91 = v16;
            sub_100ED710((_DWORD *)this, v14++, v91);
            v118 = *(float *)&v14;
            ++v15;
          }
          while ( v14 < sub_100BF790(this) );
        }
        goto LABEL_65;
      }
      if ( !v6 )
      {
LABEL_59:
        if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 1668) )
        {
          v118 = COERCE_FLOAT(sub_100BF790(this));
          v26 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
          v111 = 30.0 / (double)SLODWORD(v118);
          v27 = v26(dword_106B31E4, 0.30000001, 0.5);
          *(float *)(this + 1668) = v27 * v111 + *(float *)(dword_106B31C8 + 12);
          v28 = *(_DWORD *)dword_106B31E4;
          v29 = sub_100BF790(this);
          v30 = (*(int (__thiscall **)(int, _DWORD, int))(v28 + 8))(dword_106B31E4, 0, v29 - 1);
          *(_DWORD *)(this + 1672) = v30;
          if ( 1.0 == *(float *)(this + 4 * v30 + 1676) )
          {
            *(float *)(this + 4 * v30 + 1676) = 0.0;
          }
          else
          {
            v31 = (const char *)sub_100BF870(this, v30);
            if ( _stricmp(v31, "phoneme") )
            {
              v32 = (const char *)sub_100BF7F0(this, *(_DWORD *)(this + 1672));
              if ( !strstr(v32, "upper_raiser") )
              {
                v92 = (const char *)sub_100BF7F0(this, *(_DWORD *)(this + 1672));
                v33 = (const char *)sub_100BF870(this, *(_DWORD *)(this + 1672));
                Msg("%s:%s\n", v33, v92);
                sub_100ED120((float *)this, *(_DWORD *)(this + 1672));
              }
            }
          }
        }
        goto LABEL_65;
      }
    }
    if ( strcmp(v4, "+") )
    {
      sub_104299C0(Buffer, v4, 0x80u);
      for ( k = Buffer; *k; ++k )
      {
        if ( *k == 43 )
          *k = 32;
      }
      v18 = Buffer;
      v119 = Buffer;
      if ( Buffer[0] )
      {
        do
        {
          v19 = *v18;
          if ( *v18 != 32 )
          {
            if ( v19 == 45 )
            {
              v20 = 0;
              if ( sub_100BF790(this) > 0 )
              {
                v21 = (float *)(this + 1676);
                do
                {
                  *v21 = 0.0;
                  ++v20;
                  ++v21;
                }
                while ( v20 < sub_100BF790(this) );
LABEL_56:
                v18 = v119;
              }
            }
            else
            {
              if ( v19 == 63 )
              {
                for ( m = 0; m < sub_100BF790(this); ++m )
                {
                  v23 = (const char *)sub_100BF7F0(this, m);
                  Msg("\"%s\" ", v23);
                }
                Msg("\n");
                sub_1042C7E0(&unk_10698C20, String);
                goto LABEL_56;
              }
              if ( sscanf(v18, "%31s", String1) == 1 )
              {
                v24 = sub_100ED210((void *)this, String1);
                *(_DWORD *)(this + 1672) = v24;
                if ( v24 != -1 && 1.0 != *(float *)(this + 4 * v24 + 1676) )
                  *(float *)(this + 4 * v24 + 1676) = 1.0;
                v119 = &v18[strlen(String1) - 1];
                goto LABEL_56;
              }
            }
          }
          v25 = *++v18 == 0;
          v119 = v18;
        }
        while ( !v25 );
      }
LABEL_65:
      v115 = 0;
      if ( sub_100BF790(this) > 0 )
      {
        v116 = 0;
        v119 = (char *)(this + 1676);
        HIDWORD(v111) = -1676 - this;
        do
        {
          v34 = v115;
          if ( v115 < 0 || v34 >= sub_100BF790(this) )
            goto LABEL_79;
          v35 = dword_10700AC8;
          (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
          if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
            sub_100BD750((volatile signed __int32 *)this);
          v36 = *(_DWORD *)(this + 1100);
          if ( !v36 || !*(_DWORD *)v36 )
            v36 = 0;
          (*(void (__thiscall **)(int))(*(_DWORD *)v35 + 104))(v35);
          if ( v36 )
          {
            v37 = v116 + *(_DWORD *)(*(_DWORD *)v36 + 272);
            v38 = *(float *)(v37 + *(_DWORD *)v36 + 16);
            v39 = *(float *)(v37 + *(_DWORD *)v36 + 12);
            v40 = *(_DWORD *)v36 + v37;
            if ( v39 == v38 )
              v41 = *((float *)v119 - 134);
            else
              v41 = (*(float *)(v40 + 16) - *(float *)(v40 + 12)) * *((float *)v119 - 134) + *(float *)(v40 + 12);
          }
          else
          {
LABEL_79:
            v41 = 0.0;
          }
          v117 = v41;
          if ( *(float *)v119 != v41 )
          {
            v42 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
            v118 = *(float *)v119 - v41;
            v43 = v42(2.0, 4.0);
            v41 = v118 / v43 + v117;
            v117 = v41;
          }
          if ( v41 <= 1.0 )
          {
            if ( v41 < 0.0 )
            {
              v41 = 0.0;
              v117 = 0.0;
            }
          }
          else
          {
            v41 = 1.0;
            v117 = 1.0;
          }
          v118 = v41;
          if ( v115 >= 0 )
          {
            v44 = sub_100BF790(this);
            if ( v115 < v44 )
            {
              v45 = dword_10700AC8;
              (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
              if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
                sub_100BD750((volatile signed __int32 *)this);
              v46 = *(_DWORD *)(this + 1100);
              if ( !v46 || !*(_DWORD *)v46 )
                v46 = 0;
              (*(void (__thiscall **)(int))(*(_DWORD *)v45 + 104))(v45);
              if ( v46 )
              {
                v47 = v116 + *(_DWORD *)(*(_DWORD *)v46 + 272);
                v48 = *(float *)(v47 + *(_DWORD *)v46 + 16);
                v49 = *(float *)(v47 + *(_DWORD *)v46 + 12);
                v50 = *(_DWORD *)v46 + v47;
                if ( v49 != v48 )
                {
                  v51 = (v117 - *(float *)(v50 + 12)) / (*(float *)(v50 + 16) - *(float *)(v50 + 12));
                  if ( v51 <= 1.0 )
                  {
                    if ( v51 < 0.0 )
                      v51 = 0.0;
                  }
                  else
                  {
                    v51 = 1.0;
                  }
                  v118 = v51;
                }
                v52 = (float *)&v119[HIDWORD(v111) + 1140 + this];
                if ( *(_DWORD *)v52 != LODWORD(v118) )
                {
                  if ( *(_BYTE *)(this + 84) )
                  {
                    *(_BYTE *)(this + 88) |= 1u;
                  }
                  else
                  {
                    v53 = *(int **)(this + 24);
                    if ( v53 )
                      sub_100194B0(v53, 4 * v115 + 1140);
                  }
                  *v52 = v118;
                }
              }
            }
          }
          v116 += 20;
          v119 += 4;
          v54 = ++v115;
        }
        while ( v54 < sub_100BF790(this) );
      }
      if ( *(_DWORD *)(dword_10698C6C + 48) == -1 )
      {
        v55 = *(_DWORD *)(this + 1968);
        *(_DWORD *)(this + 1956) = 1;
        *(_DWORD *)(this + 1968) = v55 + 1;
        v56 = *(const char **)(this + 1964);
        if ( !v56 )
          v56 = String;
        sub_10429A00(v98, 0x100u, "%s%d", (char)v56);
        v57 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_106B31D0 + 124))(dword_106B31D0, v98);
        if ( v57 >= 0 )
        {
          Msg("%d : %s\n", v57, v98);
          v58 = (*(int (__thiscall **)(int, float *))(*(_DWORD *)this + 580))(this, &v112);
          sub_10219BB0(String1);
          *(_DWORD *)String1 = &CPASFilter::`vftable';
          sub_1021A370(v58);
          v59 = *(int (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)this + 580);
          *(_DWORD *)String1 = &CPASAttenuationFilter::`vftable';
          v60 = v59(this, &v112, 0.80000001);
          sub_1021A0E0(v60, v94);
          v94 = 0.0;
          *(float *)&v89 = 1.0;
          v88 = *(float *)&v57;
LABEL_126:
          v87 = *(_DWORD *)(this + 24);
          v67 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
          sub_100E3150((int)String1, v67, v87, 2, v88, v89, 80, 0, 100, 0, 0, COERCE_FLOAT(1));
          std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(String1);
          goto LABEL_127;
        }
        *(_DWORD *)(this + 1968) = 0;
      }
      else
      {
        if ( (dword_10698C64 & 0x1000) != 0 )
        {
          v61 = "FCVAR_NEVER_AS_STRING";
        }
        else
        {
          v61 = *(const char **)(dword_10698C6C + 36);
          if ( !v61 )
            v61 = String;
        }
        if ( v61 == "0" || !_stricmp(v61, "0") )
          goto LABEL_128;
        if ( (dword_10698C64 & 0x1000) != 0 )
        {
          v62 = "FCVAR_NEVER_AS_STRING";
        }
        else
        {
          v62 = *(const char **)(dword_10698C6C + 36);
          if ( !v62 )
            v62 = String;
        }
        v63 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31D0 + 124))(dword_106B31D0, v62);
        if ( v63 >= 0 )
        {
          v64 = (*(int (__thiscall **)(int, float *))(*(_DWORD *)this + 580))(this, &v112);
          sub_10219BB0(String1);
          *(_DWORD *)String1 = &CPASFilter::`vftable';
          sub_1021A370(v64);
          v65 = *(int (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)this + 580);
          *(_DWORD *)String1 = &CPASAttenuationFilter::`vftable';
          v66 = v65(this, &v112, 0.80000001);
          sub_1021A0E0(v66, v94);
          v94 = 0.0;
          *(float *)&v89 = 1.0;
          v88 = *(float *)&v63;
          goto LABEL_126;
        }
      }
LABEL_127:
      sub_1042C7E0(&unk_10698C68, "0");
LABEL_128:
      if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 1932) )
      {
        v68 = *(_DWORD *)(this + 1536) == 0;
        if ( *(_DWORD *)(this + 1536) != v68 )
        {
          if ( *(_BYTE *)(this + 84) )
          {
            *(_BYTE *)(this + 88) |= 1u;
          }
          else
          {
            v69 = *(int **)(this + 24);
            if ( v69 )
              sub_100194B0(v69, 1536);
          }
          *(_DWORD *)(this + 1536) = v68;
        }
        *(float *)(this + 1932) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                    dword_106B31E4,
                                    1.5,
                                    4.5)
                                + *(float *)(dword_106B31C8 + 12);
      }
      goto LABEL_136;
    }
    goto LABEL_59;
  }
LABEL_136:
  (*(void (__thiscall **)(int, float *, float *, float *))(*(_DWORD *)this + 528))(this, &v107, v102, v101);
  result = sub_10261B20(LODWORD(v94));
  v71 = result;
  if ( !result )
    return result;
  v72 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)result + 536))(result, &v112);
  v93 = v72[1] * v72[1] + *v72 * *v72 + v72[2] * v72[2];
  if ( 0.0 != off_10689708(v93) )
  {
    v73 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)this + 504))(this, &v112);
    v74 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v71 + 504))(v71, &v104);
    if ( (v74[2] - v73[2]) * v109 + (v74[1] - v73[1]) * v108 + (*v74 - *v73) * v107 > 0.5 )
    {
      v75 = (float *)(*(int (__thiscall **)(int, float *, int))(*(_DWORD *)v71 + 504))(v71, &v112, v95);
      *(float *)(this + 1940) = *v75;
      *(float *)(this + 1944) = v75[1];
      *(float *)(this + 1948) = v75[2];
      v97 = 4.0;
      v76 = 2.0;
LABEL_151:
      v96 = v76;
      *(float *)(this + 1936) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                  dword_106B31E4,
                                  LODWORD(v96),
                                  LODWORD(v97))
                              + *(float *)(dword_106B31C8 + 12);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 836))(this, this + 1940);
    }
  }
  if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 1936) )
  {
    if ( !*(_DWORD *)(this + 1956)
      && !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1) )
    {
      v77 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -32.0,
              32.0);
      v78 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
      v112 = v101[0] * v77;
      v113 = v101[1] * v77;
      v114 = v77 * v101[2];
      v79 = v78(dword_106B31E4, -64.0, 64.0);
      v80 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 504);
      v104 = v102[0] * v79;
      v105 = v102[1] * v79;
      v106 = v79 * v102[2];
      v110 = v107 * 128.0;
      *(float *)&v111 = v108 * 128.0;
      *((float *)&v111 + 1) = 128.0 * v109;
      v81 = (float *)v80(this, v100);
      v82 = v81[1] + *(float *)&v111 + v105 + v113;
      v83 = v81[2] + *((float *)&v111 + 1) + v106 + v114;
      *(float *)(this + 1940) = *v81 + v110 + v104 + v112;
      *(float *)(this + 1944) = v82;
      *(float *)(this + 1948) = v83;
      *(float *)(this + 1936) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                  dword_106B31E4,
                                  0.30000001,
                                  1.0)
                              + *(float *)(dword_106B31C8 + 12);
      if ( *(float *)(this + 1932) - 0.5 < *(float *)(dword_106B31C8 + 12) )
      {
        v84 = *(_DWORD *)(this + 1536) == 0;
        if ( *(_DWORD *)(this + 1536) != v84 )
        {
          if ( *(_BYTE *)(this + 84) )
          {
            *(_BYTE *)(this + 88) |= 1u;
            *(_DWORD *)(this + 1536) = v84;
          }
          else
          {
            v85 = *(int **)(this + 24);
            if ( v85 )
              sub_100194B0(v85, 1536);
            *(_DWORD *)(this + 1536) = v84;
          }
        }
      }
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 836))(this, this + 1940);
    }
    v86 = (float *)(*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v71 + 504))(v71, v100, v95);
    *(float *)(this + 1940) = *v86;
    *(float *)(this + 1944) = v86[1];
    *(float *)(this + 1948) = v86[2];
    v97 = 4.0;
    v76 = 1.0;
    goto LABEL_151;
  }
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 836))(this, this + 1940);
}
