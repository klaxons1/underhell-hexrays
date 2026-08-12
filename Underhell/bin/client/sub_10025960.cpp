void sub_10025960(char *Format, ...)
{
  va_list va; // [esp+Ch] [ebp+Ch] BYREF

  va_start(va, Format);
  if ( 0.0 != *((float *)off_103DC81C + 4) )
  {
    sub_102283C0(byte_10403BD8, 0x400u, Format, va);
    DevMsg(1, "%s", byte_10403BD8);
  }
}
