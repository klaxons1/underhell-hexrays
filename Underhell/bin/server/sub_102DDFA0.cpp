void __thiscall sub_102DDFA0(_DWORD *this, __int64 *a2)
{
  unsigned int v2; // edx
  int *v3; // eax
  unsigned int v4; // edx
  int v5; // eax

  v2 = this[248];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (this[248] & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( off_1061BE18[4 * (this[248] & 0xFFF) + 2] == v4 )
    {
      if ( *v3 )
      {
        if ( off_1061BE18[4 * (this[248] & 0xFFF) + 2] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        sub_1017CC00((int)(this + 242), *(_DWORD *)(v5 + 220), *a2);
      }
    }
  }
}
