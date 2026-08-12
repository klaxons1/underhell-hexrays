void __thiscall sub_101A2020(int this)
{
  if ( (*(_DWORD *)(this + 256) & 0x10000000) == 0 && *(float *)(this + 4180) < (double)*(float *)(dword_106B31C8 + 12) )
  {
    sub_100AC410(this + 4244, "ACE_PAIN", -1, 0);
    *(float *)(this + 4180) = *(float *)(dword_106B31C8 + 12) + 1.0;
  }
}
