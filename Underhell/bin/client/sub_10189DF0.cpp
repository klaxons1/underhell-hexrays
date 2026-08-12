int __thiscall sub_10189DF0(_BYTE *this)
{
  int result; // eax

  sub_1023E950(this);
  result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 128))(this);
  if ( (_BYTE)result )
  {
    result = *(_DWORD *)(dword_1044574C + 48);
    if ( this[280] != (result != 0)
      && (!result || (result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_104453A8 + 20))(dword_104453A8)) == 0) )
    {
      LOBYTE(result) = *(_DWORD *)(dword_1044574C + 48) != 0;
      this[280] = result;
      return (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)dword_104453A8 + 8))(
               dword_104453A8,
               "scores",
               result);
    }
  }
  return result;
}
