int __thiscall sub_10110FB0(unsigned __int16 *this)
{
  int result; // eax

  result = this[19];
  if ( (_WORD)result != 0xFFFF )
  {
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31EC + 8))(dword_106B31EC, result);
    this[19] = -1;
  }
  return result;
}
