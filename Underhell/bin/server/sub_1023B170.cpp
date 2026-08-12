int sub_1023B170(int a1, char *Format, ...)
{
  int result; // eax
  char Buffer[256]; // [esp+0h] [ebp-100h] BYREF
  va_list va; // [esp+110h] [ebp+10h] BYREF

  va_start(va, Format);
  result = dword_106C4EB4;
  if ( *(_DWORD *)(dword_106C4EB4 + 48) )
  {
    sub_10429A50(Buffer, 0x100u, Format, va);
    return Msg("%s %s", "(sv)", Buffer);
  }
  return result;
}
