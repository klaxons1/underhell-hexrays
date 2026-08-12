int sub_102722B0(char *Format, ...)
{
  int result; // eax
  char Buffer[4096]; // [esp+0h] [ebp-1000h] BYREF
  va_list va; // [esp+100Ch] [ebp+Ch] BYREF

  va_start(va, Format);
  result = dword_106CF98C;
  if ( *(_DWORD *)(dword_106CF98C + 48) )
  {
    _vsnprintf(Buffer, 0x1000u, Format, va);
    return Msg("%s", Buffer);
  }
  return result;
}
