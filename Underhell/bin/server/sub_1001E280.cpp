char *sub_1001E280(char *Buffer, char *Format, ...)
{
  va_list va; // [esp+14h] [ebp+10h] BYREF

  va_start(va, Format);
  sub_10429A50(Buffer, 0xFFu, Format, va);
  Buffer[255] = 0;
  return Buffer;
}
