void *sub_10122910(char *Format, ...)
{
  unsigned int v1; // kr00_4
  void *v2; // edi
  char Src[512]; // [esp+0h] [ebp-200h] BYREF
  va_list va; // [esp+20Ch] [ebp+Ch] BYREF

  va_start(va, Format);
  _vsnprintf(Src, 0x200u, Format, va);
  v1 = strlen(Src);
  v2 = (void *)sub_10184390(v1 + 1);
  memcpy_0(v2, Src, v1 + 1);
  return v2;
}
