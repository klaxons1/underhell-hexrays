char *sub_10092C10(char *Buffer, char *Format, ...)
{
  va_list va; // [esp+14h] [ebp+10h] BYREF

  va_start(va, Format);
  sub_10429A50(Buffer, 0x7Fu, Format, va);
  Buffer[127] = 0;
  return Buffer;
}
