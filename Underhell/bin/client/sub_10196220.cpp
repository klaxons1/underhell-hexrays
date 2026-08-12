bool __thiscall sub_10196220(_DWORD *this)
{
  int v2; // eax
  bool result; // al
  int v4; // eax
  int v5; // eax

  result = 0;
  if ( this[498]
    || (v2 = (*(int (__thiscall **)(int, const char *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
               dword_1047C96C,
               "effects/ar2_altfire1b",
               0,
               0,
               0),
        (this[498] = v2) != 0) )
  {
    if ( this[497]
      || (v4 = (*(int (__thiscall **)(int, const char *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
                 dword_1047C96C,
                 "effects/ar2_altfire1",
                 0,
                 0,
                 0),
          (this[497] = v4) != 0) )
    {
      if ( this[496] )
        return 1;
      v5 = (*(int (__thiscall **)(int, const char *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
             dword_1047C96C,
             "effects/combinemuzzle1",
             0,
             0,
             0);
      this[496] = v5;
      if ( v5 )
        return 1;
    }
  }
  return result;
}
