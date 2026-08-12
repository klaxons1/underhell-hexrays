int __thiscall sub_1024ED90(int this)
{
  int result; // eax
  int v3; // edi
  int v4; // edi
  double ArgList; // [esp+0h] [ebp-220h]
  double v6; // [esp+8h] [ebp-218h]
  double v7; // [esp+10h] [ebp-210h]
  float v8; // [esp+14h] [ebp-20Ch]
  char Buffer[512]; // [esp+20h] [ebp-200h] BYREF

  result = sub_100DF940(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    ArgList = *(float *)(this + 728);
    sub_10429A00(Buffer, 0x200u, "angles: %g %g %g", SLOBYTE(ArgList));
    sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
    v4 = v3 + 1;
    v8 = *(float *)(this + 596) * *(float *)(this + 596)
       + *(float *)(this + 592) * *(float *)(this + 592)
       + *(float *)(this + 600) * *(float *)(this + 600);
    v6 = off_10689708(v8);
    sub_10429A00(Buffer, 0x200u, "current speed (goal): %g (%g)", SLOBYTE(v6));
    sub_100D5DE0((_DWORD *)this, v4, (int)Buffer, 0.0, 255, 255, 255, 255);
    v7 = *(float *)(this + 868);
    ++v4;
    sub_10429A00(Buffer, 0x200u, "max speed: %g", SLOBYTE(v7));
    sub_100D5DE0((_DWORD *)this, v4, (int)Buffer, 0.0, 255, 255, 255, 255);
    return v4 + 1;
  }
  return result;
}
