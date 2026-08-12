int sub_10120AD0(int a1, char *Format, ...)
{
  int result; // eax
  char Buffer[256]; // [esp+0h] [ebp-100h] BYREF
  va_list va; // [esp+110h] [ebp+10h] BYREF

  va_start(va, Format);
  result = dword_10437864;
  if ( *(_DWORD *)(dword_10437864 + 48) )
  {
    sub_102283C0(Buffer, 0x100u, Format, va);
    return Msg("%s %s", "(cl)", Buffer);
  }
  return result;
}
