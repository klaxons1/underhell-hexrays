void __thiscall sub_1031B380(_DWORD *this, _DWORD *a2)
{
  int v2; // edx
  unsigned int v3; // eax
  int v4[2]; // [esp+0h] [ebp-20h] BYREF
  int v5; // [esp+8h] [ebp-18h]
  int v6; // [esp+Ch] [ebp-14h]
  int v7; // [esp+10h] [ebp-10h]
  int v8; // [esp+14h] [ebp-Ch]
  int v9; // [esp+18h] [ebp-8h]
  int v10; // [esp+1Ch] [ebp-4h]

  v4[1] = a2[1];
  v5 = a2[2];
  v6 = a2[3];
  v7 = a2[4];
  v5 = a2[2];
  v8 = a2[5];
  v2 = a2[6];
  v10 = a2[7];
  v3 = this[103];
  v9 = v2;
  v4[0] = (int)this;
  if ( v3 == -1 || off_1061BE18[4 * (v3 & 0xFFF) + 2] != v3 >> 12 )
    sub_1031A270(0, (int)v4, 0.0);
  else
    sub_1031A270(off_1061BE18[4 * (v3 & 0xFFF) + 1], (int)v4, 0.0);
}
