int __thiscall sub_102F4E10(void *this, int ArgList)
{
  int result; // eax
  char Buffer[128]; // [esp+4h] [ebp-80h] BYREF

  result = dword_106B31C8;
  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
  {
    result = sub_10261B20();
    if ( result )
    {
      result = (*(int (__thiscall **)(void *, int, int, _DWORD))(*(_DWORD *)this + 548))(this, result, 16449, 0);
      if ( (_BYTE)result )
      {
        sub_10092C10(Buffer, "num_bounces:%d", ArgList);
        return (*(int (__thiscall **)(void *, const char *, char *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2344))(
                 this,
                 "TLK_BALLSOCKETED",
                 Buffer,
                 0,
                 0,
                 0);
      }
    }
  }
  return result;
}
