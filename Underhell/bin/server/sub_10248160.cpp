const char *__thiscall sub_10248160(_DWORD *this)
{
  _DWORD *v1; // eax
  const char *result; // eax
  unsigned int v3; // eax
  int *v4; // esi
  unsigned int v5; // edi
  int v6; // ecx
  int v7; // ecx
  int v8; // [esp-4h] [ebp-8h]
  _DWORD *v9; // [esp+0h] [ebp-4h] BYREF

  v9 = this;
  if ( (int)this[19] < 0 )
  {
    v3 = this[10];
    if ( v3 != -1
      && (v4 = &off_1061BE18[4 * (this[10] & 0xFFF) + 1],
          v5 = v3 >> 12,
          off_1061BE18[4 * (this[10] & 0xFFF) + 2] == this[10] >> 12)
      && *v4 )
    {
      if ( off_1061BE18[4 * (this[10] & 0xFFF) + 2] == v5 )
        v6 = *v4;
      else
        v6 = 0;
      result = *(const char **)(v6 + 92);
      if ( !result )
        result = String;
      if ( !strcmp(result, "prop_physics") )
      {
        if ( v4[1] == v5 )
          v7 = *v4;
        else
          v7 = 0;
        result = *(const char **)(*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v7 + 28))(v7, &v9);
        if ( !result )
          return String;
      }
    }
    else
    {
      return "Unknown";
    }
  }
  else
  {
    v1 = (_DWORD *)sub_102D9B20(this[19]);
    return *(const char **)sub_100B9CF0(v1, v8);
  }
  return result;
}
