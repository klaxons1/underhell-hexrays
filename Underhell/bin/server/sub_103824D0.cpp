void __thiscall sub_103824D0(int this, float *a2)
{
  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 3812) )
  {
    if ( *(_BYTE *)(this + 3853) != 1 )
    {
      *(_BYTE *)(this + 3853) = 1;
      sub_1023C380((_DWORD *)this, (int)"NPC_Manhack.ChargeAnnounce", 0.0, 0);
    }
    *(float *)(this + 3808) = *(float *)(dword_106B31C8 + 12) + 2.0;
    *(float *)(this + 3812) = *(float *)(dword_106B31C8 + 12) + 1.0;
    *(float *)(this + 3816) = *a2;
    *(float *)(this + 3820) = a2[1];
    *(float *)(this + 3824) = a2[2];
  }
}
