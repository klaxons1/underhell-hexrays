char *__thiscall sub_10412F60(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  char *result; // eax

  v2 = *(_DWORD *)(this + 1772);
  if ( v2 == -1
    || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 1772) & 0xFFF) + 1],
        result = (char *)(v2 >> 12),
        (char *)v3[1] != result)
    || !*v3 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    result = sub_104092F0((float *)(this + 580), this, 0);
    if ( result )
    {
      result = (char *)(*(int (__thiscall **)(char *))(*(_DWORD *)result + 8))(result);
      *(_DWORD *)(this + 1772) = *(_DWORD *)result;
    }
    else
    {
      *(_DWORD *)(this + 1772) = -1;
    }
  }
  return result;
}
