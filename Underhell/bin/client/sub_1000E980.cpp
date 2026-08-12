int __stdcall sub_1000E980(int a1, int a2, int a3)
{
  __int16 v3; // dx
  int v4; // ecx
  _DWORD *v5; // esi
  double v6; // st7
  int v7; // eax
  int v8; // eax
  int v9; // eax
  float v11[13]; // [esp+8h] [ebp-60h] BYREF
  int v12; // [esp+3Ch] [ebp-2Ch]
  float v13; // [esp+40h] [ebp-28h]
  float v14; // [esp+44h] [ebp-24h]
  float v15; // [esp+48h] [ebp-20h]
  int v16; // [esp+4Ch] [ebp-1Ch]
  __int16 v17; // [esp+50h] [ebp-18h]
  int v18; // [esp+54h] [ebp-14h]
  int v19; // [esp+58h] [ebp-10h]
  int v20; // [esp+5Ch] [ebp-Ch]
  char v21; // [esp+60h] [ebp-8h]
  int v22; // [esp+70h] [ebp+8h]

  v11[6] = 0.0;
  v3 = *(_WORD *)(a1 + 64);
  v11[7] = 0.0;
  v4 = *(_DWORD *)(a1 + 76);
  v11[8] = 0.0;
  v11[9] = 0.0;
  v11[10] = 0.0;
  v17 = v3;
  v11[11] = 0.0;
  v13 = 1.0;
  v11[12] = 0.0;
  v12 = -1;
  v16 = 0;
  v18 = 0;
  v14 = 0.0;
  v21 = 0;
  v15 = 0.0;
  v19 = a2;
  v5 = off_103DCD78;
  v11[0] = *(float *)(a1 + 12);
  v11[1] = *(float *)(a1 + 16);
  v11[2] = *(float *)(a1 + 20);
  v11[3] = *(float *)a1;
  v11[4] = *(float *)(a1 + 4);
  v6 = *(float *)(a1 + 8);
  v20 = *(_DWORD *)(a1 + 80);
  v11[5] = v6;
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)(v4 + 8) + 36))(v4 + 8);
  if ( v7 >= -1 )
  {
    if ( v7 >= 0 && (v9 = v5[4 * v7 + 1]) != 0 )
      v22 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
    else
      v22 = -1;
    v8 = v22;
  }
  else
  {
    v8 = -1;
  }
  v12 = v8;
  if ( a3 )
    return sub_10168E60(a3, v11);
  else
    return sub_10168E60("Impact", v11);
}
