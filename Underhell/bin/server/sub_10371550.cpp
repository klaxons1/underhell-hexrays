void __thiscall sub_10371550(int this, int a2)
{
  if ( *(float *)(this + 4208) < (double)*(float *)(dword_106B31C8 + 12) )
  {
    sub_1023C380((_DWORD *)this, (int)"NPC_Hunter.Pain", 0.0, 0);
    *(float *)(this + 4208) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                dword_106B31E4,
                                0.5,
                                1.2)
                            + *(float *)(dword_106B31C8 + 12);
  }
}
