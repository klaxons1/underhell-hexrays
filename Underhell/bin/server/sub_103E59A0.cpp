int __thiscall sub_103E59A0(_DWORD *this)
{
  unsigned int v2; // eax
  int v3; // ecx
  int result; // eax
  int v5; // ecx
  int v6; // ecx
  float v7; // [esp+0h] [ebp-1Ch]
  int v8[3]; // [esp+4h] [ebp-18h] BYREF
  int v9[3]; // [esp+10h] [ebp-Ch] BYREF

  sub_100BEFA0(this, "cable_tip", (int)v9, (int)v8);
  v2 = this[430];
  if ( v2 == -1 || off_1061BE18[4 * (this[430] & 0xFFF) + 2] != v2 >> 12 )
    v3 = 0;
  else
    v3 = off_1061BE18[4 * (this[430] & 0xFFF) + 1];
  sub_100E0D20(v3, (float *)v9);
  result = this[430];
  if ( result == -1 || off_1061BE18[4 * (this[430] & 0xFFF) + 2] != this[430] >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (this[430] & 0xFFF) + 1];
  if ( *(_DWORD *)(v5 + 424) )
  {
    if ( result == -1 || off_1061BE18[4 * (this[430] & 0xFFF) + 2] != this[430] >> 12 )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (this[430] & 0xFFF) + 1];
    v7 = *(float *)(dword_106B31C8 + 28) + *(float *)(dword_106B31C8 + 28);
    return (*(int (__stdcall **)(int *, float *, int, _DWORD))(**(_DWORD **)(v6 + 424) + 272))(
             v9,
             &flt_106F1CB4,
             1,
             LODWORD(v7));
  }
  return result;
}
