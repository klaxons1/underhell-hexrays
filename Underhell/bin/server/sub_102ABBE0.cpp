int __thiscall sub_102ABBE0(int this)
{
  int result; // eax
  int v3; // edi
  int v4; // edi
  int v5; // edi
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  double v11; // [esp+4h] [ebp-118h]
  double ArgList; // [esp+Ch] [ebp-110h]
  double ArgLista; // [esp+Ch] [ebp-110h]
  char Destination[256]; // [esp+1Ch] [ebp-100h] BYREF

  result = sub_100DF940(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    if ( *(_BYTE *)(this + 920) )
      sub_104299C0(Destination, "State: Disabled\n", 0xFFu);
    else
      sub_104299C0(Destination, "State: Enabled\n", 0xFFu);
    sub_100D5DE0((_DWORD *)this, v3, (int)Destination, 0.0, 255, 255, 255, 255);
    v4 = v3 + 1;
    if ( *(_DWORD *)(this + 980) )
      sub_10429A00(Destination, 0xFFu, "Follow Target: %s\n", *(_DWORD *)(this + 980));
    else
      sub_104299C0(Destination, "Follow Target : NONE\n", 0xFFu);
    sub_100D5DE0((_DWORD *)this, v4, (int)Destination, 0.0, 255, 255, 255, 255);
    v5 = v4 + 1;
    if ( *(_DWORD *)(this + 976) )
      sub_10429A00(Destination, 0xFFu, "Fight Target: %s\n", *(_DWORD *)(this + 976));
    else
      sub_104299C0(Destination, "Fight Target : NONE\n", 0xFFu);
    sub_100D5DE0((_DWORD *)this, v5, (int)Destination, 0.0, 255, 255, 255, 255);
    v6 = v5 + 1;
    if ( *(_DWORD *)(this + 964) )
      sub_10429A00(Destination, 0xFFu, "Spawn Target: %s\n", *(_DWORD *)(this + 964));
    else
      sub_104299C0(Destination, "Spawn Target : NONE\n", 0xFFu);
    sub_100D5DE0((_DWORD *)this, v6, (int)Destination, 0.0, 255, 255, 255, 255);
    ArgList = *(float *)(this + 808);
    v7 = v6 + 1;
    sub_10429A00(Destination, 0xFFu, "Spawn Frequency: %f\n", SLOBYTE(ArgList));
    sub_100D5DE0((_DWORD *)this, v7, (int)Destination, 0.0, 255, 255, 255, 255);
    ArgLista = *(float *)(this + 968);
    ++v7;
    sub_10429A00(Destination, 0xFFu, "Spawn Radius: %.02f units\n", SLOBYTE(ArgLista));
    sub_100D5DE0((_DWORD *)this, v7, (int)Destination, 0.0, 255, 255, 255, 255);
    v8 = v7 + 1;
    if ( *(_DWORD *)(this + 960) )
    {
      sub_10429A00(Destination, 0xFFu, "Spawn Group: %s\n", *(_DWORD *)(this + 960));
      sub_100D5DE0((_DWORD *)this, v8++, (int)Destination, 0.0, 255, 255, 255, 255);
    }
    sub_10429A00(Destination, 0xFFu, "Live Children: (%d/%d)\n", *(_DWORD *)(this + 908));
    sub_100D5DE0((_DWORD *)this, v8, (int)Destination, 0.0, 255, 255, 255, 255);
    v9 = v8 + 1;
    if ( *(_DWORD *)(this + 1028) )
    {
      sub_10429A00(Destination, 0xFFu, "Pool: (%d/%d) (%d per regen)\n", *(_DWORD *)(this + 1024));
      sub_100D5DE0((_DWORD *)this, v9, (int)Destination, 0.0, 255, 255, 255, 255);
      v10 = v9 + 1;
      sub_100E9200((_DWORD *)this, off_1065FD70);
      v11 = *(float *)(this + 1036);
      sub_10429A00(Destination, 0xFFu, "Pool Regen Time: %.02f sec. (%.02f remaining)\n", SLOBYTE(v11));
      sub_100D5DE0((_DWORD *)this, v10, (int)Destination, 0.0, 255, 255, 255, 255);
      return v10 + 1;
    }
    else
    {
      return v9;
    }
  }
  return result;
}
