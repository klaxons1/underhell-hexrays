char __thiscall sub_100C0880(int this, float *a2, float *a3)
{
  int v3; // ebx
  int v5; // edi
  int v6; // edi
  int v7; // eax
  int v9; // esi
  int v10; // eax
  int v11; // esi
  int v12; // eax
  float v14[3]; // [esp+Ch] [ebp-20h] BYREF
  float v15[4]; // [esp+18h] [ebp-14h] BYREF
  int v16; // [esp+28h] [ebp-4h]
  int v17; // [esp+34h] [ebp+8h]

  v3 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v5 = *(_DWORD *)(this + 1100);
  if ( !v5 || !*(_DWORD *)v5 )
    v5 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  if ( !v5 )
    return 0;
  v6 = *(_DWORD *)v5 + *(_DWORD *)(*(_DWORD *)v5 + 176) + 12 * *(_DWORD *)(this + 856);
  if ( !v6 || !*(_DWORD *)(v6 + 4) )
    return 0;
  v7 = sub_100BFC30(this);
  *a2 = 3.4028235e38;
  LODWORD(v15[3]) = v7;
  a2[1] = 3.4028235e38;
  a2[2] = 3.4028235e38;
  *a3 = -3.4028235e38;
  a3[1] = -3.4028235e38;
  a3[2] = -3.4028235e38;
  v16 = 0;
  if ( *(int *)(v6 + 4) > 0 )
  {
    v17 = 0;
    do
    {
      v9 = v17 + *(_DWORD *)(v6 + 8);
      v10 = *(_DWORD *)(v9 + v6);
      v11 = v6 + v9;
      v12 = sub_10101170(v10);
      if ( v12 )
      {
        sub_10425340(v12, v11 + 8, v11 + 20, v15, v14);
        sub_100BCAB0(a2, v15, a2);
        sub_100BCB10(a3, v14, a3);
      }
      v17 += 68;
      ++v16;
    }
    while ( v16 < *(_DWORD *)(v6 + 4) );
  }
  return 1;
}
