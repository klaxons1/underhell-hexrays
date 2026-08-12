int __thiscall sub_100D1150(void *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 956))(this);
  if ( (_BYTE)result )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 944))(this, 174);
  return result;
}
