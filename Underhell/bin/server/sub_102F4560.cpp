int __thiscall sub_102F4560(void *this, int a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 1088))(this);
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 1096))(this);
    if ( result == *(_DWORD *)(a2 + 4) )
      return (*(int (__thiscall **)(void *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2344))(
               this,
               "TLK_PASSENGER_PUNTED",
               0,
               0,
               0,
               0);
  }
  return result;
}
