int __thiscall sub_102561A0(int this)
{
  int result; // eax
  int v3; // edi
  double v4; // st7
  bool v5; // c0
  bool v6; // c3
  double v7; // st7
  double ArgList; // [esp+Ch] [ebp-110h]
  char Buffer[256]; // [esp+1Ch] [ebp-100h] BYREF

  result = sub_10255DA0(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    v4 = *(float *)(this + 1128);
    v5 = v4 > 0.0;
    v6 = 0.0 == v4;
    v7 = 0.0;
    if ( v5 || v6 )
      v7 = *(float *)(this + 1128);
    ArgList = *(float *)(this + 1124) - v7;
    sub_10429A00(Buffer, 0xFFu, "Time:   %3.2f", SLOBYTE(ArgList));
    sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
    return v3 + 1;
  }
  return result;
}
