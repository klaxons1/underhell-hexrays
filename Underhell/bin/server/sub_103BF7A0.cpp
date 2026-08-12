void __thiscall sub_103BF7A0(int this)
{
  sub_1023C380((_DWORD *)this, (int)"NPC_FloorTurret.DryFire", 0.0, 0);
  sub_1023C380((_DWORD *)this, (int)"NPC_FloorTurret.Activate", 0.0, 0);
  if ( RandomFloat(0.0, 1.0) <= 0.5 )
    *(float *)(this + 3744) = *(float *)(dword_106B31C8 + 12);
  else
    *(float *)(this + 3744) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                dword_106B31E4,
                                1.0,
                                2.5)
                            + *(float *)(dword_106B31C8 + 12);
}
