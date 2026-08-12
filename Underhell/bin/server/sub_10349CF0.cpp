void __thiscall sub_10349CF0(_DWORD *this, int a2)
{
  int v3; // eax
  void (__noreturn ***v4)(); // eax

  v3 = this[990];
  if ( v3 > 8 && v3 < 12 )
  {
    if ( this[1040] )
    {
      v4 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v4)[12])(v4, this[1040], 0.0, 0.0);
    }
    this[990] = 0;
    this[1008] = -1;
  }
  sub_100B8440(this, a2);
}
