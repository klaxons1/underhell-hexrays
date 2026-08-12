std::exception *__thiscall sub_10435578(std::exception *this, struct exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_cast::`vftable';
  return this;
}
