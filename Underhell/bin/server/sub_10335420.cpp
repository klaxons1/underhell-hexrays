int __thiscall sub_10335420(_DWORD *this, int a2)
{
  int v3; // eax
  _DWORD *v4; // ebx
  int v5; // eax
  int v7; // eax
  int v8[13]; // [esp+4h] [ebp-50h] BYREF
  float v9; // [esp+38h] [ebp-1Ch]

  if ( sub_100697A0(this, 51, 1) || sub_100697A0(this, 50, 1) )
    return 0;
  v3 = *(_DWORD *)(a2 + 64);
  if ( (v3 & 8) != 0 && (v3 & 0x10000000) != 0 )
    sub_100C4050(this, 6, 75);
  sub_1001E4E0(v8, a2);
  v4 = (_DWORD *)this[699];
  if ( v4 && (*(_BYTE *)(a2 + 64) & 0x40) != 0 && sub_100232D0((_DWORD *)a2) && *(_DWORD *)(dword_106E5FD4 + 48) )
  {
    v5 = sub_100232D0((_DWORD *)a2);
    if ( sub_100B1010(v4, v5) )
    {
      v9 = v9 * 0.5;
      return sub_10396110((int)this, (int)v8);
    }
    if ( (double)(int)this[55] <= *(float *)(a2 + 52) )
    {
      v7 = sub_100232D0((_DWORD *)a2);
      sub_100B0FE0((_DWORD *)this[699], v7);
    }
  }
  return sub_10396110((int)this, (int)v8);
}
