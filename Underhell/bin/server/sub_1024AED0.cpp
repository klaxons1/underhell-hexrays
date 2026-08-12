char *__stdcall sub_1024AED0(char *Source)
{
  int v2; // eax
  char *result; // eax
  char *v4; // edi
  int v5; // esi
  int v6; // eax
  char *Sourcea; // [esp+10h] [ebp+8h]

  v2 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *((_DWORD *)Source + 6));
  result = (char *)(*(int (__thiscall **)(int, int, const char *))(*(_DWORD *)dword_106B31D0 + 220))(
                     dword_106B31D0,
                     v2,
                     "name");
  v4 = Source + 4296;
  Sourcea = result;
  if ( *v4 )
  {
    result = (char *)strcmp(Source + 4296, result);
    if ( result )
    {
      v5 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_106B31F8 + 24))(
             dword_106B31F8,
             "player_changename",
             0);
      if ( v5 )
      {
        v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 60))(
               dword_106B31D0,
               *((_DWORD *)Source + 6));
        (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v5 + 40))(v5, "userid", v6);
        (*(void (__thiscall **)(int, const char *, char *))(*(_DWORD *)v5 + 48))(v5, "oldname", Source + 4296);
        (*(void (__thiscall **)(int, const char *, char *))(*(_DWORD *)v5 + 48))(v5, "newname", Sourcea);
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31F8 + 28))(dword_106B31F8, v5, 0);
      }
      return sub_101E37A0(Source, Sourcea);
    }
  }
  return result;
}
