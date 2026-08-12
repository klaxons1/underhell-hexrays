bool __stdcall sub_101C9DB0(int a1, int a2, int a3)
{
  _BYTE v4[8]; // [esp+4h] [ebp-18h] BYREF
  float v5; // [esp+Ch] [ebp-10h]
  float v6; // [esp+10h] [ebp-Ch] BYREF
  float v7; // [esp+14h] [ebp-8h]
  float v8; // [esp+18h] [ebp-4h]
  float v9; // [esp+2Ch] [ebp+10h]

  if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
    sub_100DAE60(a3);
  v9 = *(float *)(a3 + 588) + *((float *)sub_10073730(*(_DWORD *)(a3 + 1676)) + 2);
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)a2 + 204))(a2, &v6);
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 16))(a1, v4);
  return v7 * v7 + v6 * v6 + v8 * v8 < 100.0 && fabs(v5 - v9) < 2.0;
}
