void __thiscall sub_100C8250(int this, int a2, char a3)
{
  double v4; // st7
  int v5; // eax
  int v6; // edx
  double v7; // st7
  int v8; // [esp-Ch] [ebp-7Ch]
  float v9; // [esp+0h] [ebp-70h]
  _BYTE v10[4]; // [esp+14h] [ebp-5Ch] BYREF
  float v11; // [esp+18h] [ebp-58h]
  float v12; // [esp+1Ch] [ebp-54h]
  float v13; // [esp+20h] [ebp-50h]
  float v14; // [esp+24h] [ebp-4Ch]
  float v15; // [esp+28h] [ebp-48h]
  float v16; // [esp+2Ch] [ebp-44h]
  _BYTE v17[4]; // [esp+64h] [ebp-Ch] BYREF
  float v18; // [esp+68h] [ebp-8h]
  char v19; // [esp+6Dh] [ebp-3h]

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 220))(this) != 2
    && (*(int (__thiscall **)(int))(*(_DWORD *)this + 220))(this) != 3
    || !*(_DWORD *)(dword_10698344 + 48) )
  {
    v4 = sub_100C7A90((float *)this, (int)v17, a2);
    if ( v4 > 0.0 && (!a3 || v19) )
    {
      v9 = v4;
      v8 = sub_10280AC0();
      v5 = sub_10280AC0();
      sub_102487B0(v5, v8, (int)&flt_106F1CA8, (int)&flt_106F1CA8, v9, 1, 0, 0);
      v6 = *(_DWORD *)(this + 252) >> 11;
      v7 = -(*(float *)(dword_106B6F0C + 44) * v18 * *(float *)(dword_106B31C8 + 16));
      v11 = 0.0;
      v12 = 0.0;
      v13 = v7;
      if ( (v6 & 1) != 0 )
        sub_100DAE60(this);
      v14 = *(float *)(this + 580);
      v15 = *(float *)(this + 584);
      v16 = *(float *)(this + 588);
      sub_100D9E70(v10);
    }
  }
}
