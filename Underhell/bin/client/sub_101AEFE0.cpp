int __thiscall sub_101AEFE0(_DWORD *this)
{
  int result; // eax

  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 44))(this, 0);
  this[69] = 0;
  result = *((unsigned __int8 *)this + 260);
  *((_BYTE *)this + 296) = 0;
  this[75] = result;
  this[77] = 3;
  return result;
}
