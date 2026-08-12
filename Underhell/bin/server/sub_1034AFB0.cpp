int __thiscall sub_1034AFB0(int this, _DWORD *a2)
{
  unsigned int v2; // edx
  int **v3; // eax
  unsigned int v4; // edx

  v2 = *(_DWORD *)(this + 4016);
  if ( v2 != -1 )
  {
    v3 = (int **)&off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 2] == v4
      && *v3
      && !*(_BYTE *)(this + 4000)
      && ((a2[16] & 0x2000000) != 0 || *(_DWORD *)(this + 3988) == 1) )
    {
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 4016) & 0xFFF) + 2] == v4 )
      {
        sub_100D9E70(*v3, (int)a2, a2);
        return 0;
      }
      sub_100D9E70(0, (int)a2, a2);
    }
  }
  return 0;
}
