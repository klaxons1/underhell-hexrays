int __thiscall sub_10350DC0(_DWORD *this, int a2)
{
  int v3; // eax
  float v5; // [esp+4h] [ebp-18h] BYREF
  float v6; // [esp+8h] [ebp-14h]
  float v7; // [esp+10h] [ebp-Ch] BYREF
  float v8; // [esp+14h] [ebp-8h]

  v3 = sub_100BDE80((int)this, dword_106E68B0);
  sub_100BF580((int)this, v3, &v5, &v7);
  v5 = v5 + 38.0;
  v7 = v7 - 38.0;
  v6 = v6 + 38.0;
  v8 = v8 - 38.0;
  return sub_1025F360(this, (int)&v5, (int)&v7);
}
