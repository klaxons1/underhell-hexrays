int __thiscall sub_1017B210(int this)
{
  int result; // eax
  int v3; // esi
  const char *v4; // eax
  char Buffer[512]; // [esp+1Ch] [ebp-200h] BYREF

  result = sub_100DF940(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    v4 = "TRUE";
    if ( !*(_BYTE *)(this + 800) )
      v4 = "FALSE";
    sub_10429A00(Buffer, 0x200u, "Branch value: %s", (char)v4);
    sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
    return v3 + 1;
  }
  return result;
}
