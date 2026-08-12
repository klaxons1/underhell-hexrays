void __thiscall sub_103AEDD0(int this)
{
  if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 3904) > 2.0 )
  {
    sub_1023C380((_DWORD *)this, (int)"NPC_Strider.Alert", 0.0, 0);
    *(float *)(this + 3904) = *(float *)(dword_106B31C8 + 12);
  }
}
