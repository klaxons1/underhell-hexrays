int __thiscall sub_10184BF0(int this)
{
  int result; // eax
  int v3; // edi
  double ArgList; // [esp+0h] [ebp-220h]
  char Buffer[512]; // [esp+20h] [ebp-200h] BYREF

  result = sub_100DF940(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    ArgList = *(float *)(this + 728);
    sub_10429A00(Buffer, 0x200u, "angles: %g %g %g", SLOBYTE(ArgList));
    sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
    return v3 + 1;
  }
  return result;
}
