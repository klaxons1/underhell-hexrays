char __usercall sub_10163D50@<al>(int a1@<ecx>, float a2@<edi>)
{
  int v3; // eax
  char *v4; // edi
  _BYTE *v5; // eax
  int v6; // ebx
  int i; // edi
  int j; // edi
  int v9; // eax
  int v10; // ecx
  char *k; // eax
  char *v12; // ebx
  char v13; // al
  int v14; // edi
  float *v15; // ebx
  int m; // edi
  const char *v17; // eax
  int v18; // eax
  bool v19; // zf
  double (__thiscall *v20)(int, _DWORD, _DWORD); // eax
  int v21; // edi
  int v22; // eax
  int v23; // ecx
  const char *v24; // eax
  const char *v25; // eax
  const char *v26; // eax
  int v27; // edi
  float *v28; // ebx
  double v29; // st7
  double (__stdcall *v30)(_DWORD, _DWORD); // eax
  double v31; // st7
  int v32; // eax
  const char *v33; // ecx
  int v34; // edi
  int v35; // ebx
  int (__thiscall *v36)(int, _BYTE *, _DWORD); // edx
  int v37; // eax
  int v38; // eax
  int v39; // edi
  int v40; // eax
  int v42; // [esp+24h] [ebp-164h]
  float v43; // [esp+44h] [ebp-144h]
  const char *v44; // [esp+48h] [ebp-140h]
  float v45; // [esp+48h] [ebp-140h]
  float v46; // [esp+48h] [ebp-140h]
  char v48[128]; // [esp+58h] [ebp-130h] BYREF
  char Buffer[128]; // [esp+D8h] [ebp-B0h] BYREF
  char String1[32]; // [esp+158h] [ebp-30h] BYREF
  _BYTE v51[4]; // [esp+178h] [ebp-10h] BYREF
  double v52; // [esp+17Ch] [ebp-Ch]
  float v53; // [esp+184h] [ebp-4h]

  if ( !*(_DWORD *)(a1 + 1552) )
  {
    v3 = sub_100BF790(a1);
    if ( v3 <= 2 )
      return v3;
    if ( (dword_10698C1C & 0x1000) != 0 )
    {
      v4 = "FCVAR_NEVER_AS_STRING";
    }
    else
    {
      v5 = *(_BYTE **)(dword_10698C24 + 36);
      if ( !v5 )
        goto LABEL_40;
      v4 = *(char **)(dword_10698C24 + 36);
      if ( *v5 == 43 && v4[1] )
      {
        v6 = atoi(v4 + 1);
        for ( i = 0; i < sub_100BF790(a1); ++i )
          *(float *)(a1 + 4 * *(_DWORD *)(a1 + 4180) + 4184) = 0.0;
        for ( j = 0; j < 35; ++j )
        {
          if ( !(&off_106112B0)[j] )
            break;
          v9 = sub_100ED210((void *)a1, (&off_106112B0)[j]);
          v10 = j + 30 * v6;
          *(_DWORD *)(a1 + 4180) = v9;
          *(float *)(a1 + 4 * v9 + 4184) = flt_10611330[v10];
        }
        goto LABEL_46;
      }
      if ( !*v5 )
      {
LABEL_40:
        if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(a1 + 4176) )
        {
          v53 = COERCE_FLOAT(sub_100BF790(a1));
          v20 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
          v52 = 30.0 / (double)SLODWORD(v53);
          *(float *)(a1 + 4176) = v20(dword_106B31E4, 0.30000001, 0.5) * v52 + *(float *)(dword_106B31C8 + 12);
          v21 = *(_DWORD *)dword_106B31E4;
          v22 = sub_100BF790(a1);
          v23 = (*(int (__thiscall **)(int, _DWORD, int))(v21 + 8))(dword_106B31E4, 0, v22 - 1);
          *(_DWORD *)(a1 + 4180) = v23;
          if ( 1.0 == *(float *)(a1 + 4 * v23 + 4184) )
          {
            *(float *)(a1 + 4 * v23 + 4184) = 0.0;
          }
          else
          {
            v24 = (const char *)sub_100BF870(a1, v23);
            if ( _stricmp(v24, "phoneme") )
            {
              v25 = (const char *)sub_100BF7F0(a1, *(_DWORD *)(a1 + 4180));
              if ( !strstr(v25, "upper_raiser") )
              {
                v44 = (const char *)sub_100BF7F0(a1, *(_DWORD *)(a1 + 4180));
                v26 = (const char *)sub_100BF870(a1, *(_DWORD *)(a1 + 4180));
                Msg("%s:%s\n", v26, v44);
                v45 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                        dword_106B31E4,
                        0.5,
                        1.0);
                sub_10163C10(a1, v21, *(_DWORD *)(a1 + 4180), v45);
              }
            }
          }
        }
        goto LABEL_46;
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
      *(float *)&v12 = COERCE_FLOAT(Buffer);
      v53 = COERCE_FLOAT(Buffer);
      if ( Buffer[0] )
      {
        do
        {
          v13 = *v12;
          if ( *v12 != 32 )
          {
            if ( v13 == 45 )
            {
              v14 = 0;
              if ( sub_100BF790(a1) > 0 )
              {
                v15 = (float *)(a1 + 4184);
                do
                {
                  *v15 = 0.0;
                  ++v14;
                  ++v15;
                }
                while ( v14 < sub_100BF790(a1) );
LABEL_37:
                *(float *)&v12 = v53;
              }
            }
            else
            {
              if ( v13 == 63 )
              {
                for ( m = 0; m < sub_100BF790(a1); ++m )
                {
                  v17 = (const char *)sub_100BF7F0(a1, m);
                  Msg("\"%s\" ", v17);
                }
                Msg("\n");
                sub_1042C7E0(&unk_10698C20, String);
                goto LABEL_38;
              }
              if ( sscanf(v12, "%31s", String1) == 1 )
              {
                v18 = sub_100ED210((void *)a1, String1);
                *(_DWORD *)(a1 + 4180) = v18;
                if ( v18 != -1 && 1.0 != *(float *)(a1 + 4 * v18 + 4184) )
                  *(float *)(a1 + 4 * v18 + 4184) = 1.0;
                LODWORD(v53) = &v12[strlen(String1) - 1];
                goto LABEL_37;
              }
            }
          }
LABEL_38:
          v19 = *++v12 == 0;
          v53 = *(float *)&v12;
        }
        while ( !v19 );
      }
LABEL_46:
      v27 = 0;
      if ( sub_100BF790(a1) > 0 )
      {
        v28 = (float *)(a1 + 4184);
        do
        {
          v29 = sub_100ED7A0((_DWORD *)a1, v27);
          *((float *)&v52 + 1) = v29;
          if ( *v28 != v29 )
          {
            v30 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
            v53 = *v28 - v29;
            v31 = v30(2.0, 4.0);
            v29 = v53 / v31 + *((float *)&v52 + 1);
          }
          if ( v29 <= 1.0 )
          {
            if ( v29 < 0.0 )
              v29 = 0.0;
          }
          else
          {
            v29 = 1.0;
          }
          v46 = v29;
          sub_100ED710((_DWORD *)a1, v27++, v46);
          ++v28;
        }
        while ( v27 < sub_100BF790(a1) );
      }
      v3 = *(_DWORD *)(dword_10698C6C + 48);
      switch ( v3 )
      {
        case -1:
          v32 = *(_DWORD *)(a1 + 4476);
          *(_DWORD *)(a1 + 4464) = 1;
          *(_DWORD *)(a1 + 4476) = v32 + 1;
          v33 = *(const char **)(a1 + 4472);
          if ( !v33 )
            v33 = String;
          sub_10429A00(v48, 0x100u, "%s%d", (char)v33);
          v34 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_106B31D0 + 124))(dword_106B31D0, v48);
          if ( v34 < 0 )
          {
            *(_DWORD *)(a1 + 4476) = 0;
          }
          else
          {
            Msg("%d : %s\n", v34, v48);
            v35 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 580))(a1, v51);
            sub_10219BB0(String1);
            *(_DWORD *)String1 = &CPASFilter::`vftable';
            sub_1021A370(v35);
            v36 = *(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)a1 + 580);
            *(_DWORD *)String1 = &CPASAttenuationFilter::`vftable';
            v37 = v36(a1, v51, 0.80000001);
            sub_1021A0E0(v37, a2);
            v42 = *(_DWORD *)(a1 + 24);
            v38 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
            sub_100E3150((int)String1, v38, v42, 2, *(float *)&v34, COERCE_INT(1.0), 80, 0, 100, 0, 0, COERCE_FLOAT(1));
            std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(String1);
          }
          break;
        case -2:
          *(float *)(a1 + 2632) = *(float *)(dword_106B31C8 + 12) + 1000.0;
          return v3;
        case -3:
          *(float *)(a1 + 2632) = *(float *)(dword_106B31C8 + 12);
          break;
        case -4:
          v39 = *(_DWORD *)a1;
          v43 = *(float *)(dword_106B4DB4 + 44);
          v40 = sub_1025FB50(1);
          (*(void (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(v39 + 1808))(a1, v40, 0.5, LODWORD(v43), 0.0);
          break;
        case -5:
          (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)a1 + 2260))(a1, 1, 1.5, 2.5);
          break;
        default:
          return v3;
      }
      LOBYTE(v3) = sub_1042C7E0(&unk_10698C68, "0");
      return v3;
    }
    goto LABEL_40;
  }
  LOBYTE(v3) = sub_100EDEB0(a1);
  return v3;
}
