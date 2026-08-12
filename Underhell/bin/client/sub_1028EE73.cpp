std::exception *__thiscall sub_1028EE73(std::exception *this, struct exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_typeid::`vftable';
  return this;
}
