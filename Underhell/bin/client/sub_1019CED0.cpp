int __thiscall sub_1019CED0(int this, int a2, int a3)
{
  double v4; // st7
  int v5; // eax
  float v7[3]; // [esp+14h] [ebp-24h] BYREF
  int v8[3]; // [esp+20h] [ebp-18h] BYREF
  int v9[3]; // [esp+2Ch] [ebp-Ch] BYREF

  if ( *(_DWORD *)(dword_104490EC + 48) )
  {
    if ( *(_WORD *)(a3 + 56) || *(_WORD *)(a3 + 58) || fabs(*(float *)(this + 20)) < 0.0099999998 )
      v4 = 0.0;
    else
      v4 = *((float *)off_103DC81C + 4) + *(float *)(this + 320);
    *(float *)(this + 320) = v4;
    if ( *(float *)(dword_1044917C + 44) < (double)*(float *)(this + 320) )
    {
      v5 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)(this - 1956) + 140))(
             this - 1956,
             "vehicle_driver_eyes");
      sub_10026820((_DWORD *)(this - 1960), v5, v7, (int)v8);
      sub_10076A00(a3 + 12, (int)v8, (int)v9, *(float *)(dword_10449134 + 44));
      *(float *)(a3 + 12) = *(float *)v9;
      *(float *)(a3 + 16) = *(float *)&v9[1];
      *(float *)(a3 + 20) = *(float *)&v9[2];
    }
  }
  return sub_1015B290((_DWORD *)this, a2, a3);
}
