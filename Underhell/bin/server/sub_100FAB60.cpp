float *__thiscall sub_100FAB60(int this, float *a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  _BYTE v6[48]; // [esp+4h] [ebp-3Ch] BYREF
  float v7[3]; // [esp+34h] [ebp-Ch] BYREF

  v3 = *(_DWORD *)(this + 308);
  if ( v3 == -1 )
    return sub_100F9FC0((float *)(this + 948), a2);
  v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 1];
  if ( v4[1] != v3 >> 12 || !*v4 )
    return sub_100F9FC0((float *)(this + 948), a2);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_10424F80(this + 500, v6);
  sub_10421B40(a2, v6, v7);
  return sub_100F9FC0((float *)(this + 948), v7);
}
