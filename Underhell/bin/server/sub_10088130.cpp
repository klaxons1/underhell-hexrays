int __thiscall sub_10088130(_DWORD *this)
{
  int result; // eax
  int i; // edi

  if ( (*((_BYTE *)this + 21) & 0x10) != 0 )
    result = 0;
  else
    result = this[6];
  for ( i = result - 1; i >= 0; --i )
  {
    result = sub_1042D470(1);
    if ( (_BYTE)result )
    {
      *(_BYTE *)(*this - this[8] + this[4]++) = 9;
      result = sub_1042D4C0(this);
    }
  }
  return result;
}
