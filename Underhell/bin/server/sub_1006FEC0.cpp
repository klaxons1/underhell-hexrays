int __thiscall sub_1006FEC0(_DWORD *this)
{
  int v2; // edi
  int v3; // eax
  const char *v4; // eax
  char Buffer[512]; // [esp+1Ch] [ebp-200h] BYREF

  v2 = sub_100DF940();
  v3 = this[212];
  if ( (v3 & 1) == 0 )
    goto LABEL_6;
  if ( (v3 & 2) != 0 )
  {
    sub_1006DCB0(this);
  }
  else
  {
    sub_1006F910(this);
    this[212] |= 2u;
  }
  v4 = "yes";
  if ( !this[209] )
LABEL_6:
    v4 = "no";
  sub_10429A00(Buffer, 0x200u, "Active: %s", (char)v4);
  sub_100D5DE0(v2, (int)Buffer, 0.0, 255, 255, 255, 255);
  return v2 + 1;
}
