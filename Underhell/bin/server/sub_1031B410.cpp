char __thiscall sub_1031B410(_DWORD *this, _DWORD *a2)
{
  int v2; // edx
  unsigned int v3; // eax
  _DWORD v5[2]; // [esp+0h] [ebp-20h] BYREF
  int v6; // [esp+8h] [ebp-18h]
  int v7; // [esp+Ch] [ebp-14h]
  int v8; // [esp+10h] [ebp-10h]
  int v9; // [esp+14h] [ebp-Ch]
  int v10; // [esp+18h] [ebp-8h]
  int v11; // [esp+1Ch] [ebp-4h]

  v5[1] = a2[1];
  v6 = a2[2];
  v7 = a2[3];
  v8 = a2[4];
  v6 = a2[2];
  v9 = a2[5];
  v2 = a2[6];
  v11 = a2[7];
  v3 = this[103];
  v10 = v2;
  v5[0] = this;
  if ( v3 == -1 || off_1061BE18[4 * (v3 & 0xFFF) + 2] != v3 >> 12 )
    return sub_1031A490(0, (int)v5);
  else
    return sub_1031A490(off_1061BE18[4 * (v3 & 0xFFF) + 1], (int)v5);
}
