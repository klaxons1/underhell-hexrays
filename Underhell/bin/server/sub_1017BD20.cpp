int __thiscall sub_1017BD20(int this)
{
  int result; // eax
  int v3; // edi
  const char *v4; // eax
  const char *v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  char Destination[512]; // [esp+1Ch] [ebp-200h] BYREF

  result = sub_100DF940(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    v4 = *(const char **)(this + 824);
    if ( !v4 )
      v4 = String;
    sub_10429A00(Destination, 0x200u, "State: %s", (char)v4);
    sub_100D5DE0((_DWORD *)this, v3, (int)Destination, 0.0, 255, 255, 255, 255);
    v5 = *(const char **)(this + 824);
    v6 = v3 + 1;
    if ( !v5 )
      v5 = String;
    v7 = sub_101679A0((int)v5);
    v8 = sub_10167A00(v7);
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
          sub_104299C0(Destination, "Value: DEAD", 0x200u);
      }
      else
      {
        sub_104299C0(Destination, "Value: ON", 0x200u);
      }
    }
    else
    {
      sub_104299C0(Destination, "Value: OFF", 0x200u);
    }
    sub_100D5DE0((_DWORD *)this, v6, (int)Destination, 0.0, 255, 255, 255, 255);
    return v6 + 1;
  }
  return result;
}
