int __thiscall sub_10070590(int this)
{
  int result; // eax
  int v3; // esi
  int v4; // eax
  const char *v5; // eax
  double v6; // st7
  int v7; // esi
  int v8; // esi
  double ArgList; // [esp+Ch] [ebp-210h]
  char v10; // [esp+14h] [ebp-208h]
  char Buffer[512]; // [esp+1Ch] [ebp-200h] BYREF

  result = sub_100DF940();
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    v4 = 0;
    while ( dword_10607330[2 * v4] != *(__int16 *)(this + 816) )
    {
      if ( (unsigned int)++v4 >= 0x1A )
      {
        v5 = "Obsolete / Unused";
        goto LABEL_6;
      }
    }
    v5 = (&off_10607334)[2 * v4];
LABEL_6:
    sub_10429A00(Buffer, 0x200u, "%s (%i)", (char)v5);
    sub_100D5DE0(v3, (int)Buffer, 0.0, 255, 255, 255, 255);
    v6 = *(float *)(this + 864) - *(float *)(dword_106B31C8 + 12);
    v7 = v3 + 1;
    if ( v6 < 0.0 )
      v6 = 0.0;
    ArgList = v6;
    sub_10429A00(Buffer, 0x200u, "delay %f", SLOBYTE(ArgList));
    sub_100D5DE0(v7, (int)Buffer, 0.0, 255, 255, 255, 255);
    v8 = v7 + 1;
    if ( *(_DWORD *)(this + 828) )
    {
      sub_10429A00(Buffer, 0x200u, "DISABLED", v10);
      sub_100D5DE0(v8, (int)Buffer, 0.0, 255, 255, 255, 255);
      return v8 + 1;
    }
    else
    {
      return v8;
    }
  }
  return result;
}
