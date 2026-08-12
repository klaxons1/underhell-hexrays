void __thiscall sub_10305AA0(int this)
{
  if ( *(_DWORD *)(this + 1144) == 1 )
  {
    if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 1136) )
    {
      sub_1023C380((_DWORD *)this, (int)"NPC_Antlion_Grub.Stimulated", 0.0, 0);
      *(float *)(this + 1136) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                  dword_106B31E4,
                                  1.5,
                                  3.0)
                              + *(float *)(dword_106B31C8 + 12);
      *(float *)(this + 1132) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                  dword_106B31E4,
                                  4.0,
                                  8.0)
                              + *(float *)(dword_106B31C8 + 12);
    }
  }
  else if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 1132) )
  {
    sub_1023C380((_DWORD *)this, (int)"NPC_Antlion_Grub.Idle", 0.0, 0);
    *(float *)(this + 1132) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                dword_106B31E4,
                                8.0,
                                12.0)
                            + *(float *)(dword_106B31C8 + 12);
  }
}
