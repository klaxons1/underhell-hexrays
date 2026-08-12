int __thiscall sub_100BCF50(int this)
{
  int result; // eax

  *(float *)(this + 252) = 0.0;
  *(_DWORD *)(this + 268) = sub_100422D0();
  *(_BYTE *)(this + 256) = 0;
  *(_DWORD *)(this + 260) = -1;
  result = sub_102366F0(0);
  *(float *)(this + 252) = -100.0;
  return result;
}
