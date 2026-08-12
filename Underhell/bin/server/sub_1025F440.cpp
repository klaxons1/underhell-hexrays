char *sub_1025F440(char *Format, ...)
{
  va_list va; // [esp+Ch] [ebp+Ch] BYREF

  va_start(va, Format);
  sub_10429A50(byte_106CC1D0, 0x400u, Format, va);
  return byte_106CC1D0;
}
