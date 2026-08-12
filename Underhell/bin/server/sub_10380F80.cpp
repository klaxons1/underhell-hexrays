int __thiscall sub_10380F80(int this)
{
  int result; // eax
  int v3; // esi
  const char *v4; // eax
  int v5; // esi
  const char *v6; // eax
  char Buffer[512]; // [esp+1Ch] [ebp-200h] BYREF

  result = sub_1003B900((int *)this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    v4 = "On";
    if ( !*(_DWORD *)(this + 8) )
      v4 = "Off";
    sub_10429A00(Buffer, 0x200u, "State: %s", (char)v4);
    sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
    v5 = v3 + 1;
    v6 = "On";
    if ( (*(_DWORD *)(this + 248) & 0x10000) == 0 )
      v6 = "Off";
    sub_10429A00(Buffer, 0x200u, "LOS: %s", (char)v6);
    sub_100D5DE0((_DWORD *)this, v5, (int)Buffer, 0.0, 255, 255, 255, 255);
    return v5 + 1;
  }
  return result;
}
