int __thiscall sub_102FE1C0(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // eax

  v3 = this[1025];
  if ( (v3 != -1 && (v4 = &off_1061BE18[4 * (this[1025] & 0xFFF) + 1], v4[1] == v3 >> 12) && *v4
     || (v5 = sub_101679A0((int)"antlion_allied"), sub_10167A00(v5) == 1))
    && (a2 == 1 || a2 == 9) )
  {
    return 103;
  }
  else
  {
    return sub_102FB410(this, a2);
  }
}
