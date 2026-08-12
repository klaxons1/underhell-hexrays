int __thiscall sub_1029EC50(_DWORD *this, float a2)
{
  double v3; // st7
  unsigned int v4; // eax
  double v5; // st6
  double v6; // st5
  int v7; // eax
  int v8; // edi
  int v9; // esi
  _BYTE v11[12]; // [esp+8h] [ebp-24h] BYREF
  float v12[3]; // [esp+14h] [ebp-18h] BYREF
  float v13; // [esp+20h] [ebp-Ch] BYREF
  float v14; // [esp+24h] [ebp-8h]
  float v15; // [esp+28h] [ebp-4h]

  (*(void (__thiscall **)(_DWORD, _BYTE *, _DWORD))(**(_DWORD **)(this[1] + 424) + 204))(
    *(_DWORD *)(this[1] + 424),
    v11,
    0);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, float *))(*(_DWORD *)this[1] + 528))(this[1], 0, 0, &v13);
  v3 = -v13;
  v4 = this[17];
  v13 = v3;
  v5 = -v14;
  v14 = v5;
  v6 = -v15;
  v15 = v6;
  v12[0] = v3 * a2;
  v12[1] = v5 * a2;
  v12[2] = a2 * v6;
  if ( v4 == -1 || off_1061BE18[4 * (v4 & 0xFFF) + 2] != v4 >> 12 )
    v7 = 0;
  else
    v7 = off_1061BE18[4 * (v4 & 0xFFF) + 1];
  v8 = *(_DWORD *)(v7 + 424);
  v9 = this[1];
  if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
    sub_100DAE60(v9);
  return (*(int (__thiscall **)(int, float *, int))(*(_DWORD *)v8 + 240))(v8, v12, v9 + 580);
}
