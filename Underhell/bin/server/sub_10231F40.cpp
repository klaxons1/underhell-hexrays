void __thiscall sub_10231F40(int this, int a2)
{
  int v3; // esi
  _DWORD *v5; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st7
  double v9; // rt1
  double v10; // st6
  double v11; // st7
  int *v12; // ecx
  int *v13; // ecx
  float v14; // [esp+0h] [ebp-20h]
  float v15; // [esp+18h] [ebp-8h]
  int v16; // [esp+1Ch] [ebp-4h]
  float v17; // [esp+1Ch] [ebp-4h]
  int v18; // [esp+28h] [ebp+8h]
  float v19; // [esp+28h] [ebp+8h]
  float v20; // [esp+28h] [ebp+8h]

  *(_BYTE *)(this + 901) = 0;
  v3 = dword_10700AC8;
  v16 = *(_DWORD *)(a2 + 908);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(a2 + 1100) && sub_100D7240((void *)a2) )
    sub_100BD750((volatile signed __int32 *)a2);
  v5 = *(_DWORD **)(a2 + 1100);
  if ( !v5 || (v18 = *(_DWORD *)(a2 + 1100), !*v5) )
    v18 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  v15 = sub_100BCBB0((void *)a2, v18, v16);
  v6 = *(float *)(dword_106B31C8 + 12) - *(float *)(this + 856);
  v7 = 0.15;
  if ( v6 <= 0.15 )
  {
    v7 = 0.0;
    if ( v6 >= 0.0 )
      v7 = v6;
    v8 = 0.0;
  }
  else
  {
    v8 = 0.0;
  }
  v19 = v7;
  if ( v8 != v7 )
  {
    v9 = v7;
    v10 = v8;
    v11 = v9;
    v17 = v10;
    if ( *(_DWORD *)(a2 + 904) != LODWORD(v17) )
    {
      if ( *(_BYTE *)(a2 + 84) )
      {
        *(_BYTE *)(a2 + 88) |= 1u;
        *(float *)(a2 + 904) = v10;
      }
      else
      {
        v12 = *(int **)(a2 + 24);
        if ( v12 )
        {
          sub_100194B0(v12, 904);
          v11 = v19;
          v10 = 0.0;
        }
        *(float *)(a2 + 904) = v10;
      }
    }
    v14 = v11;
    sub_10042F00(a2, v14, 0, 0);
    v20 = v19 * v15;
    if ( *(_DWORD *)(a2 + 904) != LODWORD(v20) )
    {
      if ( *(_BYTE *)(a2 + 84) )
      {
        *(_BYTE *)(a2 + 88) |= 1u;
        *(float *)(a2 + 904) = v20;
      }
      else
      {
        v13 = *(int **)(a2 + 24);
        if ( v13 )
          sub_100194B0(v13, 904);
        *(float *)(a2 + 904) = v20;
      }
    }
  }
}
