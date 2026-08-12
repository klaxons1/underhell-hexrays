bool __thiscall sub_103BFC80(_DWORD *this, int a2, int a3)
{
  int v3; // esi
  float v5[3]; // [esp+8h] [ebp-18h] BYREF
  float v6; // [esp+14h] [ebp-Ch]
  float v7; // [esp+18h] [ebp-8h]
  float v8; // [esp+1Ch] [ebp-4h]

  if ( a3 )
    return 1;
  v3 = (int)(this - 918);
  if ( (*(int (__thiscall **)(_DWORD *, int))(*(this - 918) + 1080))(this - 918, a2) != 1 )
    return 1;
  (*(void (__thiscall **)(int, float *, _DWORD, _DWORD))(*(_DWORD *)v3 + 528))(v3, v5, 0, 0);
  if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
    sub_100DAE60(v3);
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  v6 = *(float *)(a2 + 580) - *(float *)(v3 + 580);
  v7 = *(float *)(a2 + 584) - *(float *)(v3 + 584);
  v8 = *(float *)(a2 + 588) - *(float *)(v3 + 588);
  return off_10689714() <= *(float *)(dword_106EFE24 + 44) || v6 * v5[0] + v5[1] * v7 + v5[2] * v8 <= 0.5;
}
