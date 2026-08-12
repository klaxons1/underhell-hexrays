int __thiscall sub_1004C630(_DWORD *this, int a2)
{
  int result; // eax
  bool v4; // zf
  unsigned int v5; // eax
  int v6; // ebx
  unsigned int v7; // eax
  int v8; // esi
  const char *v9; // ecx
  int v10; // esi
  char Buffer[512]; // [esp+24h] [ebp-304h] BYREF
  char v12[256]; // [esp+224h] [ebp-104h] BYREF
  int v13; // [esp+324h] [ebp-4h]
  int v14; // [esp+330h] [ebp+8h]

  result = sub_1004B3A0(this, a2);
  v4 = (*(_BYTE *)(this[1] + 236) & 1) == 0;
  v13 = result;
  if ( !v4 )
  {
    v5 = this[5];
    if ( v5 == -1 || off_1061BE18[4 * (this[5] & 0xFFF) + 2] != v5 >> 12 )
      v14 = 0;
    else
      v14 = off_1061BE18[4 * (this[5] & 0xFFF) + 1];
    if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
      sub_100DAE60(v14);
    if ( this[5] == -1 || off_1061BE18[4 * (this[5] & 0xFFF) + 2] != this[5] >> 12 )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (this[5] & 0xFFF) + 1];
    if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
      sub_100DAE60(v6);
    v7 = this[5];
    if ( v7 == -1 || off_1061BE18[4 * (this[5] & 0xFFF) + 2] != v7 >> 12 )
      v8 = 0;
    else
      v8 = off_1061BE18[4 * (this[5] & 0xFFF) + 1];
    if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
      sub_100DAE60(v8);
    sub_1001E280(v12, "(%f, %f, %f)", *(float *)(v8 + 580), *(float *)(v6 + 584), *(float *)(v14 + 588));
    v9 = (const char *)this[12];
    if ( !v9 )
      v9 = String;
    sub_10429A00(Buffer, 0x200u, "Assault Point: %s %s", (char)v9);
    v10 = v13;
    sub_100D5DE0(v13, (int)Buffer, 0.0, 255, 255, 255, 255);
    return v10 + 1;
  }
  return result;
}
