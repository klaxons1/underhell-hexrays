unsigned int __thiscall sub_100F7FD0(_DWORD *this)
{
  unsigned int result; // eax
  _DWORD *v2; // esi
  int *v3; // ecx
  int *v4; // ecx

  result = this[878];
  v2 = this + 878;
  if ( result != -1 )
  {
    v3 = &off_1061BE18[4 * (this[878] & 0xFFF) + 1];
    result >>= 12;
    if ( v3[1] == result )
    {
      if ( *v3 )
      {
        result = (unsigned int)(v2 - 878);
        if ( *((_BYTE *)v2 - 3428) )
        {
          *(_BYTE *)(result + 88) |= 1u;
          *v2 = -1;
        }
        else
        {
          v4 = *(int **)(result + 24);
          if ( v4 )
            result = sub_100194B0(v4, 3512);
          *v2 = -1;
        }
      }
    }
  }
  return result;
}
