const char *__thiscall sub_10238440(int this)
{
  const char *result; // eax
  char *v3; // edi
  const char *v4; // edx
  unsigned int v5; // eax
  bool v6; // cf

  result = *(const char **)(this + 920);
  v3 = (char *)result;
  if ( result )
  {
    v4 = result + 1;
    v5 = (unsigned int)&result[strlen(result) + 1];
    v6 = v5 == (_DWORD)v4;
    result = (const char *)(v5 - (_DWORD)v4);
    if ( !v6 && result != (const char *)1 && *v3 != 33 )
      result = (const char *)sub_1023B8B0(v3);
  }
  if ( (*(_BYTE *)(this + 248) & 0x10) == 0 )
  {
    if ( *(_BYTE *)(this + 913) )
      *(_BYTE *)(this + 912) = 1;
  }
  return result;
}
