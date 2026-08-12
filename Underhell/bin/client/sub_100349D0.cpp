int __thiscall sub_100349D0(unsigned __int16 *this)
{
  int result; // eax

  result = this[151];
  if ( (_WORD)result != 0xFFFF )
  {
    result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)off_103DD080 + 68))(off_103DD080, result);
    this[151] = -1;
  }
  return result;
}
