unsigned int __thiscall sub_1027C460(int this)
{
  unsigned int result; // eax
  int *v3; // ecx
  unsigned int v4; // edx

  sub_10279CB0(this);
  nullsub_4();
  result = *(_DWORD *)(this + 1168);
  if ( result == 205 || result == 202 || result == 183 || result == 212 || result == 213 )
  {
    *(_BYTE *)(this + 1410) = 1;
    result = *(_DWORD *)(this + 1412);
    if ( result != -1 )
    {
      if ( (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 1412) & 0xFFF) + 1],
            v4 = result >> 12,
            off_1061BE18[4 * (*(_DWORD *)(this + 1412) & 0xFFF) + 2] == *(_DWORD *)(this + 1412) >> 12)
        && *v3
        || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 1412) & 0xFFF) + 1],
            v4 = result >> 12,
            off_1061BE18[4 * (*(_DWORD *)(this + 1412) & 0xFFF) + 2] == *(_DWORD *)(this + 1412) >> 12)
        && *v3 )
      {
        if ( v3[1] == v4 )
          return sub_10403E50(*v3);
        else
          return sub_10403E50(0);
      }
    }
  }
  return result;
}
