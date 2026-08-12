int __thiscall sub_101088F0(int this)
{
  int result; // eax
  int v3; // edi
  int v4; // edi
  int v5; // edi
  const char *v6; // eax
  double ArgList; // [esp+0h] [ebp-124h]
  double ArgLista; // [esp+0h] [ebp-124h]
  double v9; // [esp+10h] [ebp-114h]
  double v10; // [esp+10h] [ebp-114h]
  char Buffer[256]; // [esp+24h] [ebp-100h] BYREF

  result = sub_10108080(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    ArgList = *(float *)(this + 728);
    sub_10429A00(Buffer, 0xFFu, "QAngle: %.2f %.2f %.2f", SLOBYTE(ArgList));
    sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
    v4 = v3 + 1;
    ArgLista = *(float *)(this + 488);
    sub_10429A00(Buffer, 0xFFu, "AVelocity: %.2f %.2f %.2f", SLOBYTE(ArgLista));
    sub_100D5DE0((_DWORD *)this, v4, (int)Buffer, 0.0, 255, 255, 255, 255);
    v9 = *(float *)(this + 1272);
    ++v4;
    sub_10429A00(Buffer, 0xFFu, "Target Pos:   %3.3f", SLOBYTE(v9));
    sub_100D5DE0((_DWORD *)this, v4++, (int)Buffer, 0.0, 255, 255, 255, 255);
    v10 = sub_10108630(this, this + 728);
    sub_10429A00(Buffer, 0xFFu, "Current Pos:   %3.3f", SLOBYTE(v10));
    sub_100D5DE0((_DWORD *)this, v4, (int)Buffer, 0.0, 255, 255, 255, 255);
    v5 = v4 + 1;
    v6 = "Forward";
    if ( *(_DWORD *)(this + 1284) != 1 )
      v6 = "Backward";
    sub_10429A00(Buffer, 0xFFu, "Direction: %s", (char)v6);
    sub_100D5DE0((_DWORD *)this, v5, (int)Buffer, 0.0, 255, 255, 255, 255);
    return v5 + 1;
  }
  return result;
}
