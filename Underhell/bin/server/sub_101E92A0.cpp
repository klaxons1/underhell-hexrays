int __thiscall sub_101E92A0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // esi
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
  _BYTE v9[84]; // [esp+4h] [ebp-78h] BYREF
  float v10[3]; // [esp+58h] [ebp-24h] BYREF
  float v11[3]; // [esp+64h] [ebp-18h] BYREF
  float v12; // [esp+70h] [ebp-Ch]
  float v13; // [esp+74h] [ebp-8h]
  float v14; // [esp+78h] [ebp-4h]
  int savedregs; // [esp+7Ch] [ebp+0h] BYREF

  if ( *(_DWORD *)(dword_106B3D0C + 48) != 1 )
  {
    v2 = *(_DWORD *)(this + 412);
    if ( v2 != -1
      && (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 1], off_1061BE18[4 * (v2 & 0xFFF) + 2] == v2 >> 12)
      && (v4 = *v3) != 0
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(*v3) )
    {
      v5 = v4;
    }
    else
    {
      v5 = 0;
    }
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_10422220(this + 704, v11);
    v6 = *(_DWORD *)(this + 252) >> 11;
    v12 = v11[0] * 128.0;
    v13 = v11[1] * 128.0;
    v14 = 128.0 * v11[2];
    if ( (v6 & 1) != 0 )
      sub_100DAE60(this);
    v7 = *(_DWORD *)(this + 252) >> 11;
    v10[0] = v12 + *(float *)(this + 580);
    v10[1] = *(float *)(this + 584) + v13;
    v10[2] = *(float *)(this + 588) + v14;
    if ( (v7 & 1) != 0 )
      sub_100DAE60(this);
    sub_1002A5F0((int)&savedregs, this + 580, (float *)(this + 580), v10, 16395, v5, 0, (int)v9);
    sub_10265C30(v9, 0);
  }
  return sub_1025FAC0(this);
}
