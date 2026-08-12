int __thiscall sub_101DC7A0(int this)
{
  int result; // eax
  int v3; // esi
  int v4; // esi
  double ArgList; // [esp+Ch] [ebp-210h]
  char Buffer[512]; // [esp+1Ch] [ebp-200h] BYREF

  result = sub_100DF940(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    ArgList = *(float *)(this + 800);
    sub_10429A00(Buffer, 0x200u, "    magnitude: %f", SLOBYTE(ArgList));
    sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
    v4 = v3 + 1;
    sub_10429A00(Buffer, 0x200u, "    limit to: %s", *(_DWORD *)(this + 808));
    sub_100D5DE0((_DWORD *)this, v4, (int)Buffer, 0.0, 255, 255, 255, 255);
    return v4 + 1;
  }
  return result;
}
