void __thiscall sub_10382560(int this, char a2)
{
  if ( *(float *)(dword_106B31C8 + 12) <= (double)*(float *)(this + 3812) )
  {
    if ( *(_BYTE *)(this + 3853) )
    {
      *(_BYTE *)(this + 3853) = 0;
      sub_1023C380((_DWORD *)this, (int)"NPC_Manhack.ChargeEnd", 0.0, 0);
    }
    *(float *)(this + 3808) = *(float *)(dword_106B31C8 + 12) + 2.0;
    *(float *)(this + 3812) = *(float *)(dword_106B31C8 + 12) - 0.1;
    if ( a2 )
      sub_10044510(this, (int)"Stopping burst");
  }
}
