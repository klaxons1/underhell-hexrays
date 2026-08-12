int __thiscall sub_10108080(int this)
{
  int result; // eax
  int v3; // esi
  unsigned int v4; // eax
  int v5; // esi
  const char *v6; // eax
  char Buffer[256]; // [esp+1Ch] [ebp-100h] BYREF

  result = sub_100DF940(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    v4 = *(_DWORD *)(this + 800);
    if ( v4 >= 4 )
      v4 = 4;
    sub_10429A00(Buffer, 0xFFu, "State: %s", *(_DWORD *)&off_10613D54[4 * v4]);
    sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
    v5 = v3 + 1;
    v6 = "Locked";
    if ( !*(_BYTE *)(this + 976) )
      v6 = "Unlocked";
    sub_10429A00(Buffer, 0xFFu, "%s", (char)v6);
    sub_100D5DE0((_DWORD *)this, v5, (int)Buffer, 0.0, 255, 255, 255, 255);
    return v5 + 1;
  }
  return result;
}
