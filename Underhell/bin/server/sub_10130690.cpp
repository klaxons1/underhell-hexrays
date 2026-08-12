char __thiscall sub_10130690(int this)
{
  int v1; // ebx
  int v3; // eax
  int v4; // esi
  float *v5; // eax
  _BYTE v7[12]; // [esp+Ch] [ebp-24h] BYREF
  float v8[3]; // [esp+18h] [ebp-18h] BYREF
  float v9; // [esp+24h] [ebp-Ch]
  float v10; // [esp+28h] [ebp-8h]
  float v11; // [esp+2Ch] [ebp-4h]

  v1 = 1;
  if ( *(int *)(dword_106B31C8 + 20) < 1 )
    return 0;
  while ( 1 )
  {
    v3 = sub_1025FB50(v1);
    v4 = v3;
    if ( v3 )
    {
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)v3 + 924))(v3, v8);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v5 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 504))(v4, v7);
      v9 = *(float *)(this + 580) - *v5;
      v10 = *(float *)(this + 584) - v5[1];
      v11 = *(float *)(this + 588) - v5[2];
      off_10689714();
      if ( v9 * v8[0] + v8[1] * v10 + v8[2] * v11 > 0.0 )
        break;
    }
    if ( ++v1 > *(_DWORD *)(dword_106B31C8 + 20) )
      return 0;
  }
  return 1;
}
