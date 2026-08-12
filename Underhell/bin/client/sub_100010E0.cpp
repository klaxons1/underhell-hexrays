char *sub_100010E0(char *Buffer, char *Format, ...)
{
  va_list ArgList; // [esp+14h] [ebp+10h] BYREF

  va_start(ArgList, Format);
  sub_102283C0(Buffer, 0xFFu, Format, ArgList);
  Buffer[255] = 0;
  return Buffer;
}
