char __userpurge sub_100B2FE0@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<esi>, int a4)
{
  int v5; // eax
  const char *v6; // ebx
  int (__cdecl *v7)(const char *); // edx
  int v8; // eax
  int v9; // esi
  const wchar_t *v10; // eax
  wchar_t *i; // eax
  char *v12; // eax
  int v13; // ebx
  double v14; // st7
  int (__thiscall *v15)(int, const char *, _DWORD); // eax
  int v16; // eax
  bool v17; // zf
  int v18; // eax
  bool v19; // dl
  BOOL v20; // edx
  int v21; // eax
  double v22; // st7
  double v23; // st7
  int v24; // eax
  float v27; // [esp+40h] [ebp-814h]
  wchar_t Destination[1024]; // [esp+48h] [ebp-80Ch] BYREF
  float v29[3]; // [esp+848h] [ebp-Ch] BYREF

  LOBYTE(v5) = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 320))(dword_1041315C);
  if ( (_BYTE)v5 )
  {
    v6 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 4))(a4);
    if ( !strcmp("game_newmap", v6) )
    {
      LOBYTE(v5) = sub_100B2F10(a1);
      if ( dword_104453A8 )
      {
        v17 = (*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_1041315C + 300))(
                dword_1041315C,
                a3,
                a2) == 0;
        v7 = *(int (__cdecl **)(const char *))(*(_DWORD *)dword_104453A8 + 8);
        if ( v17 )
        {
          LOBYTE(v5) = v7("specgui");
        }
        else
        {
          v7("specmenu");
          LOBYTE(v5) = 6;
          if ( *(_DWORD *)(a1 + 8) != 6 )
            *(_DWORD *)(a1 + 8) = 6;
        }
      }
    }
    else if ( !strcmp("hltv_message", v6) )
    {
      v8 = (*(int (__thiscall **)(int, const char *, const char *, int))(*(_DWORD *)a4 + 32))(a4, "text", Locale, a3);
      v9 = ((int (__thiscall *)(int (__stdcall ***)(int, int, int), int, _DWORD))(*off_103E6DA4)[2])(
             off_103E6DA4,
             v8,
             0);
      v10 = (const wchar_t *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA78 + 8))(dword_1047CA78, v9);
      if ( v10 )
      {
        wcsncpy(Destination, v10, 0x400u);
        Destination[1023] = 0;
      }
      else
      {
        (*(void (__thiscall **)(int, int, wchar_t *, int))(*(_DWORD *)dword_1047CA78 + 12))(
          dword_1047CA78,
          v9,
          Destination,
          2048);
      }
      for ( i = Destination; *i; ++i )
      {
        if ( *i == 13 )
          *i = 10;
      }
      LOBYTE(v5) = ((int (__thiscall *)(int (__stdcall ***)(int, int, int, int), wchar_t *))(*off_103E7304)[1])(
                     off_103E7304,
                     Destination);
    }
    else if ( !strcmp("hltv_title", v6) )
    {
      v12 = (char *)(*(int (__thiscall **)(int, const char *, const char *))(*(_DWORD *)a4 + 32))(a4, "text", Locale);
      LOBYTE(v5) = sub_102282F0((char *)(a1 + 88), v12, 0x40u);
    }
    else if ( sub_10001000("hltv_status", v6) )
    {
      if ( *(_DWORD *)(dword_1042F9B4 + 48) || (LOBYTE(v5) = sub_100B2B20(), (_BYTE)v5) )
      {
        if ( sub_10001000("hltv_cameraman", v6) )
        {
          if ( sub_10001000("hltv_fixed", v6) )
          {
            v5 = sub_10001000("hltv_chase", v6);
            if ( !v5 )
            {
              v17 = (*(int (__thiscall **)(int, const char *, _DWORD, int, int))(*(_DWORD *)a4 + 24))(
                      a4,
                      "ineye",
                      0,
                      a3,
                      a2) == 0;
              v18 = *(_DWORD *)(a1 + 8);
              v19 = v18 == 4 || v18 == 5;
              if ( *(_DWORD *)(dword_1042F9B4 + 48) || !v19 )
              {
                v20 = v17;
                if ( v18 != v20 + 4 )
                  *(_DWORD *)(a1 + 8) = v20 + 4;
              }
              *(_DWORD *)(a1 + 12) = 0;
              v21 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a4 + 24))(a4, "target2", 0);
              v22 = *(float *)(a1 + 56);
              *(_DWORD *)(a1 + 44) = v21;
              v27 = v22;
              *(float *)(a1 + 56) = ((double (__thiscall *)(int, const char *, _DWORD))*(_DWORD *)(*(_DWORD *)a4 + 28))(
                                      a4,
                                      "distance",
                                      LODWORD(v27));
              *(float *)(a1 + 52) = ((double (__thiscall *)(int, const char *, _DWORD))*(_DWORD *)(*(_DWORD *)a4 + 28))(
                                      a4,
                                      "offset",
                                      *(float *)(a1 + 52));
              *(float *)(a1 + 64) = ((double (__thiscall *)(int, const char *, _DWORD))*(_DWORD *)(*(_DWORD *)a4 + 28))(
                                      a4,
                                      "theta",
                                      *(float *)(a1 + 64));
              *(float *)(a1 + 68) = ((double (__thiscall *)(int, const char *, _DWORD))*(_DWORD *)(*(_DWORD *)a4 + 28))(
                                      a4,
                                      "phi",
                                      *(float *)(a1 + 68));
              *(float *)(a1 + 48) = ((double (__thiscall *)(int, const char *, _DWORD))*(_DWORD *)(*(_DWORD *)a4 + 28))(
                                      a4,
                                      "fov",
                                      90.0);
              v23 = ((double (__thiscall *)(int, const char *, _DWORD))*(_DWORD *)(*(_DWORD *)a4 + 28))(
                      a4,
                      "inertia",
                      30.0)
                  * 0.1;
              *(float *)(a1 + 72) = v23;
              if ( v23 <= 0.0 )
                *(float *)(a1 + 72) = 3.0;
              v24 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a4 + 24))(a4, "target1", 0);
              LOBYTE(v5) = sub_100B2920(a1, v24);
            }
          }
          else
          {
            *(_DWORD *)(a1 + 12) = 0;
            *(float *)(a1 + 16) = (float)(*(int (__thiscall **)(int, const char *, _DWORD, int, int))(*(_DWORD *)a4 + 24))(
                                           a4,
                                           "posx",
                                           0,
                                           a3,
                                           a2);
            *(float *)(a1 + 20) = (float)(*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a4 + 24))(
                                           a4,
                                           "posy",
                                           0);
            *(float *)(a1 + 24) = (float)(*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a4 + 24))(
                                           a4,
                                           "posz",
                                           0);
            v14 = (double)(*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a4 + 24))(a4, "theta", 0);
            v15 = *(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a4 + 24);
            v29[0] = v14;
            v29[1] = (float)v15(a4, "phi", 0);
            v29[2] = 0.0;
            if ( *(_DWORD *)(a1 + 8) != 3 )
            {
              *(_DWORD *)(a1 + 8) = 3;
              sub_100B20D0((float *)a1, v29);
              *(float *)(a1 + 48) = ((double (__thiscall *)(int, const char *, _DWORD))*(_DWORD *)(*(_DWORD *)a4 + 28))(
                                      a4,
                                      "fov",
                                      90.0);
            }
            v16 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a4 + 24))(a4, "target", 0);
            LOBYTE(v5) = sub_100B2920(a1, v16);
            if ( !*(_DWORD *)(a1 + 40) )
              LOBYTE(v5) = (unsigned __int8)sub_100B20D0((float *)a1, v29);
          }
        }
        else
        {
          sub_100B2F10(a1);
          *(_DWORD *)(a1 + 8) = 6;
          v5 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a4 + 24))(a4, "index", 0);
          *(_DWORD *)(a1 + 12) = v5;
        }
      }
    }
    else
    {
      v13 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a4 + 24))(a4, "proxies", 0);
      v5 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a4 + 24))(a4, "clients", 0) - v13;
      *(_DWORD *)(a1 + 84) = v5;
    }
  }
  return v5;
}
