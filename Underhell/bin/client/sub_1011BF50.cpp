int sub_1011BF50(char *Format, ...)
{
  int result; // eax
  char Buffer[8192]; // [esp+14h] [ebp-2000h] BYREF
  va_list va; // [esp+2020h] [ebp+Ch] BYREF

  va_start(va, Format);
  result = *(_DWORD *)(dword_104375F4 + 48);
  if ( result && (result < 2 || result == 3) )
  {
    sub_102283C0(Buffer, 0x2000u, Format, va);
    return Msg("%8.3f[%d] %s:  %s", *((float *)off_103DC81C + 3), *((_DWORD *)off_103DC81C + 6), "cl", Buffer);
  }
  return result;
}
