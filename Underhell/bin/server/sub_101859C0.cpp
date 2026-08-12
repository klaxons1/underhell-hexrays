int __thiscall sub_101859C0(void *this, int a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 740))(this);
  if ( !(_BYTE)result )
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 720))(this);
  return result;
}
