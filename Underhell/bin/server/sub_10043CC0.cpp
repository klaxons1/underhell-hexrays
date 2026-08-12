int __thiscall sub_10043CC0(char *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 1752))(this);
  if ( (_BYTE)result )
    return sub_1007CB20(this + 2832);
  return result;
}
