int __thiscall sub_103EF130(_BYTE *this)
{
  int result; // eax
  int v3; // esi
  const char *v4; // eax
  char *v5; // eax
  int v6; // esi
  const char *v7; // eax
  char *v8; // eax
  char Buffer[256]; // [esp+1Ch] [ebp-100h] BYREF

  result = sub_10265F50(this);
  v3 = result;
  if ( (this[236] & 1) != 0 )
  {
    v4 = "Locked";
    if ( !this[1948] )
      v4 = "Unlocked";
    v5 = sub_1001E280(Buffer, "Entrance: %s", v4);
    sub_100D5DE0(this, v3, (int)v5, 0.0, 255, 255, 255, 255);
    v6 = v3 + 1;
    v7 = "Locked";
    if ( !this[1949] )
      v7 = "Unlocked";
    v8 = sub_1001E280(Buffer, "Exit: %s", v7);
    sub_100D5DE0(this, v6, (int)v8, 0.0, 255, 255, 255, 255);
    return v6 + 1;
  }
  return result;
}
