int __thiscall sub_10034410(_WORD *this, int a2, int a3, int a4)
{
  int (__thiscall *v5)(_WORD *, int, int); // eax
  int result; // eax

  v5 = *(int (__thiscall **)(_WORD *, int, int))(*(_DWORD *)this + 80);
  this[41] |= 1u;
  result = v5(this, a2, a3);
  this[41] &= ~1u;
  return result;
}
