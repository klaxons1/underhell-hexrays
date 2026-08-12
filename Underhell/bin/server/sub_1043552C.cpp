std::exception *__thiscall sub_1043552C(std::exception *this, char a2)
{
  *(_DWORD *)this = &std::exception::`vftable';
  std::exception::_Tidy(this);
  if ( (a2 & 1) != 0 )
    sub_10184660((int)this);
  return this;
}
