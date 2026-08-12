void sub_1042E0C0(int a1, char *Format, ...)
{
  char Buffer[2048]; // [esp+0h] [ebp-800h] BYREF
  va_list va; // [esp+810h] [ebp+10h] BYREF

  va_start(va, Format);
  sub_10429A50(Buffer, 0x800u, Format, va);
  sub_1042DFE0(a1, Buffer);
}
