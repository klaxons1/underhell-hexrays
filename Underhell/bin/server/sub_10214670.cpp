void __thiscall sub_10214670(int this, int a2)
{
  unsigned int v2; // edx
  int *v3; // eax
  unsigned int v4; // edx

  *(_BYTE *)(this + 1728) = 1;
  v2 = *(_DWORD *)(this + 1748);
  if ( v2 != -1
    && (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 1748) & 0xFFF) + 1],
        v4 = v2 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(this + 1748) & 0xFFF) + 2] == v4)
    && *v3 )
  {
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 1748) & 0xFFF) + 2] == v4 )
      sub_102145F0(*v3, a2);
    else
      sub_102145F0(0, a2);
  }
  else
  {
    sub_10214340((_BYTE *)this, a2);
  }
}
