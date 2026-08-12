int sub_1022F660(char *Format, ...)
{
  int result; // eax
  char Buffer[8192]; // [esp+14h] [ebp-2000h] BYREF
  va_list va; // [esp+2020h] [ebp+Ch] BYREF

  va_start(va, Format);
  result = *(_DWORD *)(dword_106C45CC + 48);
  if ( result )
  {
    if ( result <= 2 )
    {
      sub_10429A50(Buffer, 0x2000u, Format, va);
      return Msg("%8.3f[%d] %s:  %s", *(float *)(dword_106B31C8 + 12), *(_DWORD *)(dword_106B31C8 + 24), "sv", Buffer);
    }
  }
  return result;
}
