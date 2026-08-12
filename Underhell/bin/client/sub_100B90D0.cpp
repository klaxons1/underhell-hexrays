int sub_100B90D0(int a1, int a2, char *Format, ...)
{
  char Buffer[4100]; // [esp+0h] [ebp-1008h] BYREF
  va_list ArgList; // [esp+1004h] [ebp-4h]
  va_list va; // [esp+101Ch] [ebp+14h] BYREF

  va_start(va, Format);
  va_copy(ArgList, va);
  sub_102283C0(Buffer, 0x1000u, Format, va);
  ArgList = 0;
  return (*(int (**)(int, _DWORD, int, const char *, ...))(*(_DWORD *)a1 + 72))(a1, 0, a2, "%s", Buffer);
}
