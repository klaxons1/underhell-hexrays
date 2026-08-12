int __thiscall sub_102CA600(int this)
{
  int result; // eax
  int v3; // edi
  int v4; // edi
  unsigned int v5; // eax
  int v6; // edi
  int *v7; // ecx
  unsigned int v8; // eax
  _DWORD *v9; // ecx
  char v10; // al
  int v11; // edi
  double v12; // [esp+0h] [ebp-120h]
  double ArgList; // [esp+10h] [ebp-110h]
  char v14; // [esp+18h] [ebp-108h]
  char Destination[256]; // [esp+20h] [ebp-100h] BYREF

  result = sub_100DF940(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    if ( (*(_BYTE *)(this + 248) & 1) != 0 )
      sub_104299C0(Destination, "State: Active", 0xFFu);
    else
      sub_104299C0(Destination, "State: Inactive", 0xFFu);
    sub_100D5DE0((_DWORD *)this, v3, (int)Destination, 0.0, 255, 255, 255, 255);
    ArgList = *(float *)(this + 804);
    v4 = v3 + 1;
    sub_10429A00(Destination, 0xFFu, "Fire Rate: %f", SLOBYTE(ArgList));
    sub_100D5DE0((_DWORD *)this, v4, (int)Destination, 0.0, 255, 255, 255, 255);
    v5 = *(_DWORD *)(this + 808);
    v6 = v4 + 1;
    if ( v5 != -1
      && (v7 = &off_1061BE18[4 * (*(_DWORD *)(this + 808) & 0xFFF) + 1],
          v8 = v5 >> 12,
          off_1061BE18[4 * (*(_DWORD *)(this + 808) & 0xFFF) + 2] == v8)
      && *v7 )
    {
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 808) & 0xFFF) + 2] == v8 )
        v9 = (_DWORD *)*v7;
      else
        v9 = 0;
      v10 = (unsigned __int8)sub_100D6390(v9);
      sub_10429A00(Destination, 0xFFu, "Target: %s", v10);
    }
    else
    {
      sub_10429A00(Destination, 0xFFu, "Target:   -  ", v14);
    }
    sub_100D5DE0((_DWORD *)this, v6, (int)Destination, 0.0, 255, 255, 255, 255);
    v11 = v6 + 1;
    if ( *(char *)(this + 248) >= 0 )
    {
      sub_10429A00(Destination, 0xFFu, "Aim Pos:    -  ", v14);
    }
    else
    {
      v12 = *(float *)(this + 1080);
      sub_10429A00(Destination, 0xFFu, "Aim Pos: %3.0f %3.0f %3.0f", SLOBYTE(v12));
    }
    sub_100D5DE0((_DWORD *)this, v11, (int)Destination, 0.0, 255, 255, 255, 255);
    return v11 + 1;
  }
  return result;
}
