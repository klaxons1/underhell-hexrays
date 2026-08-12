const char *__thiscall sub_10182C40(int this, int a2, int a3, int a4, int a5)
{
  const char *result; // eax
  char *v7; // eax

  if ( !*(_DWORD *)(this + 800) || (result = (const char *)sub_10260340(*(char **)(this + 800), a2), (_BYTE)result) )
  {
    result = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2);
    if ( (_BYTE)result )
    {
      v7 = *(char **)(this + 212);
      if ( !v7 )
        v7 = (char *)String;
      result = sub_10182BD0(v7, a2);
      if ( result )
        result = (const char *)(*(int (__thiscall **)(int, int, const char *, bool, bool))(*(_DWORD *)dword_106B3CDC
                                                                                         + 432))(
                                 dword_106B3CDC,
                                 a2,
                                 result,
                                 (*(_DWORD *)(this + 248) & 2) != 0,
                                 (*(_DWORD *)(this + 248) & 4) != 0);
    }
    if ( (*(_BYTE *)(this + 248) & 1) != 0 )
      return (const char *)sub_1025FAC0(this);
  }
  return result;
}
