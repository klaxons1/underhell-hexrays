_DWORD *__thiscall sub_103D8B40(int this, int a2)
{
  char **v3; // ecx
  char *v4; // eax
  _DWORD *result; // eax

  v3 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
      v4 = (char *)String;
  }
  else
  {
    v4 = (char *)sub_1010D460((int)v3);
  }
  sub_103D8A90((_DWORD *)this, v4);
  result = *(_DWORD **)(this + 2124);
  *(_BYTE *)(this + 3788) = 1;
  if ( result )
  {
    result = (_DWORD *)_stricmp((const char *)result[11], "SCHED_PSNIPER_RELOAD");
    if ( result )
      return sub_10044510(this, (int)"Told to sweep target via input");
  }
  return result;
}
