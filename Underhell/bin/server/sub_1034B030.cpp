unsigned int __thiscall sub_1034B030(int this, char a2)
{
  unsigned int result; // eax
  int *v4; // ecx
  void (__noreturn ***v5)(); // eax
  void (__noreturn ***v6)(); // eax
  _DWORD *v7; // eax
  const char *v8; // eax
  const char *v9; // esi

  result = *(_DWORD *)(this + 4016);
  if ( result != -1
    && (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 1], result >>= 12, v4[1] == result)
    && *v4 )
  {
    if ( !a2 )
    {
      if ( *(_DWORD *)(this + 3960) != 1 )
      {
        if ( *(_DWORD *)(this + 4160) )
        {
          v6 = sub_1023DBA0();
          ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v6)[12])(
            v6,
            *(_DWORD *)(this + 4160),
            0.0,
            0.0);
        }
        *(_DWORD *)(this + 3960) = 1;
      }
      goto LABEL_15;
    }
  }
  else if ( !a2 )
  {
    return result;
  }
  if ( *(_DWORD *)(this + 3960) != 9 )
  {
    if ( *(_DWORD *)(this + 4160) )
    {
      v5 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v5)[12])(
        v5,
        *(_DWORD *)(this + 4160),
        0.0,
        0.0);
    }
    *(_DWORD *)(this + 3960) = 9;
  }
LABEL_15:
  sub_100D7260((float *)this, &flt_106F1CB4);
  result = *(_DWORD *)(this + 4036);
  if ( result )
  {
    v7 = sub_1012BF20(&dword_1069E3E0, 0, (char *)result, 0, 0, 0, 0);
    if ( v7 )
    {
      result = (*(int (__thiscall **)(_DWORD *))(*v7 + 8))(v7);
      *(_DWORD *)(this + 4032) = *(_DWORD *)result;
    }
    else
    {
      v8 = *(const char **)(this + 4036);
      if ( !v8 )
        v8 = String;
      v9 = *(const char **)(this + 260);
      if ( !v9 )
        v9 = String;
      return Warning("npc_combinedropship %s couldn't find land target named %s\n", v9, v8);
    }
  }
  return result;
}
