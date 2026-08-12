int __thiscall sub_10270010(_DWORD *this, int a2)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  _DWORD v7[16]; // [esp+8h] [ebp-50h] BYREF
  char v8; // [esp+48h] [ebp-10h]

  sub_1001E4E0(v7, a2);
  v3 = this[395];
  *(float *)&v7[13] = *(float *)(a2 + 52);
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (v3 & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( v4[1] == v5 && *v4 && (v8 & 1) == 0 )
    {
      if ( v4[1] == v5 )
      {
        sub_100D9E70((int *)*v4, (int)this, v7);
        return 0;
      }
      sub_100D9E70(0, (int)this, v7);
    }
  }
  return 0;
}
