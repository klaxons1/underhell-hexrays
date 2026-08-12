std::exception *__thiscall sub_104354C8(std::exception *this, char *a2)
{
  std::exception::exception(this, &a2);
  *(_DWORD *)this = &std::bad_cast::`vftable';
  return this;
}
