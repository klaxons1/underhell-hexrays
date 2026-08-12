int __thiscall sub_103C1CD0(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int v4; // ecx
  float v5; // eax
  float v6; // edx
  float v8[3]; // [esp+8h] [ebp-18h] BYREF
  float v9; // [esp+14h] [ebp-Ch]
  float v10; // [esp+18h] [ebp-8h]
  float v11; // [esp+1Ch] [ebp-4h]

  if ( (*(_DWORD *)(a2 + 64) & 2) == 0 )
  {
    v3 = *(_DWORD *)(a2 + 40);
    if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] != v3 >> 12 )
      v4 = 0;
    else
      v4 = off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1];
    if ( *(char **)(v4 + 92) != "crossbow_bolt" && !sub_100D6240((_DWORD *)v4, "crossbow_bolt") )
      return sub_100D7E70(this, (int)this, a2);
  }
  (*(void (__thiscall **)(_DWORD *, float *, _DWORD, _DWORD))(*this + 528))(this, v8, 0, 0);
  v5 = *(float *)(a2 + 4);
  v6 = *(float *)(a2 + 12);
  v10 = *(float *)(a2 + 8);
  v9 = v5;
  v11 = v6;
  off_10689714();
  if ( v8[1] * v10 + v9 * v8[0] + v11 * v8[2] < -0.85 )
    return 0;
  else
    return sub_100D7E70(this, (int)this, a2);
}
