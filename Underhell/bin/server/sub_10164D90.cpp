double __thiscall sub_10164D90(int this)
{
  double result; // st7

  result = ((double (__thiscall *)(_DWORD, _DWORD))*(_DWORD *)(**(_DWORD **)(this + 2604) + 56))(
             *(_DWORD *)(this + 2604),
             *(_DWORD *)(this + 2372));
  if ( -1.0 == result )
    sub_10381D50(this);
  return result;
}
