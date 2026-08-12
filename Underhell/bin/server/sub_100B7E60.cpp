unsigned int __thiscall sub_100B7E60(int this, int a2)
{
  unsigned int result; // eax
  int v4; // edi

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  *(float *)(this + 3708) = *(float *)(this + 580);
  *(float *)(this + 3712) = *(float *)(this + 584);
  *(float *)(this + 3716) = *(float *)(this + 588);
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  *(float *)(this + 3720) = *(float *)(this + 3708) - *(float *)(this + 476) * 2.0;
  *(float *)(this + 3724) = *(float *)(this + 3712) - *(float *)(this + 480) * 2.0;
  *(float *)(this + 3728) = *(float *)(this + 3716) - 2.0 * *(float *)(this + 484);
  if ( a2 )
    *(_DWORD *)(this + 3644) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *(_DWORD *)(this + 3644) = -1;
  result = *(_DWORD *)(this + 3644);
  if ( result == -1 || (result >>= 12, off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != result) )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
  if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    result = sub_100DAE60(v4);
  *(float *)(this + 3620) = *(float *)(v4 + 580);
  *(float *)(this + 3624) = *(float *)(v4 + 584);
  *(float *)(this + 3628) = *(float *)(v4 + 588);
  return result;
}
