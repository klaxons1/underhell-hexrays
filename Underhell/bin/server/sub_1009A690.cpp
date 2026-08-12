char *sub_1009A690(char *Buffer, char *Format, ...)
{
  va_list va; // [esp+14h] [ebp+10h] BYREF

  va_start(va, Format);
  sub_10429A50(Buffer, 0x3FFu, Format, va);
  Buffer[1023] = 0;
  return Buffer;
}
