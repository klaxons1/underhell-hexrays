int __thiscall sub_10033800(void *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 100))(dword_1044CC48);
  if ( (_BYTE)result )
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 1260))(this);
  return result;
}
