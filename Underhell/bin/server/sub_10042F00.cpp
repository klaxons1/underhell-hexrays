bool __thiscall sub_10042F00(int this, float a2, int a3, int a4)
{
  unsigned int v6; // ecx
  char v7; // al
  int v8; // eax
  double v9; // st6
  double v10; // st5
  double v11; // rt0
  int v12[3]; // [esp+14h] [ebp-28h] BYREF
  float v13[3]; // [esp+20h] [ebp-1Ch] BYREF
  int v14[3]; // [esp+2Ch] [ebp-10h] BYREF
  int var1; // [esp+3Bh] [ebp-1h] BYREF

  if ( a2 <= 0.0 )
    return 1;
  *(_BYTE *)(this + 2156) = 1;
  if ( !(unsigned __int8)sub_100C17B0(a2, (int)&var1, (int)v14, (int)v12) )
    return 0;
  v6 = *(_DWORD *)(this + 2688);
  if ( v6 != -1
    && off_1061BE18[4 * (*(_DWORD *)(this + 2688) & 0xFFF) + 2] == v6 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 2688) & 0xFFF) + 1] )
  {
    sub_10230B50(v14);
  }
  v7 = *(_BYTE *)(this + 306);
  if ( v7 != 3 )
  {
    if ( v7 == 4 )
    {
      v9 = *(float *)&v14[1] - *(float *)(this + 720);
      v10 = *(float *)&v14[2] - *(float *)(this + 724);
      v11 = 1.0 / a2;
      v13[0] = (*(float *)v14 - *(float *)(this + 716)) * v11;
      v13[1] = v9 * v11;
      v13[2] = v11 * v10;
      sub_100DD790(v13);
      return 1;
    }
    return 0;
  }
  if ( (*(_DWORD *)(this + 256) & 0x400) != 0 )
  {
    sub_100E10C0(v14);
    sub_100E11A0(v12);
    return 1;
  }
  else
  {
    v8 = a3;
    if ( !a3 )
      v8 = sub_100209E0((_DWORD *)this);
    return sub_100788E0((int)v14, v8, *(float *)&v12[1], 0.0, 1, a4) == 1;
  }
}
