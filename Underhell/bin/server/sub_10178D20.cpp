int __thiscall sub_10178D20(int this)
{
  int result; // eax
  _BYTE *v3; // eax
  const char *v4; // eax

  result = *(_DWORD *)(this + 260);
  if ( !result )
    return sub_1025FAC0(this);
  if ( *(int *)(this + 800) >= 32 )
  {
    if ( !*(_DWORD *)(this + 808) && *(int *)(this + 804) > 0 )
    {
      v3 = (_BYTE *)sub_10280B30(*(_DWORD *)(this + 804));
      if ( !v3 || !*v3 )
        v3 = 0;
      *(_DWORD *)(this + 808) = v3;
    }
    if ( (*(_BYTE *)(this + 248) & 1) != 0 )
    {
      return (*(int (__thiscall **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 156))(
               dword_106B31D0,
               *(_DWORD *)(this + 800),
               "a");
    }
    else if ( *(_DWORD *)(this + 808) )
    {
      v4 = *(const char **)(this + 808);
      if ( !v4 )
        v4 = String;
      return (*(int (__thiscall **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 156))(
               dword_106B31D0,
               *(_DWORD *)(this + 800),
               v4);
    }
    else
    {
      return (*(int (__thiscall **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 156))(
               dword_106B31D0,
               *(_DWORD *)(this + 800),
               "n");
    }
  }
  return result;
}
