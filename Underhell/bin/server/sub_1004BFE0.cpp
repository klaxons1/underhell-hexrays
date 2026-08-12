int __thiscall sub_1004BFE0(int this)
{
  int result; // eax
  int v3; // edi
  int v4; // eax
  unsigned int v5; // eax
  int v6; // edi
  float v7; // [esp+0h] [ebp-1Ch]

  result = sub_100DF940();
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    v4 = *(__int16 *)(this + 822);
    v7 = 0.0;
    if ( v4 == -1 )
    {
      sub_100D5DE0(v3, (int)"Exclusive: Not Evaluated", v7, 255, 255, 255, 255);
    }
    else if ( *(_WORD *)(this + 822) )
    {
      if ( v4 == 1 )
        sub_100D5DE0(v3, (int)"Exclusive: YES", v7, 255, 255, 255, 255);
      else
        sub_100D5DE0(v3, (int)"Exclusive: !?INVALID?!", v7, 255, 255, 255, 255);
    }
    else
    {
      sub_100D5DE0(v3, (int)"Exclusive: NO", v7, 255, 255, 255, 255);
    }
    v5 = *(_DWORD *)(this + 848);
    v6 = v3 + 1;
    if ( v5 != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 848) & 0xFFF) + 2] == v5 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 848) & 0xFFF) + 1] )
    {
      sub_100D5DE0(v6, (int)"LOCKED.", 0.0, 255, 255, 255, 255);
      return v6 + 1;
    }
    else
    {
      sub_100D5DE0(v6, (int)"Available", 0.0, 255, 255, 255, 255);
      return v6 + 1;
    }
  }
  return result;
}
