char *__thiscall sub_101AD550(int this)
{
  char *v1; // eax
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  const char *v4; // eax
  int v5; // edi
  const char *v6; // ecx
  char *result; // eax
  const char *v9; // [esp-4h] [ebp-8h]

  result = sub_100E38F0((float *)this);
  if ( *(_DWORD *)(this + 260) )
  {
    v1 = *(char **)(this + 212);
    if ( v1 )
    {
      v2 = sub_1012BF20(&dword_1069E3E0, 0, v1, 0, 0, 0, 0);
      if ( v2 == (_DWORD *)this )
      {
        v9 = sub_100D6390((_DWORD *)this);
        Warning("ERROR: path_track (%s) refers to itself as a target!\n", v9);
      }
      else if ( v2 )
      {
        v3 = (_DWORD *)__RTDynamicCast(
                         (int)v2,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                         (int)&CPathTrack `RTTI Type Descriptor',
                         0);
        *(_DWORD *)(this + 800) = v3;
        if ( v3 )
          sub_101ACCF0(v3, this);
      }
      else
      {
        v4 = *(const char **)(this + 212);
        if ( !v4 )
          v4 = String;
        Warning("Dead end link: %s\n", v4);
      }
    }
    result = *(char **)(this + 820);
    if ( result )
    {
      result = (char *)sub_1012BF20(&dword_1069E3E0, 0, result, 0, 0, 0, 0);
      if ( result )
      {
        v5 = __RTDynamicCast(
               (int)result,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CPathTrack `RTTI Type Descriptor',
               0);
        *(_DWORD *)(this + 808) = v5;
        result = *(char **)(v5 + 820);
        if ( !result )
          result = (char *)String;
        v6 = *(const char **)(this + 260);
        if ( !v6 )
          v6 = String;
        if ( v6 != result )
        {
          result = (char *)_stricmp(v6, result);
          if ( result )
            *(_DWORD *)(v5 + 804) = this;
        }
      }
    }
  }
  return result;
}
