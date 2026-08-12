void __thiscall sub_1039BFC0(int this)
{
  void (__noreturn ***v2)(); // eax
  int v3; // ecx

  if ( *(_BYTE *)(this + 3860) )
  {
    v2 = sub_1023DBA0();
    v3 = *(_DWORD *)(this + 3836);
  }
  else
  {
    v2 = sub_1023DBA0();
    v3 = *(_DWORD *)(this + 3840);
  }
  ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, void *, int))(*v2)[17])(v2, v3, 0, &unk_10677DD4, 3);
  sub_1023C380((_DWORD *)this, (int)"NPC_PoisonZombie.Alert", 0.0, 0);
}
