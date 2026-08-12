int sub_1025F5A0(char *Format, ...)
{
  char Buffer[1024]; // [esp+0h] [ebp-400h] BYREF
  va_list va; // [esp+40Ch] [ebp+Ch] BYREF

  va_start(va, Format);
  sub_10429A50(Buffer, 0x400u, Format, va);
  return (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_106B31D0 + 288))(dword_106B31D0, Buffer);
}
