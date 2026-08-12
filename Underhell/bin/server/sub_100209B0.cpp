int __thiscall sub_100209B0(void *this, int a2)
{
  int result; // eax

  result = a2;
  if ( a2 == 11 || a2 == 12 || a2 == 6 )
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 2176))(this);
  return result;
}
