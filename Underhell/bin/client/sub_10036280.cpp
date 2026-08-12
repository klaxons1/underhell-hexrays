int __thiscall sub_10036280(unsigned __int16 *this)
{
  int result; // eax

  result = this[59];
  if ( (_WORD)result != 0xFFFF )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)off_103DCDDC + 48))(off_103DCDDC, result);
  return result;
}
