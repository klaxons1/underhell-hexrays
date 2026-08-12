bool __thiscall sub_1016B540(int this, char *String1, _DWORD *a3)
{
  int v5; // eax
  int v6; // esi
  const char *v7; // ecx

  if ( String1 == *(char **)this || !_stricmp(String1, *(const char **)this) )
  {
    if ( !a3 )
      return *(_DWORD *)(this + 16) == 0;
    v5 = a3[3];
    if ( v5 == *(_DWORD *)(this + 16) )
    {
      v6 = 0;
      if ( v5 > 0 )
      {
        do
        {
          v7 = *(const char **)(*a3 + 4 * v6);
          if ( v7 != *(const char **)(*(_DWORD *)(this + 4) + 4 * v6)
            && _stricmp(v7, *(const char **)(*(_DWORD *)(this + 4) + 4 * v6)) )
          {
            break;
          }
          ++v6;
        }
        while ( v6 < a3[3] );
      }
    }
  }
  return 0;
}
