int __thiscall sub_1017EA30(_DWORD *this)
{
  int v3; // eax
  int v4; // edx

  if ( !this[70] )
    return 0;
  if ( sub_10012360() )
  {
    v3 = this[70];
    v4 = *(_DWORD *)(v3 + 4);
    if ( v4 )
    {
      if ( (int)strlen(*(const char **)(v3 + 4)) > 0
        && (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1041315C + 52))(dword_1041315C, v4, 0) )
      {
        return *(_DWORD *)(this[70] + 4);
      }
    }
  }
  return *(_DWORD *)this[70];
}
