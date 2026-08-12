int __thiscall sub_1014F9D0(void *this)
{
  _BYTE *v2; // eax
  int result; // eax

  v2 = (_BYTE *)sub_100422D0();
  if ( (v2[732] & 0x20) != 0 || (result = sub_10042850(v2), (_BYTE)result) )
  {
    result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this);
    if ( (_BYTE)result )
      return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 68))(this);
  }
  return result;
}
