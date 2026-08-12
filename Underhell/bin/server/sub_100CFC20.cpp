int __thiscall sub_100CFC20(void *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(int, void *))(*(_DWORD *)dword_106B3CDC + 324))(dword_106B3CDC, this) - 1;
  if ( !result )
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 440))(this);
  return result;
}
