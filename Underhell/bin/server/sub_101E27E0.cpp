int __thiscall sub_101E27E0(unsigned int *this)
{
  int (__thiscall *v2)(unsigned int *); // edx

  (*(void (__thiscall **)(unsigned int *, int))(*this + 1232))(this, 1);
  sub_101C73D0(this, 0);
  v2 = *(int (__thiscall **)(unsigned int *))(*this + 96);
  this[823] = 0;
  return v2(this);
}
