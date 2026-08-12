int (*__thiscall sub_101737E0(int this))(void)
{
  int (*result)(void); // eax
  int v3; // eax
  float v4; // [esp+8h] [ebp-1Ch]
  _WORD v5[8]; // [esp+14h] [ebp-10h] BYREF

  result = *(int (**)(void))(this + 8);
  if ( result )
    result = (int (*)(void))result();
  if ( !*(_BYTE *)(this + 1233) )
  {
    if ( *(_BYTE *)(this + 1242) )
    {
      *(_BYTE *)(this + 1242) = 0;
      strcpy((char *)v5, "Radio.Track.1");
      v5[7] = 0;
      v3 = sub_10219A30();
      LOBYTE(v5[6]) += v3 % 7;
      *(_DWORD *)(this + 1236) = v3 % 7;
      sub_1023C380((int)v5, 0.0, 0);
    }
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_1023D4B0(0x20000, this + 580, 1024, 1.0, this, 2, 0);
    v4 = *(float *)(dword_106B31C8 + 12) + 1.0;
    return (int (*)(void))sub_100EC4A0((int *)this, v4, 0);
  }
  return result;
}
