int __thiscall sub_10252090(_DWORD *this)
{
  int (*v1)(void); // edx

  v1 = *(int (**)(void))(*this + 16);
  this[78] = -1;
  return v1();
}
