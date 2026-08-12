bool __thiscall sub_103AF440(int this, int a2, int a3, int a4)
{
  float *v6; // eax
  int v7; // ecx
  float *v8; // eax
  int v9[3]; // [esp+14h] [ebp-18h] BYREF
  int v10[3]; // [esp+20h] [ebp-Ch] BYREF

  if ( (a3 & 0x40000000) != 0 )
    return sub_100BFDA0((_BYTE *)this, a2, a3, a4);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 8))(this + 320);
  v7 = *(_DWORD *)(this + 252) >> 11;
  *(float *)v10 = *v6 + *(float *)(this + 580);
  *(float *)&v10[1] = v6[1] + *(float *)(this + 584);
  *(float *)&v10[2] = v6[2] + *(float *)(this + 588);
  if ( (v7 & 1) != 0 )
    sub_100DAE60(this);
  v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 4))(this + 320);
  *(float *)v9 = *(float *)(this + 580) + *v8;
  *(float *)&v9[1] = v8[1] + *(float *)(this + 584);
  *(float *)&v9[2] = v8[2] + *(float *)(this + 588);
  if ( !sub_10113C10(a2, (float *)v9, (float *)v10, 0.03125, (float *)a4, 0) )
    return 0;
  *(_DWORD *)(a4 + 80) = 0;
  *(_DWORD *)(a4 + 68) = 1;
  return 1;
}
