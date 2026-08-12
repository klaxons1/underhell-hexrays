int __thiscall sub_1020E410(unsigned int this)
{
  int *v2; // ecx
  const char *v3; // eax
  const char *v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  int result; // eax

  if ( *(_BYTE *)(this + 1640) )
  {
    *(float *)(this + 108) = *(float *)(this + 1628);
    if ( *(_DWORD *)(this + 248) != *(_DWORD *)(this + 1636) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v2 = *(int **)(this + 24);
        if ( v2 )
          sub_100194B0(v2, 248);
      }
      *(_DWORD *)(this + 248) = *(_DWORD *)(this + 1636);
    }
    *(_BYTE *)(this + 1640) = 0;
  }
  *(_DWORD *)(this + 1724) = -1;
  *(_BYTE *)(this + 1728) = 0;
  if ( (*(_DWORD *)(this + 248) & 0x1000) == 0 )
  {
    v3 = *(const char **)(this + 1732);
    if ( !v3 )
      v3 = String;
    sub_1023B860(v3);
    v4 = *(const char **)(this + 1740);
    if ( !v4 )
      v4 = String;
    sub_1023C380((int)v4, 0.0, 0);
  }
  *(_DWORD *)(this + 1672) = 0;
  v5 = *(_DWORD *)(this + 1716);
  if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1716) & 0xFFF) + 2] != v5 >> 12 )
    v6 = 0;
  else
    v6 = off_1061BE18[4 * (*(_DWORD *)(this + 1716) & 0xFFF) + 1];
  sub_1010DD80((_DWORD *)(this + 1848), __SPAIR64__(this, v6), 0.0);
  sub_10206C10((_DWORD *)this, 0);
  result = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)this + 888))(this);
  *(_DWORD *)(this + 1716) = -1;
  return result;
}
