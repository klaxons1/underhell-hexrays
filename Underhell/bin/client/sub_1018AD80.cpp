void __thiscall sub_1018AD80(void *this, int a2)
{
  int v3; // eax
  _BYTE *v4; // eax
  _BYTE *v5; // edi
  int v6; // esi
  int v7; // eax
  int v8; // [esp+4h] [ebp-4h] BYREF

  v8 = 0;
  if ( dword_104131D8 )
  {
    v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_104131D8 + 48))(dword_104131D8, (int)this + 695);
    if ( v3 != 0xFFFF )
    {
      v4 = (_BYTE *)(*(int (__thiscall **)(int, int, int *))(*(_DWORD *)dword_104131D8 + 44))(dword_104131D8, v3, &v8);
      v5 = v4;
      if ( v4 )
      {
        if ( *v4 )
        {
          if ( sub_10227B20(v4, "http://", 7) )
          {
            if ( *v5 == 60 )
            {
              v6 = (*(int (__thiscall **)(int, const char *, const char *, const char *))(*(_DWORD *)(dword_1047C968 + 4)
                                                                                        + 8))(
                     dword_1047C968 + 4,
                     "textwindow_temp.html",
                     "wb",
                     "DEFAULT_WRITE_PATH");
              if ( v6 )
              {
                (*(void (__thiscall **)(int, _BYTE *, int, int))(*(_DWORD *)(dword_1047C968 + 4) + 4))(
                  dword_1047C968 + 4,
                  v5,
                  v8,
                  v6);
                (*(void (__thiscall **)(int, int))(*(_DWORD *)(dword_1047C968 + 4) + 12))(dword_1047C968 + 4, v6);
                v7 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)(dword_1047C968 + 4) + 24))(
                       dword_1047C968 + 4,
                       "textwindow_temp.html",
                       0);
                if ( v7 == v8 )
                  (*(void (__thiscall **)(void *, const char *))(*(_DWORD *)this + 1032))(this, "textwindow_temp.html");
              }
            }
            else
            {
              (*(void (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 1036))(this, v5);
            }
          }
          else
          {
            (*(void (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 1040))(this, v5);
          }
        }
      }
    }
  }
}
