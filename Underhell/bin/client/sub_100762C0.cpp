int __stdcall sub_100762C0(char *String1)
{
  if ( sub_10227C40(String1, "VguiScreen") )
  {
    if ( sub_10227C40(String1, "Materials") )
    {
      if ( sub_10227C40(String1, "EffectDispatch") )
      {
        if ( sub_10227C40(String1, "InfoPanel") )
        {
          if ( sub_10227C40(String1, "Scenes") )
          {
            if ( !sub_10227C40(String1, "ParticleEffectNames") )
            {
              dword_104131C8 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_10413180 + 12))(
                                 dword_10413180,
                                 String1);
              (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413180 + 28))(
                dword_10413180,
                dword_104131C8,
                1);
              (*(void (__thiscall **)(int, _DWORD, int (__cdecl *)(int, int, int, void *)))(*(_DWORD *)dword_104131C8
                                                                                          + 52))(
                dword_104131C8,
                0,
                sub_10074C50);
            }
            return sub_100AE160();
          }
          else
          {
            dword_104131DC = (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_10413180 + 12))(
                               dword_10413180,
                               String1);
            (*(void (__thiscall **)(int, _DWORD, int (__cdecl *)()))(*(_DWORD *)dword_104131DC + 52))(
              dword_104131DC,
              0,
              nullsub_4);
            return sub_100AE160();
          }
        }
        else
        {
          dword_104131D8 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_10413180 + 12))(
                             dword_10413180,
                             String1);
          return sub_100AE160();
        }
      }
      else
      {
        dword_104131CC = (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_10413180 + 12))(dword_10413180, String1);
        return sub_100AE160();
      }
    }
    else
    {
      dword_104131D4 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_10413180 + 12))(dword_10413180, String1);
      (*(void (__thiscall **)(int, _DWORD, int (__cdecl *)(int, int, int, const char *)))(*(_DWORD *)dword_104131D4 + 52))(
        dword_104131D4,
        0,
        sub_100762A0);
      return sub_100AE160();
    }
  }
  else
  {
    dword_104131D0 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_10413180 + 12))(dword_10413180, String1);
    (*(void (__thiscall **)(int, _DWORD, int (__cdecl *)(int, int, int, int)))(*(_DWORD *)dword_104131D0 + 52))(
      dword_104131D0,
      0,
      sub_10074C70);
    return sub_100AE160();
  }
}
