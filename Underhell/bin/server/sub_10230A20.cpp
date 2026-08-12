char __thiscall sub_10230A20(_DWORD *this)
{
  unsigned int v1; // edx
  int *v2; // eax
  unsigned int v3; // edx
  _DWORD *v4; // esi
  const char *v6; // eax
  _DWORD *v7; // eax
  const char *v8; // eax

  v1 = this[221];
  if ( v1 == -1 )
    return 1;
  v2 = &off_1061BE18[4 * (this[221] & 0xFFF) + 1];
  v3 = v1 >> 12;
  if ( off_1061BE18[4 * (this[221] & 0xFFF) + 2] != v3 )
    return 1;
  v4 = (_DWORD *)*v2;
  if ( !*v2 )
    return 1;
  if ( this[205] )
  {
    if ( off_1061BE18[4 * (this[221] & 0xFFF) + 2] == v3 )
      v6 = sub_100D6390(v4);
    else
      v6 = sub_100D6390(0);
    DevMsg(2, "%s is specified as the 'Next Script' and cannot be kicked out of the queue\n", v6);
    return 0;
  }
  else
  {
    if ( off_1061BE18[4 * (this[221] & 0xFFF) + 2] != v3 )
      v4 = 0;
    if ( (v4[62] & 0x200) == 0 )
      return 1;
    if ( off_1061BE18[4 * (this[221] & 0xFFF) + 2] == v3 )
      v7 = (_DWORD *)*v2;
    else
      v7 = 0;
    v8 = sub_100D6390(v7);
    DevMsg(2, "%s is a priority script and cannot be kicked out of the queue\n", v8);
    return 0;
  }
}
