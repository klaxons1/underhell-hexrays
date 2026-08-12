int sub_10241780()
{
  _DWORD *v0; // esi
  int result; // eax
  bool v2; // zf
  int i; // esi

  v0 = (_DWORD *)sub_10153490();
  if ( !v0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v0 + 320))(v0) )
    v0 = 0;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 8))(dword_106B31D0);
  if ( (_BYTE)result )
  {
    v2 = v0 == 0;
  }
  else
  {
    if ( !v0 )
      return result;
    result = sub_1025FC50();
    v2 = v0 == (_DWORD *)result;
  }
  if ( v2 )
  {
    dword_106C5418 = 0;
    sub_10244CD0(&unk_106C5414);
    sub_10241610(dword_106C5408);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 8))(dword_106B31D0) )
    {
      result = dword_106B31C8;
      for ( i = 1; i <= *(_DWORD *)(dword_106B31C8 + 20); ++i )
      {
        result = sub_1025FB50(i);
        if ( result )
          result = (*(int (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
                     dword_106B31D0,
                     *(_DWORD *)(result + 24),
                     "cl_soundscape_flush\n");
      }
    }
    else
    {
      return (*(int (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
               dword_106B31D0,
               v0[6],
               "cl_soundscape_flush\n");
    }
  }
  return result;
}
