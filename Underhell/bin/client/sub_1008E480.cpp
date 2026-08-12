int __thiscall sub_1008E480(unsigned __int16 *this)
{
  int result; // eax

  result = this[19];
  if ( (_WORD)result != 0xFFFF )
  {
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413184 + 8))(dword_10413184, result);
    this[19] = -1;
  }
  return result;
}
