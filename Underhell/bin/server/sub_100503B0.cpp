int __thiscall sub_100503B0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int result; // eax

  v2 = *(_DWORD *)(this + 48);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 48) & 0xFFF) + 1];
    if ( v3[1] == v2 >> 12
      && *v3
      && (-1.0 == *(float *)(this + 44) || sub_1004FBE0((float *)(this + 32), *(_DWORD *)(this + 4))) )
    {
      sub_100502D0(this);
    }
  }
  result = dword_106B31C8;
  *(float *)(this + 24) = *(float *)(dword_106B31C8 + 12);
  return result;
}
