int __thiscall sub_100C0A40(int this, int a2, int a3, float *a4, float a5)
{
  int v5; // ebx
  void (__thiscall *v6)(int); // edx
  int v8; // esi
  int v9; // ebx
  int v10; // edi
  int v11; // esi
  int v12; // edx
  float *v13; // esi
  double v14; // st6
  double v15; // st5
  int v16; // eax
  _BYTE v18[48]; // [esp+Ch] [ebp-54h] BYREF
  float v19[3]; // [esp+3Ch] [ebp-24h] BYREF
  float v20[3]; // [esp+48h] [ebp-18h] BYREF
  int v21; // [esp+54h] [ebp-Ch]
  int v22; // [esp+58h] [ebp-8h]
  int v23; // [esp+5Ch] [ebp-4h]

  v5 = dword_10700AC8;
  v6 = *(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100);
  v21 = this;
  v23 = 0;
  v6(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v8 = *(_DWORD *)(this + 1100);
  if ( !v8 || !*(_DWORD *)v8 )
    v8 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 104))(v5);
  v9 = 0;
  if ( !v8 )
    return 0;
  v10 = *(_DWORD *)v8 + *(_DWORD *)(*(_DWORD *)v8 + 176) + 12 * *(_DWORD *)(this + 856);
  if ( !v10 || *(int *)(v10 + 4) <= 0 )
    return 0;
  v22 = 0;
  do
  {
    v11 = v22 + *(_DWORD *)(v10 + 8);
    v12 = *(_DWORD *)(v11 + v10);
    v13 = (float *)(v10 + v11);
    (*(void (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)v21 + 772))(v21, v12, v18);
    v14 = v13[3] + v13[6];
    v15 = v13[4] + v13[7];
    v20[0] = (v13[5] + v13[2]) * 0.5;
    v20[1] = v14 * 0.5;
    v20[2] = 0.5 * v15;
    sub_10421B40(v20, v18, v19);
    if ( a4[1] * v19[1] + *a4 * v19[0] + a4[2] * v19[2] >= a5 )
    {
      v16 = v23;
      if ( v23 < a3 )
      {
        *(_DWORD *)(a2 + 4 * v23) = v9;
        v23 = v16 + 1;
      }
    }
    v22 += 68;
    ++v9;
  }
  while ( v9 < *(_DWORD *)(v10 + 4) );
  return v23;
}
