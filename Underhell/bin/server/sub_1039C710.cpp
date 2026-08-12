double __thiscall sub_1039C710(int this)
{
  double result; // st7

  result = ((double (__thiscall *)(_DWORD, _DWORD))*(_DWORD *)(**(_DWORD **)(this + 2604) + 56))(
             *(_DWORD *)(this + 2604),
             *(_DWORD *)(this + 2372));
  if ( -1.0 == result )
    return sub_1032D660((void *)this);
  return result;
}
