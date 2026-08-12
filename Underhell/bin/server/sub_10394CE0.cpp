char *sub_10394CE0(char *Buffer, char *Format, ...)
{
  va_list va; // [esp+14h] [ebp+10h] BYREF

  va_start(va, Format);
  sub_10429A50(Buffer, 0x1FFu, Format, va);
  Buffer[511] = 0;
  return Buffer;
}
