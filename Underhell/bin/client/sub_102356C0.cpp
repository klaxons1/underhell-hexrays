int __thiscall sub_102356C0(unsigned __int16 *this)
{
  int result; // eax

  result = dword_1047CA88;
  if ( dword_1047CA88 )
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA88 + 40))(dword_1047CA88, *this);
  return result;
}
