void __thiscall sub_10366040(_DWORD *this)
{
  void (__noreturn ***v2)(); // eax
  void (__noreturn ***v3)(); // eax
  void (__noreturn ***v4)(); // eax
  void (__noreturn ***v5)(); // eax

  if ( this[943] )
  {
    if ( this[1004] )
    {
      sub_1023C380(this, (int)"NPC_FastZombie.LeapAttack", 0.0, 0);
      v2 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v2)[11])(v2, this[943], 70.0, 0.5);
      v3 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v3)[12])(v3, this[943], 1.0, 0.5);
      v4 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v4)[11])(v4, this[1004], 100.0, 1.0);
      v5 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v5)[12])(v5, this[1004], 0.0, 1.0);
    }
  }
}
