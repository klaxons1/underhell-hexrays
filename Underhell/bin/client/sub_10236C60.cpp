int __thiscall sub_10236C60(void *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 288))(this);
  if ( !(_BYTE)result )
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 480))(this);
  return result;
}
