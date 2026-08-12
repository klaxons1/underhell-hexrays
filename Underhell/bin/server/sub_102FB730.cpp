void __thiscall sub_102FB730(int this, int a2, int a3, int a4, int a5)
{
  float v6; // [esp+0h] [ebp-70h]
  int v7[20]; // [esp+10h] [ebp-60h] BYREF
  int v8[3]; // [esp+60h] [ebp-10h] BYREF
  int v9; // [esp+6Ch] [ebp-4h]

  v9 = *(_DWORD *)(this + 220) + 1;
  v6 = (float)v9;
  sub_10248110((int)v7, this, this, v6, 0, 0);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  *(float *)v8 = 0.0;
  *(float *)&v8[1] = 0.0;
  *(float *)&v8[2] = 8.0;
  sub_10248740((int)v7, (float *)v8, (float *)(this + 580), 1.0);
  sub_100D9E70((int *)this, this, v7);
}
