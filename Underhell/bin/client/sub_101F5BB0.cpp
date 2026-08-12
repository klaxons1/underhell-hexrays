int __thiscall sub_101F5BB0(_DWORD *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(_DWORD *, int))(*this + 232))(this, 2);
  this[262] = -1;
  return result;
}
