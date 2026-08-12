int __thiscall sub_1038AF30(int this, int *a2, int a3, int a4)
{
  _BYTE v6[4]; // [esp+8h] [ebp-18h] BYREF
  float v7; // [esp+Ch] [ebp-14h]
  float v8; // [esp+14h] [ebp-Ch] BYREF
  float v9; // [esp+18h] [ebp-8h]
  float v10; // [esp+1Ch] [ebp-4h]

  if ( *(_BYTE *)(this + 4181) && *(_BYTE *)(this + 225) == 2 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_10421C60(a3, this + 500, &v8);
    v8 = v8 * -1.0;
    v9 = v9 * -1.0;
    v10 = -1.0 * v10;
    sub_10422540(&v8, v6);
    *(float *)(this + 5192) = v7;
  }
  return sub_1001EB60((_BYTE *)this, a2, a3, a4);
}
