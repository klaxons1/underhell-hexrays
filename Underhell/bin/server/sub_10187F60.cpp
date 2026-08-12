int sub_10187F60(int a1, int a2, char *Format, ...)
{
  char Buffer[8192]; // [esp+0h] [ebp-2000h] BYREF
  va_list va; // [esp+2014h] [ebp+14h] BYREF

  va_start(va, Format);
  sub_10429A50(Buffer, 0x2000u, Format, va);
  return (*(int (__cdecl **)(int, int, char *))(*(_DWORD *)dword_106B31D0 + 184))(dword_106B31D0, a2, Buffer);
}
