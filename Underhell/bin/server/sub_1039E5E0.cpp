int __thiscall sub_1039E5E0(_DWORD *this)
{
  unsigned int v1; // eax
  int *v2; // ecx

  if ( this[958] && (v1 = this[953], v1 != -1) && (v2 = &off_1061BE18[4 * (this[953] & 0xFFF) + 1], v2[1] == v1 >> 12) )
    return *v2;
  else
    return 0;
}
