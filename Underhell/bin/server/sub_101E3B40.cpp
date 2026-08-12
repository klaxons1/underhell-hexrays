int __thiscall sub_101E3B40(int *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(int))(*(_DWORD *)this[2] + 1612))(this[2]);
  if ( (_BYTE)result )
    return sub_100E0C80(this[2]);
  return result;
}
