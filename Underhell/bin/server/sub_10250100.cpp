_DWORD *__thiscall sub_10250100(_DWORD *this, char a2)
{
  bool v3; // zf
  void (__noreturn ***v4)(); // eax

  v3 = this[231] == 0;
  *this = &CBasePlatTrain::`vftable';
  if ( !v3 )
  {
    v4 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v4)[10])(v4, this[231]);
    this[231] = 0;
  }
  sub_100DF1D0(this);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}
