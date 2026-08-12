void __thiscall sub_101B3290(int this)
{
  float v2; // edx
  float v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  double v7; // st7
  _BYTE v8[48]; // [esp+10h] [ebp-60h] BYREF
  int v9[3]; // [esp+40h] [ebp-30h] BYREF
  float v10; // [esp+4Ch] [ebp-24h]
  float v11; // [esp+50h] [ebp-20h]
  float v12; // [esp+54h] [ebp-1Ch]
  int v13; // [esp+58h] [ebp-18h] BYREF
  float v14; // [esp+5Ch] [ebp-14h]
  float v15; // [esp+60h] [ebp-10h]
  int v16; // [esp+64h] [ebp-Ch] BYREF
  float v17; // [esp+68h] [ebp-8h]
  float v18; // [esp+6Ch] [ebp-4h]

  if ( (*(_BYTE *)(this + 236) & 0x2C) != 0 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v2 = *(float *)(this + 584);
    v3 = *(float *)(this + 588);
    v16 = *(int *)(this + 580);
    v13 = v16;
    v4 = *(_DWORD *)(this + 800);
    v18 = v3;
    v15 = v3;
    v17 = v2;
    v14 = v2;
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 20))(v4);
    if ( v5 )
    {
      (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 192))(v5, v8);
      sub_10421B40(this + 860, v8, &v16);
    }
    v6 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 24))(*(_DWORD *)(this + 800));
    if ( v6 )
    {
      (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v6 + 192))(v6, v8);
      sub_10421B40(this + 872, v8, &v13);
    }
    v10 = *(float *)&v13 - *(float *)&v16;
    v11 = v14 - v17;
    v12 = v15 - v18;
    if ( off_10689714() <= *(float *)(this + 904) )
    {
      sub_1011BC50((float *)&v16, (float *)&v13, 0, 255, 0, 0, 0.0);
    }
    else
    {
      v7 = *(float *)(this + 904);
      *(float *)v9 = v10 * v7 + *(float *)&v16;
      *(float *)&v9[1] = v7 * v11 + v17;
      *(float *)&v9[2] = v7 * v12 + v18;
      sub_1011BC50((float *)&v16, (float *)v9, 0, 255, 0, 0, 0.0);
      sub_1011BC50((float *)v9, (float *)&v13, 255, 0, 0, 0, 0.0);
    }
    if ( (*(_BYTE *)(this + 236) & 0x2C) != 0 )
      sub_101B0600(*(_DWORD *)(this + 800), this);
  }
  sub_100DF330((float *)this);
}
