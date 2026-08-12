const char *__thiscall sub_10278BD0(int *this, _DWORD *a2)
{
  const char *result; // eax
  char v4[512]; // [esp+8h] [ebp-200h] BYREF

  sub_1024A020((int)this, a2);
  result = (const char *)sub_1022B4C0(a2, "URLText", 0);
  if ( result )
  {
    if ( *result == 35 )
    {
      result = (const char *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA78 + 8))(
                               dword_1047CA78,
                               result + 1);
      if ( result )
      {
        (*(void (__thiscall **)(int, const char *, char *, int))(*(_DWORD *)dword_1047CA78 + 16))(
          dword_1047CA78,
          result,
          v4,
          512);
        return (const char *)sub_10278B30(this, v4);
      }
    }
    else
    {
      return (const char *)sub_10278B30(this, result);
    }
  }
  return result;
}
