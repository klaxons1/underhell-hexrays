int __thiscall sub_1006FC60(int this, int a2, int a3)
{
  double v4; // st7
  int (__stdcall *v5)(const char *); // edx
  int v6; // eax
  float v8[3]; // [esp+14h] [ebp-24h] BYREF
  int v9[3]; // [esp+20h] [ebp-18h] BYREF
  int v10[3]; // [esp+2Ch] [ebp-Ch] BYREF

  if ( *(_DWORD *)(dword_10412844 + 48) )
  {
    if ( *(_WORD *)(a3 + 56) || *(_WORD *)(a3 + 58) || fabs(*(float *)(this + 20)) < 0.0099999998 )
      v4 = 0.0;
    else
      v4 = *((float *)off_103DC81C + 4) + *(float *)(this + 320);
    *(float *)(this + 320) = v4;
    if ( *(float *)(dword_104128D4 + 44) < (double)*(float *)(this + 320) )
    {
      v5 = *(int (__stdcall **)(const char *))(*(_DWORD *)(this - 1956) + 140);
      if ( *(_BYTE *)(this + 4) )
        v6 = v5("vehicle_gunner_eyes");
      else
        v6 = v5("vehicle_driver_eyes");
      sub_10026820((_DWORD *)(this - 1960), v6, v8, (int)v9);
      sub_10076A00(a3 + 12, (int)v9, (int)v10, *(float *)(dword_1041288C + 44));
      *(float *)(a3 + 12) = *(float *)v10;
      *(float *)(a3 + 16) = *(float *)&v10[1];
      *(float *)(a3 + 20) = *(float *)&v10[2];
    }
  }
  return sub_1015B290(a2, a3);
}
