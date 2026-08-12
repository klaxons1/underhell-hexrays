int __thiscall sub_102C62C0(_DWORD *this, int a2, char a3, const char *ArgList, int a5)
{
  int result; // eax

  sub_1015F820(this, a2, a3, ArgList, a5);
  result = sub_102C6030(this, (int)ArgList, a3);
  if ( result )
  {
    ++*(_DWORD *)(result + 4);
    *(double *)(result + 8) = *(float *)(a5 + 52) + *(double *)(result + 8);
  }
  return result;
}
