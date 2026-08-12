int __thiscall sub_10207130(int this)
{
  int result; // eax
  int v3; // edi
  int v4; // eax
  int v5; // edi
  double ArgList; // [esp+0h] [ebp-220h]
  char *v7; // [esp+10h] [ebp-210h]
  char Destination[512]; // [esp+20h] [ebp-200h] BYREF

  result = sub_100C0140(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    ArgList = *(float *)(this + 488);
    sub_10429A00(Destination, 0x200u, "Avelocity: %.2f %.2f %.2f", SLOBYTE(ArgList));
    sub_100D5DE0((_DWORD *)this, v3, (int)Destination, 0.0, 255, 255, 255, 255);
    v4 = *(_DWORD *)(this + 1672);
    v5 = v3 + 1;
    if ( v4 == 2 )
    {
      sub_104299C0(Destination, "DOOR STATE: OPEN", 0x200u);
LABEL_13:
      sub_100D5DE0((_DWORD *)this, v5, (int)Destination, 0.0, 255, 255, 255, 255);
      return v5 + 1;
    }
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        sub_104299C0(Destination, "DOOR STATE: OPENING", 0x200u);
        goto LABEL_13;
      }
      if ( v4 == 3 )
      {
        sub_104299C0(Destination, "DOOR STATE: CLOSING", 0x200u);
        goto LABEL_13;
      }
      if ( v4 != 4 )
        goto LABEL_13;
      v7 = "DOOR STATE: AJAR";
    }
    else
    {
      v7 = "DOOR STATE: CLOSED";
    }
    sub_104299C0(Destination, v7, 0x200u);
    goto LABEL_13;
  }
  return result;
}
