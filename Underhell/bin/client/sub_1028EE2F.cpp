std::exception *__thiscall sub_1028EE2F(std::exception *this, char a2)
{
  *(_DWORD *)this = &std::exception::`vftable';
  std::exception::_Tidy(this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
