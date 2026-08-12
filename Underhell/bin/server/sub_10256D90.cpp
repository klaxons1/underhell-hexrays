int __thiscall sub_10256D90(int this)
{
  int result; // eax
  int v3; // edi
  double ArgList; // [esp+Ch] [ebp-110h]
  char Buffer[256]; // [esp+1Ch] [ebp-100h] BYREF

  result = sub_10255DA0(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    ArgList = *(float *)(this + 1116);
    sub_10429A00(Buffer, 0xFFu, "Magnitude: %3.2f", SLOBYTE(ArgList));
    sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
    return v3 + 1;
  }
  return result;
}
