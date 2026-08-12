_DWORD *__thiscall sub_1024EB60(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  _DWORD *result; // eax
  char *v5; // eax
  _DWORD *v6; // eax
  const char *v7; // esi

  v2 = this[235];
  if ( v2 == -1
    || (v3 = &off_1061BE18[4 * (this[235] & 0xFFF) + 1], result = (_DWORD *)(v2 >> 12), (_DWORD *)v3[1] != result)
    || !*v3 )
  {
    v5 = (char *)this[53];
    if ( !v5 )
      v5 = (char *)String;
    v6 = sub_1012BF20(&dword_1069E3E0, 0, v5, 0, 0, 0, 0);
    if ( v6 )
    {
      this[53] = v6[53];
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v6 + 8))(v6);
      this[235] = *result;
    }
    else
    {
      v7 = (const char *)this[53];
      if ( !v7 )
        v7 = String;
      return (_DWORD *)Msg("Can't find target of train %s\n", v7);
    }
  }
  return result;
}
