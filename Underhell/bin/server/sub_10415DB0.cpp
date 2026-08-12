_DWORD *__thiscall sub_10415DB0(_DWORD *this, char a2)
{
  void (__noreturn ***v3)(); // eax
  _DWORD *v4; // ecx

  *this = &CFlare::`vftable';
  v3 = sub_1023DBA0();
  ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v3)[10])(v3, this[532]);
  this[532] = 0;
  sub_10415990((int)this);
  sub_100CF2B0(v4);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}
