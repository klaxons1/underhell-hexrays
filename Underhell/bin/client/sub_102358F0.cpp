int __thiscall sub_102358F0(_WORD *this)
{
  int result; // eax

  if ( dword_1047CA88 )
  {
    result = (unsigned __int16)*this;
    if ( (_WORD)result != 0xFFFF )
    {
      result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)dword_1047CA88 + 32))((unsigned __int16)*this);
      *this = -1;
    }
  }
  return result;
}
