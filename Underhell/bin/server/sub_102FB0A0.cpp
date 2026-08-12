int __thiscall sub_102FB0A0(int this)
{
  int result; // eax

  sub_1023C380((_DWORD *)this, (int)"NPC_Antlion.Idle", 0.0, 0);
  result = dword_106B31C8;
  *(float *)(this + 3660) = *(float *)(dword_106B31C8 + 12) + 4.0;
  return result;
}
