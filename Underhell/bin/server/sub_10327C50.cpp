int __thiscall sub_10327C50(_DWORD *this)
{
  int (__thiscall *v2)(_DWORD *); // edx
  int result; // eax

  (*(void (__thiscall **)(_DWORD *))(*this + 100))(this);
  if ( this[55] != 80 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 464))(this, this + 55);
    this[55] = 80;
  }
  this[957] = "scenes/Expressions/BarneyIdle.vcd";
  this[958] = "scenes/Expressions/BarneyAlert.vcd";
  this[959] = "scenes/Expressions/BarneyCombat.vcd";
  sub_10399F00(this);
  v2 = *(int (__thiscall **)(_DWORD *))(*this + 1164);
  this[63] |= 0x58000000u;
  result = v2(this);
  this[50] = sub_10327AA0;
  return result;
}
