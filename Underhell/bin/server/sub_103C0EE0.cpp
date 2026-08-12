void __thiscall sub_103C0EE0(int this, int a2, int a3)
{
  float *v4; // edi
  __int64 v5; // [esp-8h] [ebp-3Ch]
  float v6[3]; // [esp+10h] [ebp-24h] BYREF
  float v7; // [esp+1Ch] [ebp-18h] BYREF
  float v8; // [esp+20h] [ebp-14h]
  float v9; // [esp+24h] [ebp-10h]
  float v10; // [esp+28h] [ebp-Ch]
  float v11; // [esp+2Ch] [ebp-8h]
  float v12; // [esp+30h] [ebp-4h]

  if ( a2 )
    *(_DWORD *)(this + 164) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *(_DWORD *)(this + 164) = -1;
  *(float *)(this + 168) = *(float *)(dword_106B31C8 + 12);
  if ( a3 == 1 )
    goto LABEL_15;
  v4 = (float *)(this - 3672);
  HIDWORD(v5) = this - 3672;
  LODWORD(v5) = this - 3672;
  *(_BYTE *)(this + 92) = 1;
  sub_1010DD80((_DWORD *)(this + 244), v5, 0.0);
  if ( (*(_DWORD *)(this - 3672 + 252) & 0x800) != 0 )
    sub_100DAE60(this - 3672);
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  v10 = *(float *)(a2 + 580) - v4[145];
  v11 = *(float *)(a2 + 584) - v4[146];
  v12 = 0.0;
  off_10689714();
  (*(void (__thiscall **)(int, float *, _DWORD, float *))(*(_DWORD *)v4 + 528))(this - 3672, v6, 0, &v7);
  if ( !*(_DWORD *)(dword_10698344 + 48) )
  {
    *(_BYTE *)(this + 93) = (v8 + v7) * 0.0 + v9 <= 0.89999998;
LABEL_15:
    *(_DWORD *)(this + 104) = -1;
    return;
  }
  if ( (v8 + v7) * 0.0 + v9 <= 0.89999998 || v6[1] * v11 + v10 * v6[0] + v6[2] * v12 < 0.85000002 )
  {
    *(_BYTE *)(this + 93) = 1;
    *(_DWORD *)(this + 104) = -1;
  }
  else
  {
    *(_BYTE *)(this + 93) = 0;
    *(_DWORD *)(this + 104) = -1;
  }
}
