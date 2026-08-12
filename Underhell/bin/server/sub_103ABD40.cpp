int __thiscall sub_103ABD40(int this, int a2)
{
  int result; // eax

  sub_1023C380((_DWORD *)this, (int)"NPC_Stalker.Pain", 0.0, 0);
  result = dword_106B31C8;
  *(float *)(this + 3660) = *(float *)(dword_106B31C8 + 12) + 1.5;
  *(float *)(this + 3656) = *(float *)(dword_106B31C8 + 12) + 1.5;
  *(float *)(this + 3652) = *(float *)(dword_106B31C8 + 12) + 1.5;
  return result;
}
