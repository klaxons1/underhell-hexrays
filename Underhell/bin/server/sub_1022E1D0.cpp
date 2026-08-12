int *__thiscall sub_1022E1D0(int this)
{
  const char *v2; // edx
  int v3; // eax
  int *result; // eax
  _DWORD *v5; // eax

  if ( *(_BYTE *)(this + 1501) && !*(_DWORD *)(this + 976) )
  {
    v2 = *(const char **)(this + 1504);
    if ( !v2 )
      v2 = String;
    if ( *(_DWORD *)(this + 1508) == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 1508) & 0xFFF) + 2] != *(_DWORD *)(this + 1508) >> 12 )
    {
      v3 = 0;
    }
    else
    {
      v3 = off_1061BE18[4 * (*(_DWORD *)(this + 1508) & 0xFFF) + 1];
    }
    *(_DWORD *)(this + 976) = sub_10224260((_DWORD *)this, v3, v2);
  }
  sub_100E38F0((float *)this);
  result = (int *)sub_10226440();
  if ( result )
  {
    v5 = (_DWORD *)sub_10226440();
    return sub_1022BC10(v5, this);
  }
  return result;
}
