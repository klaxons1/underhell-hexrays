void *sub_10122970(int a1, char *Format, ...)
{
  unsigned int v2; // kr00_4
  void *v3; // edi
  char Src[512]; // [esp+0h] [ebp-200h] BYREF
  va_list va; // [esp+210h] [ebp+10h] BYREF

  va_start(va, Format);
  _vsnprintf(Src, 0x200u, Format, va);
  v2 = strlen(Src);
  v3 = (void *)sub_10184390(v2 + 1);
  memcpy_0(v3, Src, v2 + 1);
  return v3;
}
