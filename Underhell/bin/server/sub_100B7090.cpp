void __thiscall sub_100B7090(int this)
{
  unsigned int v1; // eax
  int v2; // edi
  unsigned int v3; // eax
  int v4; // edx

  v1 = *(_DWORD *)(this + 3648);
  if ( v1 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3648) & 0xFFF) + 2] != v1 >> 12 )
    v2 = 0;
  else
    v2 = off_1061BE18[4 * (*(_DWORD *)(this + 3648) & 0xFFF) + 1];
  v3 = *(_DWORD *)(this + 3644);
  if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] != v3 >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
  sub_100B6EE0((void *)this, v4, v2, (float *)(this + 3620), COERCE_FLOAT(*(_BYTE *)(this + 3732)));
}
