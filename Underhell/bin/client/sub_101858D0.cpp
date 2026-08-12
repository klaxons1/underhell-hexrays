char *__thiscall sub_101858D0(char *this, int a2)
{
  char *result; // eax
  int v3; // edx

  result = this + 288;
  v3 = 0;
  while ( *((_DWORD *)result + 1) != a2 )
  {
    ++v3;
    result += 320;
    if ( v3 >= 17 )
      return 0;
  }
  return result;
}
