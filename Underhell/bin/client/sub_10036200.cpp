int __thiscall sub_10036200(unsigned __int16 *this)
{
  int v2; // eax
  int result; // eax

  v2 = this[59];
  if ( (_WORD)v2 != 0xFFFF )
  {
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)off_103DCDDC + 4))(off_103DCDDC, v2);
    this[59] = -1;
  }
  result = this[151];
  if ( (_WORD)result != 0xFFFF )
  {
    result = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)off_103DD080 + 68))(off_103DD080, this[151]);
    this[151] = -1;
  }
  return result;
}
