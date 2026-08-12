int __thiscall sub_10233BD0(int this)
{
  int result; // eax
  int v3; // edi
  int v4; // edi
  char *v5; // eax
  char v6; // al
  unsigned int v7; // eax
  int v8; // edi
  int *v9; // ecx
  unsigned int v10; // eax
  _DWORD *v11; // ecx
  char v12; // al
  char Destination[512]; // [esp+1Ch] [ebp-200h] BYREF

  result = sub_100DF940(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    if ( *(_DWORD *)(this + 3632) )
      sub_104299C0(Destination, "State: Off", 0x200u);
    else
      sub_104299C0(Destination, "State: On", 0x200u);
    sub_100D5DE0((_DWORD *)this, v3, (int)Destination, 0.0, 255, 255, 255, 255);
    v4 = v3 + 1;
    v5 = sub_100D8070((_DWORD *)this);
    if ( v5 )
    {
      v6 = (unsigned __int8)sub_100D6390(v5);
      sub_10429A00(Destination, 0x200u, "Next: %s", v6);
    }
    else
    {
      sub_104299C0(Destination, "Next: -NONE-", 0x200u);
    }
    sub_100D5DE0((_DWORD *)this, v4, (int)Destination, 0.0, 255, 255, 255, 255);
    v7 = *(_DWORD *)(this + 2420);
    v8 = v4 + 1;
    if ( v7 != -1
      && (v9 = &off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 1],
          v10 = v7 >> 12,
          off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 2] == v10)
      && *v9 )
    {
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 2] == v10 )
        v11 = (_DWORD *)*v9;
      else
        v11 = 0;
      v12 = (unsigned __int8)sub_100D6390(v11);
      sub_10429A00(Destination, 0x200u, "User: %s", v12);
    }
    else if ( *(_DWORD *)(this + 3632) )
    {
      sub_104299C0(Destination, "User: -NONE-", 0x200u);
    }
    else
    {
      sub_104299C0(Destination, "User: -LOOKING-", 0x200u);
    }
    sub_100D5DE0((_DWORD *)this, v8, (int)Destination, 0.0, 255, 255, 255, 255);
    return v8 + 1;
  }
  return result;
}
