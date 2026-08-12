int __thiscall sub_1025B380(void *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 204))(this);
  if ( (_BYTE)result )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 908))(this, 1);
  return result;
}
