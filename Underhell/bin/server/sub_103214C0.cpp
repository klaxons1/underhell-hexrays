void __thiscall sub_103214C0(int this)
{
  int v2; // eax
  float v3; // [esp+4h] [ebp-30h]
  int v4[3]; // [esp+10h] [ebp-24h] BYREF
  float v5[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v6[3]; // [esp+28h] [ebp-Ch] BYREF

  if ( *(float *)(this + 9908) <= (double)*(float *)(dword_106B31C8 + 12) )
  {
    *(float *)(this + 9908) = *(float *)(dword_106B31C8 + 12) + 0.2;
    sub_1001F010((float *)v4, -1.0, 1.0);
    sub_1001F010((float *)v4, -8.0, 8.0);
    v6[0] = 0.0;
    v6[1] = 0.0;
    v6[2] = -1.0;
    v5[0] = *(float *)(this + 9916) + *(float *)v4;
    v5[1] = *(float *)(this + 9920) + *(float *)&v4[1];
    v5[2] = *(float *)(this + 9924);
    LODWORD(v3) = RandomInt(0, 2) != 0 ? 4 : 255;
    v2 = RandomInt(4, 8);
    sub_10124BC0(v5, v6, *(_DWORD *)(this + 9912), v2, v3);
  }
}
