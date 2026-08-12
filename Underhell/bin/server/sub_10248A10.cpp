_DWORD *__thiscall sub_10248A10(_DWORD *this, char a2)
{
  void (__noreturn ***v3)(); // edi

  *this = &CTankTrainAI::`vftable';
  v3 = sub_1023DBA0();
  if ( this[203] )
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v3)[10])(v3, this[203]);
  if ( this[204] )
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v3)[10])(v3, this[204]);
  sub_100DF1D0(this);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}
