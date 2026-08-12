const unsigned __int16 *__thiscall sub_1024BF10(int (__thiscall ***this)(_DWORD), char *String2, const char *Src)
{
  const unsigned __int16 *result; // eax
  int v5; // ebx
  const unsigned __int16 *v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // eax

  result = (const unsigned __int16 *)sub_10239950(this, String2, 0);
  v5 = (int)result;
  if ( result )
  {
    if ( *Src == 35 )
    {
      result = (const unsigned __int16 *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA78 + 8))(
                                           dword_1047CA78,
                                           Src);
      v6 = result;
      if ( !result )
        return result;
      v7 = sub_10229D00(32);
      if ( v7 )
      {
        v8 = sub_1022B140(v7, (int)"SetText", "text", v6);
        return (const unsigned __int16 *)((int (__thiscall *)(int (__thiscall ***)(_DWORD), int, int, _DWORD))(*this)[33])(
                                           this,
                                           v5,
                                           v8,
                                           0.0);
      }
    }
    else
    {
      v9 = sub_10229D00(32);
      if ( v9 )
      {
        v8 = sub_1022B0E0(v9, (int)"SetText", "text", Src);
        return (const unsigned __int16 *)((int (__thiscall *)(int (__thiscall ***)(_DWORD), int, int, _DWORD))(*this)[33])(
                                           this,
                                           v5,
                                           v8,
                                           0.0);
      }
    }
    v8 = 0;
    return (const unsigned __int16 *)((int (__thiscall *)(int (__thiscall ***)(_DWORD), int, int, _DWORD))(*this)[33])(
                                       this,
                                       v5,
                                       v8,
                                       0.0);
  }
  return result;
}
