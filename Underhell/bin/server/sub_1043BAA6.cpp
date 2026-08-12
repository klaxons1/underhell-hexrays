std::exception *__thiscall sub_1043BAA6(std::exception *this, char a2)
{
  *(_DWORD *)this = &std::bad_exception::`vftable';
  sub_104354E6(this);
  if ( (a2 & 1) != 0 )
    sub_10184660((int)this);
  return this;
}
