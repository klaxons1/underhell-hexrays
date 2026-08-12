std::exception *__thiscall sub_10298ED9(std::exception *this, char a2)
{
  *(_DWORD *)this = &std::bad_exception::`vftable';
  sub_1028EDC4(this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
