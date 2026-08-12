int __thiscall sub_100F4320(void *this, int a2)
{
  int result; // eax
  float v4; // edx
  float v5; // eax
  int v6; // ecx
  double v7; // st7
  double v8; // st6
  double v9; // rt1
  double v10; // st5
  _BYTE v11[84]; // [esp+4h] [ebp-78h] BYREF
  float v12[3]; // [esp+58h] [ebp-24h] BYREF
  float v13; // [esp+64h] [ebp-18h] BYREF
  float v14; // [esp+68h] [ebp-14h]
  float v15; // [esp+6Ch] [ebp-10h]
  float v16; // [esp+70h] [ebp-Ch]
  float v17; // [esp+74h] [ebp-8h]
  float v18; // [esp+78h] [ebp-4h]
  int savedregs; // [esp+7Ch] [ebp+0h] BYREF

  result = a2;
  if ( *(_BYTE *)(a2 + 361) && (*(_BYTE *)(a2 + 356) & 4) == 0 )
  {
    if ( (*((_DWORD *)this + 63) & 0x1000) != 0 )
      sub_100DAFD0((int)this);
    v4 = *((float *)this + 120);
    v5 = *((float *)this + 121);
    v16 = *((float *)this + 119);
    v17 = v4;
    v18 = v5;
    off_10689714();
    v6 = *((_DWORD *)this + 63) >> 11;
    v13 = v16 * 32.0;
    v14 = v17 * 32.0;
    v15 = 32.0 * v18;
    if ( (v6 & 1) != 0 )
      sub_100DAE60((int)this);
    v7 = *((float *)this + 145) - v13;
    v8 = *((float *)this + 146);
    v9 = *((float *)this + 147) - v15;
    v12[0] = v7;
    v10 = v8 - v14;
    v12[1] = v10;
    v12[2] = v9;
    v13 = v7 + v16 * 64.0;
    v14 = v10 + v17 * 64.0;
    v15 = v9 + 64.0 * v18;
    sub_1002A5F0((int)&savedregs, (int)this, v12, &v13, 16395, (int)this, 0, (int)v11);
    return (*(int (__thiscall **)(void *, _BYTE *, int))(*(_DWORD *)this + 1148))(this, v11, 64);
  }
  return result;
}
