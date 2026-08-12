int __thiscall sub_10094DC0(_DWORD *this)
{
  int result; // eax

  if ( this[5] >= 0x10u )
    result = sub_10184660(*this);
  this[5] = 15;
  this[4] = 0;
  *(_BYTE *)this = 0;
  return result;
}
