HMODULE __thiscall sub_100D0A10(int this)
{
  int v2; // eax
  HMODULE result; // eax
  char *v4; // ebx
  int (__cdecl *v5)(const char *, _DWORD); // eax
  void (__thiscall ***v6)(_DWORD, int, int); // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  void *v10; // edi
  const char *v11; // ebx
  void *Src; // [esp+4h] [ebp-8h]
  int v13; // [esp+8h] [ebp-4h] BYREF

  v2 = CommandLine_Tier0(this);
  result = (HMODULE)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 40))(v2, "-g15");
  if ( result )
  {
    v4 = 0;
    if ( !*(_DWORD *)(this + 4) )
    {
      result = (HMODULE)sub_1022CD10("bin/g15.dll");
      *(_DWORD *)(this + 236) = result;
      if ( result )
      {
        v5 = (int (__cdecl *)(const char *, _DWORD))sub_1022CE50(result);
        *(_DWORD *)(this + 240) = v5;
        if ( v5
          && (v6 = (void (__thiscall ***)(_DWORD, int, int))v5("G15_INTERFACE_VERSION001", 0),
              (*(_DWORD *)(this + 4) = v6) != 0) )
        {
          (**v6)(v6, this + 24, this + 28);
          *(_DWORD *)(this + 52) = 0;
          *(_DWORD *)(this + 56) = 0;
          v13 = 0;
          sub_10009FD0(this + 64, "small", (char **)&v13);
          v13 = 1;
          sub_10009FD0(this + 64, "medium", (char **)&v13);
          v13 = 2;
          sub_10009FD0(this + 64, "big", (char **)&v13);
          v13 = 0;
          sub_10009FD0(this + 100, "left", (char **)&v13);
          v13 = 1;
          sub_10009FD0(this + 100, "center", (char **)&v13);
          v13 = 2;
          sub_10009FD0(this + 100, "right", (char **)&v13);
          if ( sub_10229D00(32) )
            v4 = (char *)sub_10229D20("G15");
          v13 = (int)v4;
          if ( dword_10413188 )
            v7 = dword_10413188 + 4;
          else
            v7 = 0;
          if ( (unsigned __int8)sub_10229D70(v7, "resource/g15.res", "MOD") )
          {
            Src = (void *)sub_1022B4C0("game", (int)"Source Engine");
            v8 = sub_1022A800("chatlines", *(_DWORD *)(this + 60)) <= 1
               ? 1
               : sub_1022A800("chatlines", *(_DWORD *)(this + 60));
            *(_DWORD *)(this + 60) = v8;
            sub_1022D0A0(Src);
            v9 = sub_1022CF00(this + 8);
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 4))(*(_DWORD *)(this + 4), v9);
            v10 = (void *)sub_10229C90(v4);
            if ( v10 )
            {
              do
              {
                v11 = (const char *)sub_10229A00(v10);
                if ( _stricmp(v11, "game") )
                {
                  if ( !_stricmp(v11, "icons") )
                  {
                    sub_100D0000((char *)this, (int)v10);
                  }
                  else if ( !_stricmp(v11, "replace") )
                  {
                    sub_100CBFF0((void (__thiscall ***)(void *, int, int))this, (int)v10);
                  }
                  else if ( !_stricmp(v11, "page") )
                  {
                    sub_100CEC10(this, v10);
                  }
                }
                v10 = (void *)sub_1021F0F0(v10);
              }
              while ( v10 );
              v4 = (char *)v13;
            }
          }
          sub_1022AF00(v4);
          sub_100CC100((void (__thiscall ***)(void *, char *, const char *))this);
          return (HMODULE)Msg("Logitech LCD Keyboard initialized\n");
        }
        else
        {
          return sub_100D0480((_DWORD *)this);
        }
      }
    }
  }
  return result;
}
