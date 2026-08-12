int sub_10109E10(int a1, char *Format, ...)
{
  char Buffer[4096]; // [esp+0h] [ebp-1000h] BYREF
  va_list va; // [esp+1010h] [ebp+10h] BYREF

  va_start(va, Format);
  sub_102283C0(Buffer, 0x1000u, Format, va);
  return Msg(
           "%i %s %s : %s\n",
           *((_DWORD *)off_103DC81C + 6),
           *(const char **)(a1 + 56),
           *(const char **)(*(_DWORD *)(a1 + 24) + 4),
           Buffer);
}
