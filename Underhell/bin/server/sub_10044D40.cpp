int __thiscall sub_10044D40(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  char *v6; // eax
  int result; // eax
  unsigned int v8; // eax
  int v9; // ecx
  const char *v10; // ecx
  const char *v11; // eax
  const char *v12; // eax
  const char *v13; // ecx

  v2 = *(_DWORD *)(this + 2688);
  if ( v2 != -1 && (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 2688) & 0xFFF) + 1], v4 = v2 >> 12, v3[1] == v4) && *v3 )
  {
    if ( v3[1] == v4 )
      v5 = *v3;
    else
      v5 = 0;
    v6 = *(char **)(v5 + 816);
    if ( !v6 )
      v6 = (char *)String;
    result = sub_100BDF40(v6);
    if ( result == -1 )
    {
      v8 = *(_DWORD *)(this + 2688);
      if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2688) & 0xFFF) + 2] != v8 >> 12 )
        v9 = 0;
      else
        v9 = off_1061BE18[4 * (*(_DWORD *)(this + 2688) & 0xFFF) + 1];
      v10 = *(const char **)(v9 + 816);
      if ( !v10 )
        v10 = String;
      v11 = *(const char **)(this + 92);
      if ( !v11 )
        v11 = String;
      DevMsg("SCRIPT_CUSTOM_MOVE: %s has no sequence:%s\n", v11, v10);
      return sub_100BDCE0(6);
    }
  }
  else
  {
    if ( *(_DWORD *)(this + 2704) )
    {
      result = sub_100BDF40(*(char **)(this + 2704));
      if ( result != -1 )
        return result;
      v12 = *(const char **)(this + 2704);
      if ( !v12 )
        v12 = String;
      v13 = *(const char **)(this + 92);
      if ( !v13 )
        v13 = String;
      Warning("SCRIPT_CUSTOM_MOVE: %s failed scripted custom move. Has no sequence called: %s\n", v13, v12);
    }
    return sub_100BDCE0(6);
  }
  return result;
}
