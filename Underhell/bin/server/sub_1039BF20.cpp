void __thiscall sub_1039BF20(int this, int a2)
{
  void (__noreturn ***v3)(); // eax
  int v4; // ecx

  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 3856) )
  {
    if ( *(_BYTE *)(this + 3860) )
    {
      v3 = sub_1023DBA0();
      v4 = *(_DWORD *)(this + 3836);
    }
    else
    {
      v3 = sub_1023DBA0();
      v4 = *(_DWORD *)(this + 3840);
    }
    ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, void *, int))(*v3)[17])(v3, v4, 0, &unk_10677DD4, 3);
    sub_1023C380((_DWORD *)this, (int)"NPC_PoisonZombie.Pain", 0.0, 0);
    *(float *)(this + 3856) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                dword_106B31E4,
                                4.0,
                                7.0)
                            + *(float *)(dword_106B31C8 + 12);
  }
}
