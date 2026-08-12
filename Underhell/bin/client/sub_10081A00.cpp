char __stdcall sub_10081A00(int a1)
{
  int v2; // ebx
  int (__thiscall *v3)(int); // edx
  const char *v4; // edi
  _DWORD *v5; // eax
  _BYTE *v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // ebx
  _DWORD *v12; // edi
  int v13; // eax
  int v14; // eax
  _DWORD *v15; // edi
  _DWORD *v16; // ebx
  _BYTE *v17; // eax
  int v18; // edi
  const char *v19; // eax
  int v20; // edi
  int v21; // eax
  int v22; // esi
  int v23; // eax
  int v24; // ebx
  _DWORD *v25; // edi
  int v26; // eax
  int v27; // eax
  void *v28; // edi
  int v29; // edi
  bool v30; // bl
  _BYTE *v31; // esi
  int v32; // eax
  int v33; // esi
  int v34; // eax
  int v35; // esi
  int v36; // eax
  void *v37; // esi
  _BYTE *v38; // edi
  int v39; // edi
  int v40; // eax
  int v41; // esi
  int v42; // eax
  int v43; // ebx
  int v44; // eax
  int v45; // eax
  _DWORD *v46; // edi
  bool v47; // zf
  int v48; // edi
  int v49; // eax
  int v50; // eax
  int v51; // edi
  int v52; // eax
  int v53; // edi
  int v54; // eax
  int v55; // esi
  int v56; // eax
  int v57; // ebx
  _DWORD *v58; // edi
  _DWORD *v59; // esi
  int v60; // eax
  _DWORD *v61; // esi
  int v62; // edi
  int v63; // eax
  const char *v64; // eax
  char *v65; // eax
  int v66; // esi
  int v67; // eax
  const char *v68; // eax
  int v70; // [esp+14h] [ebp-358h]
  int v71; // [esp+14h] [ebp-358h]
  int v72; // [esp+14h] [ebp-358h]
  int v73; // [esp+14h] [ebp-358h]
  int v74; // [esp+14h] [ebp-358h]
  char v75[256]; // [esp+24h] [ebp-348h] BYREF
  _BYTE v76[56]; // [esp+124h] [ebp-248h] BYREF
  _BYTE v77[200]; // [esp+15Ch] [ebp-210h] BYREF
  wchar_t Buffer[14]; // [esp+224h] [ebp-148h] BYREF
  _BYTE v79[100]; // [esp+240h] [ebp-12Ch] BYREF
  _BYTE v80[28]; // [esp+2A4h] [ebp-C8h] BYREF
  _BYTE v81[36]; // [esp+2C0h] [ebp-ACh] BYREF
  _BYTE v82[64]; // [esp+2E4h] [ebp-88h] BYREF
  _BYTE v83[32]; // [esp+324h] [ebp-48h] BYREF
  int v84[8]; // [esp+344h] [ebp-28h] BYREF
  void *v85; // [esp+364h] [ebp-8h]
  int v86; // [esp+368h] [ebp-4h]
  _DWORD *v87; // [esp+374h] [ebp+8h]
  bool v88; // [esp+377h] [ebp+Bh]
  char v89; // [esp+377h] [ebp+Bh]

  v2 = sub_100B4090("CHudChat");
  v3 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 4);
  v86 = v2;
  v4 = (const char *)v3(a1);
  v5 = (_DWORD *)strcmp("player_connect", v4);
  if ( !v5 )
  {
    if ( v2 )
    {
      v6 = (_BYTE *)(*(int (__thiscall **)(int, const char *, const char *))(*(_DWORD *)a1 + 32))(a1, "name", Locale);
      LOBYTE(v5) = sub_10081520(v6);
      if ( !(_BYTE)v5 )
      {
        LOBYTE(v5) = sub_1005DD00();
        if ( !(_BYTE)v5 )
        {
          v7 = *(_DWORD *)dword_1047CA78;
          v8 = (*(int (__thiscall **)(int, const char *, const char *, _BYTE *, int))(*(_DWORD *)a1 + 32))(
                 a1,
                 "name",
                 Locale,
                 v83,
                 64);
          (*(void (__thiscall **)(int, int))(v7 + 12))(dword_1047CA78, v8);
          v9 = *(_DWORD *)dword_1047CA78;
          v10 = (*(int (__thiscall **)(int, const char *, int, _BYTE *))(*(_DWORD *)dword_1047CA78 + 8))(
                  dword_1047CA78,
                  "#game_player_joined_game",
                  1,
                  v83);
          (*(void (__cdecl **)(int, _BYTE *, int, int))(v9 + 32))(dword_1047CA78, v77, 200, v10);
          (*(void (__thiscall **)(int, _BYTE *, _BYTE *, int, int))(*(_DWORD *)dword_1047CA78 + 16))(
            dword_1047CA78,
            v77,
            v81,
            100,
            v70);
          LOBYTE(v5) = (*(int (**)(int, int, const char *, ...))(*(_DWORD *)v2 + 68))(v2, 1, "%s", v81);
        }
      }
    }
    return (char)v5;
  }
  if ( !strcmp("player_disconnect", v4) )
  {
    v11 = *(_DWORD *)dword_1041315C;
    v12 = off_103DCD78;
    v13 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a1 + 24))(a1, "userid", 0);
    v14 = (*(int (__thiscall **)(int, int))(v11 + 36))(dword_1041315C, v13);
    v5 = (_DWORD *)sub_1007A6A0(v12, v14);
    v15 = v5;
    if ( v5 && (LOBYTE(v5) = (*(int (__thiscall **)(_DWORD *))(*v5 + 504))(v5), (_BYTE)v5) )
      v16 = v15;
    else
      v16 = 0;
    if ( v86 )
    {
      if ( v16 )
      {
        v17 = (_BYTE *)(*(int (__thiscall **)(int, const char *, const char *))(*(_DWORD *)a1 + 32))(a1, "name", Locale);
        LOBYTE(v5) = sub_10081520(v17);
        if ( !(_BYTE)v5 )
        {
          LOBYTE(v5) = sub_1005DD00();
          if ( !(_BYTE)v5 )
          {
            v18 = *(_DWORD *)dword_1047CA78;
            v19 = sub_100421F0(v16);
            (*(void (__thiscall **)(int, const char *, _BYTE *, int))(v18 + 12))(dword_1047CA78, v19, v83, 64);
            v20 = *(_DWORD *)dword_1047CA78;
            v21 = (*(int (__thiscall **)(int, const char *, const char *, wchar_t *, int))(*(_DWORD *)a1 + 32))(
                    a1,
                    "reason",
                    Locale,
                    Buffer,
                    128);
            (*(void (__thiscall **)(int, int))(v20 + 12))(dword_1047CA78, v21);
            v22 = *(_DWORD *)dword_1047CA78;
            v23 = (*(int (__thiscall **)(int, const char *, int, _BYTE *, wchar_t *))(*(_DWORD *)dword_1047CA78 + 8))(
                    dword_1047CA78,
                    "#game_player_left_game",
                    2,
                    v83,
                    Buffer);
            (*(void (__cdecl **)(int, _BYTE *, int, int))(v22 + 32))(dword_1047CA78, v77, 200, v23);
            (*(void (__thiscall **)(int, _BYTE *, _BYTE *, int, int))(*(_DWORD *)dword_1047CA78 + 16))(
              dword_1047CA78,
              v77,
              v81,
              100,
              v71);
            LOBYTE(v5) = (*(int (**)(int, int, const char *, ...))(*(_DWORD *)v86 + 68))(v86, 1, "%s", v81);
          }
        }
      }
    }
    return (char)v5;
  }
  if ( !strcmp("player_team", v4) )
  {
    v24 = *(_DWORD *)dword_1041315C;
    v25 = off_103DCD78;
    v26 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a1 + 24))(a1, "userid", 0);
    v27 = (*(int (__thiscall **)(int, int))(v24 + 36))(dword_1041315C, v26);
    v5 = (_DWORD *)sub_1007A6A0(v25, v27);
    v28 = v5;
    if ( !v5 || (LOBYTE(v5) = (*(int (__thiscall **)(_DWORD *))(*v5 + 504))(v5), v85 = v28, !(_BYTE)v5) )
      v85 = 0;
    if ( v86 )
    {
      LOBYTE(v5) = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a1 + 20))(a1, "disconnect", 0);
      if ( !(_BYTE)v5 )
      {
        v29 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a1 + 24))(a1, "team", 0);
        v88 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a1 + 24))(a1, "autoteam", 0) != 0;
        v30 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a1 + 24))(a1, "silent", 0) != 0;
        v31 = (_BYTE *)(*(int (__thiscall **)(int, const char *, const char *))(*(_DWORD *)a1 + 32))(a1, "name", Locale);
        LOBYTE(v5) = sub_10081520(v31);
        if ( !(_BYTE)v5 )
        {
          if ( !v30 )
          {
            (*(void (__thiscall **)(int, _BYTE *, _BYTE *, int))(*(_DWORD *)dword_1047CA78 + 12))(
              dword_1047CA78,
              v31,
              v83,
              64);
            v32 = sub_1006D090(v29);
            if ( v32 )
            {
              v33 = *(_DWORD *)dword_1047CA78;
              v34 = (*(int (__thiscall **)(int, wchar_t *, int))(*(_DWORD *)v32 + 592))(v32, Buffer, 128);
              (*(void (__thiscall **)(int, int))(v33 + 12))(dword_1047CA78, v34);
            }
            else
            {
              _snwprintf(Buffer, 0x40u, L"%d", v29);
            }
            LOBYTE(v5) = sub_1005DD00();
            if ( !(_BYTE)v5 )
            {
              v35 = *(_DWORD *)dword_1047CA78;
              if ( v88 )
                v36 = (*(int (__cdecl **)(const char *, int, _BYTE *, wchar_t *))(v35 + 8))(
                        "#game_player_joined_autoteam",
                        2,
                        v83,
                        Buffer);
              else
                v36 = (*(int (__cdecl **)(const char *, int, _BYTE *, wchar_t *))(v35 + 8))(
                        "#game_player_joined_team",
                        2,
                        v83,
                        Buffer);
              (*(void (__stdcall **)(int, _BYTE *, int, int))(v35 + 32))(dword_1047CA78, v77, 200, v36);
              (*(void (__thiscall **)(int, _BYTE *, _BYTE *, int))(*(_DWORD *)dword_1047CA78 + 16))(
                dword_1047CA78,
                v77,
                v81,
                100);
              LOBYTE(v5) = (*(int (**)(int, int, const char *, ...))(*(_DWORD *)v86 + 68))(v86, 16, "%s", v81);
            }
          }
          v37 = v85;
          if ( v85 )
          {
            LOBYTE(v5) = sub_10042350(v85);
            if ( (_BYTE)v5 )
              LOBYTE(v5) = (*(int (__thiscall **)(void *, int))(*(_DWORD *)v37 + 856))(v37, v29);
          }
        }
      }
    }
    return (char)v5;
  }
  v5 = (_DWORD *)strcmp("player_changename", v4);
  if ( !v5 )
  {
    if ( v2 )
    {
      v38 = (_BYTE *)(*(int (__thiscall **)(int, const char *, const char *))(*(_DWORD *)a1 + 32))(
                       a1,
                       "oldname",
                       Locale);
      LOBYTE(v5) = sub_10081520(v38);
      if ( !(_BYTE)v5 )
      {
        (*(void (__thiscall **)(int, _BYTE *, _BYTE *, int))(*(_DWORD *)dword_1047CA78 + 12))(
          dword_1047CA78,
          v38,
          v82,
          64);
        v39 = *(_DWORD *)dword_1047CA78;
        v40 = (*(int (__thiscall **)(int, const char *, const char *, _BYTE *, int))(*(_DWORD *)a1 + 32))(
                a1,
                "newname",
                Locale,
                v83,
                64);
        (*(void (__thiscall **)(int, int))(v39 + 12))(dword_1047CA78, v40);
        v41 = *(_DWORD *)dword_1047CA78;
        v42 = (*(int (__thiscall **)(int, const char *, int, _BYTE *, _BYTE *))(*(_DWORD *)dword_1047CA78 + 8))(
                dword_1047CA78,
                "#game_player_changed_name",
                2,
                v82,
                v83);
        (*(void (__cdecl **)(int, _BYTE *, int, int))(v41 + 32))(dword_1047CA78, v77, 200, v42);
        (*(void (__thiscall **)(int, _BYTE *, _BYTE *, int, int))(*(_DWORD *)dword_1047CA78 + 16))(
          dword_1047CA78,
          v77,
          v79,
          100,
          v72);
        LOBYTE(v5) = (*(int (**)(int, int, const char *, ...))(*(_DWORD *)v2 + 68))(v2, 2, "%s", v79);
      }
    }
    return (char)v5;
  }
  if ( sub_10001000("teamplay_broadcast_audio", v4) )
  {
    if ( !sub_10001000("teamplay_broadcast_audio", v4) )
    {
      v48 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a1 + 24))(a1, "team", 0);
      if ( !v48 )
        goto LABEL_55;
      v5 = (_DWORD *)sub_1006D130();
      if ( !v5 )
        return (char)v5;
      v49 = sub_1006D130();
      v5 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v49 + 296))(v49);
      v47 = v5 == (_DWORD *)v48;
