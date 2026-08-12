unsigned int __thiscall sub_100DAFD0(int this)
{
  unsigned int result; // eax
  int *v3; // ecx
  int v4; // esi

  result = *(_DWORD *)(this + 252);
  if ( (result & 0x1000) != 0 )
  {
    *(_DWORD *)(this + 252) = result & 0xFFFFEFFF;
    result = *(_DWORD *)(this + 308);
    if ( result != -1
      && (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 1],
          result >>= 12,
          off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 2] == result)
      && (v4 = *v3) != 0 )
    {
      if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
        sub_100DAE60(*v3);
      result = sub_10421C00(this + 592, v4 + 500, this + 476);
      if ( (*(_DWORD *)(v4 + 252) & 0x1000) != 0 )
        result = sub_100DAFD0(v4);
      *(float *)(this + 476) = *(float *)(v4 + 476) + *(float *)(this + 476);
      *(float *)(this + 480) = *(float *)(v4 + 480) + *(float *)(this + 480);
      *(float *)(this + 484) = *(float *)(v4 + 484) + *(float *)(this + 484);
    }
    else
    {
      *(float *)(this + 476) = *(float *)(this + 592);
      *(float *)(this + 480) = *(float *)(this + 596);
      *(float *)(this + 484) = *(float *)(this + 600);
    }
  }
  return result;
}
