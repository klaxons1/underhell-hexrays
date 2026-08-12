bool __thiscall sub_100254F0(int this)
{
  return *(_DWORD *)(this + 2324) == 4
      || *(_BYTE *)(this + 2680)
      || *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 2700)
      || (*(_DWORD *)(this + 248) & 0x1000) != 0;
}
