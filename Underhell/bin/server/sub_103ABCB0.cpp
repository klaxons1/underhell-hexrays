void __thiscall sub_103ABCB0(int this)
{
  if ( *(float *)(this + 3656) < (double)*(float *)(dword_106B31C8 + 12) )
  {
    sub_1023C380((_DWORD *)this, (int)"NPC_Stalker.Ambient01", 0.0, 0);
    *(float *)(this + 3656) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                dword_106B31E4,
                                0.0,
                                5.0)
                            + *(float *)(dword_106B31C8 + 12)
                            + 3.0;
  }
}
