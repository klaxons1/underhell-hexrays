int sub_1011BF00(int a1, char *Format, ...)
{
  char Buffer[2048]; // [esp+0h] [ebp-800h] BYREF
  va_list va; // [esp+810h] [ebp+10h] BYREF

  va_start(va, Format);
  sub_102283C0(Buffer, 0x800u, Format, va);
  return Warning("%s", Buffer);
}
