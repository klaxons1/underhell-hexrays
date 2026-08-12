std::exception *__thiscall sub_1028EDCF(std::exception *this, char *a2)
{
  std::exception::exception(this, &a2);
  *(_DWORD *)this = &std::bad_typeid::`vftable';
  return this;
}
