int __thiscall sub_10412EE0(void *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 340))(this);
  if ( result )
    return (*(int (__thiscall **)(int))(*(_DWORD *)result + 144))(result);
  return result;
}
