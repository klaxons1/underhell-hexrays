int __thiscall sub_10269EE0(int (__thiscall ****this)(_DWORD), int a2)
{
  int result; // eax

  result = (**this[12])(this[12]);
  if ( result )
    return (*(int (__thiscall **)(int))(*(_DWORD *)result + 288))(result);
  return result;
}
