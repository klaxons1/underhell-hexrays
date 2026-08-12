int __thiscall sub_103B4C40(int *this, int a2)
{
  int v2; // eax
  unsigned int v3; // eax

  v2 = sub_101BCB30(this + 955, a2);
  if ( v2 && (v3 = *(_DWORD *)(v2 + 4), v3 != -1) && off_1061BE18[4 * (v3 & 0xFFF) + 2] == v3 >> 12 )
    return off_1061BE18[4 * (v3 & 0xFFF) + 1];
  else
    return 0;
}