LABEL_54:
      if ( !v47 )
        return (char)v5;
LABEL_55:
      sub_1015BB00(v84);
      v50 = (*(int (__thiscall **)(int, const char *, const char *))(*(_DWORD *)a1 + 32))(a1, "sound", Locale);
      sub_101213E0((int)v84, -1, v50, 0, 0.0, 0);
      LOBYTE(v5) = std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v84);
      return (char)v5;
    }
    if ( sub_10001000("server_cvar", v4) )
    {
      if ( sub_10001000("achievement_earned", v4) )
      {
        v68 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1);
        LOBYTE(v5) = DevMsg(2, "Unhandled GameEvent in ClientModeShared::FireGameEvent - %s\n", v68);
      }
      else
      {
        v57 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a1 + 24))(a1, "player", 0);
        v58 = (_DWORD *)sub_1012D2F0(v57);
        v5 = (_DWORD *)(*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a1 + 24))(a1, "achievement", 0);
        v59 = v5;
        v87 = v5;
        if ( v86 )
        {
          if ( v58 )
          {
            LOBYTE(v5) = sub_1005DD00();
            if ( !(_BYTE)v5 )
            {
              v60 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 428))(dword_1041315C);
              v5 = (_DWORD *)__RTDynamicCast(
                               v60,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&IAchievementMgr `RTTI Type Descriptor',
                               (int)&CAchievementMgr `RTTI Type Descriptor',
                               0);
              if ( v5 )
              {
                v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(v5[5] + 4))(v5 + 5, v59);
                if ( v5 )
                {
                  v61 = v5 + 2;
                  if ( v5 != (_DWORD *)-8 )
                  {
                    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(v58[2] + 32))(v58 + 2) )
                    {
                      if ( !sub_10042350(v58) && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v58 + 500))(v58) )
                        sub_100EA810("achieved", 4, (int)"head");
                      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v58 + 1024))(v58, v87);
                    }
                    LOBYTE(v5) = dword_1040D3A8;
                    if ( dword_1040D3A8 )
                    {
                      v62 = *(_DWORD *)dword_1047CA78;
                      v63 = (*(int (__thiscall **)(int, int, _BYTE *, int))(*(_DWORD *)(dword_1040D3A8 + 1192) + 32))(
                              dword_1040D3A8 + 1192,
                              v57,
                              v82,
                              64);
                      (*(void (__thiscall **)(int, int))(v62 + 12))(dword_1047CA78, v63);
                      v64 = (const char *)(*(int (__thiscall **)(_DWORD *))(*v61 + 4))(v61);
                      v65 = sub_100010E0(v75, "#%s_NAME", v64);
                      v5 = (_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_1047CA78 + 8))(
                                       dword_1047CA78,
                                       v65);
                      if ( v5 )
                      {
                        v66 = *(_DWORD *)dword_1047CA78;
                        v67 = (*(int (__thiscall **)(int, const char *, int, _BYTE *, _DWORD *))(*(_DWORD *)dword_1047CA78
                                                                                               + 8))(
                                dword_1047CA78,
                                "#Achievement_Earned",
                                2,
                                v82,
                                v5);
                        (*(void (__cdecl **)(int, _BYTE *, int, int))(v66 + 32))(dword_1047CA78, v76, 256, v67);
                        (*(void (__thiscall **)(int, _BYTE *, wchar_t *, int, int))(*(_DWORD *)dword_1047CA78 + 16))(
                          dword_1047CA78,
                          v76,
                          Buffer,
                          128,
                          v74);
                        LOBYTE(v5) = (*(int (**)(int, int, int, const char *, ...))(*(_DWORD *)v86 + 72))(
                                       v86,
                                       v57,
                                       8,
                                       "%s",
                                       Buffer);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      LOBYTE(v5) = sub_1005DD00();
      if ( !(_BYTE)v5 )
      {
        v51 = *(_DWORD *)dword_1047CA78;
        v52 = (*(int (__thiscall **)(int, const char *, const char *, _BYTE *, int))(*(_DWORD *)a1 + 32))(
                a1,
                "cvarname",
                Locale,
                v80,
                128);
        (*(void (__thiscall **)(int, int))(v51 + 12))(dword_1047CA78, v52);
        v53 = *(_DWORD *)dword_1047CA78;
        v54 = (*(int (__thiscall **)(int, const char *, const char *, int *, int))(*(_DWORD *)a1 + 32))(
                a1,
                "cvarvalue",
                Locale,
                v84,
                32);
        (*(void (__thiscall **)(int, int))(v53 + 12))(dword_1047CA78, v54);
        v55 = *(_DWORD *)dword_1047CA78;
        v56 = (*(int (__thiscall **)(int, const char *, int, _BYTE *, int *))(*(_DWORD *)dword_1047CA78 + 8))(
                dword_1047CA78,
                "#game_server_cvar_changed",
                2,
                v80,
                v84);
        (*(void (__cdecl **)(int, _BYTE *, int, int))(v55 + 32))(dword_1047CA78, v77, 200, v56);
        (*(void (__thiscall **)(int, _BYTE *, _BYTE *, int, int))(*(_DWORD *)dword_1047CA78 + 16))(
          dword_1047CA78,
          v77,
          v79,
          100,
          v73);
        LOBYTE(v5) = (*(int (**)(int, int, const char *, ...))(*(_DWORD *)v2 + 68))(v2, 8, "%s", v79);
      }
    }
  }
  else
  {
    v43 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a1 + 24))(a1, "team", 0);
    v89 = 0;
    if ( sub_1006D130()
      && (v44 = sub_1006D130(),
          v5 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v44 + 296))(v44),
          v5 == (_DWORD *)v43)
      || (v45 = sub_100766B0(), v5 = (_DWORD *)sub_1012D2F0(v45), (v46 = v5) != 0)
      && (sub_10076690() == 4 || (v5 = (_DWORD *)sub_10076690(), v5 == (_DWORD *)5))
      && (v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v46 + 296))(v46), v5 == (_DWORD *)v43) )
    {
      v89 = 1;
    }
    if ( v43 || (v5 = (_DWORD *)sub_1006D130()) == 0 )
    {
      v47 = v89 == 1;
      goto LABEL_54;
    }
  }
  return (char)v5;
}
