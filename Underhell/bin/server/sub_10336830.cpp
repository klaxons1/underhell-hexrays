char __thiscall sub_10336830(float *this, int a2, char a3)
{
  char result; // al
  int v6; // eax
  int v7; // eax
  int v8; // eax
  double v9; // st7
  int v10; // ecx
  int v11; // esi
  double v12; // st7
  double v13; // st6
  double v14; // st7
  float v15[3]; // [esp+4h] [ebp-Ch] BYREF
  float v16; // [esp+18h] [ebp+8h]
  float v17; // [esp+18h] [ebp+8h]
  char v18; // [esp+1Bh] [ebp+Bh]

  result = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 1532))(this);
  if ( result )
  {
    if ( !a2 )
    {
      v6 = (*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 1080))(this, 0);
      if ( v6 != 3 && v6 != 4 )
        return 0;
    }
    v7 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 1656))(this);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7) )
      return 0;
    v18 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2);
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 288))(a2);
    if ( v8 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 1088))(v8) )
        return 0;
    }
    if ( ((_DWORD)this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
      sub_100DAE60(a2);
    v15[0] = *(float *)(a2 + 580) - this[145];
    v15[1] = *(float *)(a2 + 584) - this[146];
    v9 = *(float *)(a2 + 588) - this[147];
    v15[2] = v9;
    if ( !a3 && sub_103341B0(this) )
    {
      sub_100D7A40(v15);
      if ( v9 >= 480.0 )
        return 0;
    }
    v10 = *(_DWORD *)(a2 + 220);
    if ( v10 <= 0 )
      return 0;
    if ( a3 )
    {
      v11 = *(_DWORD *)(a2 + 216);
      v12 = (1.0 - (this[1426] - *(float *)(dword_106B31C8 + 12)) / *(float *)(dword_106E5C2C + 44))
          * *(float *)(dword_106E5BE4 + 44);
      v13 = (double)(v11 - v10);
      if ( v13 < v12 )
        v12 = v13;
      if ( v12 >= *(float *)(dword_106E5D04 + 44) )
        return v11 > v10;
      return 0;
    }
    if ( v18 )
    {
      if ( *(float *)(dword_106B31C8 + 12) < (double)this[1426] )
        return 0;
      v17 = *(float *)(dword_106E5BE4 + 44);
      v14 = (double)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 448))(a2) - v17;
    }
    else
    {
      if ( *(float *)(dword_106B31C8 + 12) < (double)this[1428] )
        return 0;
      v16 = *(float *)(dword_106E5CBC + 44);
      v14 = (double)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 448))(a2) * v16;
    }
    return *(_DWORD *)(a2 + 220) <= (int)v14
        && (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 1080))(this, a2) == 3;
  }
  return result;
}
