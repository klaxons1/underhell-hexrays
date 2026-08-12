int __thiscall sub_103A1900(float *this, int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // esi
  int v6; // ecx
  unsigned int v7; // edx
  int v8; // ebx
  int v9; // ecx
  int v10; // edx
  int v11; // edi
  unsigned int v12; // eax
  int v13; // ecx
  unsigned int v14; // eax
  int v15; // eax
  int v16; // edi
  double v17; // st7
  int v18; // eax
  unsigned int v19; // eax
  _DWORD *v20; // ecx
  int result; // eax
  float v22; // [esp+Ch] [ebp-4Ch]
  float v23; // [esp+14h] [ebp-44h]
  float v24; // [esp+18h] [ebp-40h]
  int v25[2]; // [esp+28h] [ebp-30h] BYREF
  int v26; // [esp+30h] [ebp-28h]
  int v27; // [esp+34h] [ebp-24h]
  int v28; // [esp+38h] [ebp-20h]
  float v29[3]; // [esp+3Ch] [ebp-1Ch] BYREF
  float v30; // [esp+48h] [ebp-10h]
  float v31; // [esp+4Ch] [ebp-Ch]
  float v32; // [esp+50h] [ebp-8h]
  float *v33; // [esp+54h] [ebp-4h]

  v2 = (int)this;
  v33 = this;
  v25[0] = 0;
  v25[1] = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v3 = sub_103A0460(this, v25);
  v4 = 0;
  if ( v3 >= 4 )
  {
    v5 = dword_106B31C8;
    v6 = v25[0] + 8;
    v7 = ((unsigned int)(v3 - 4) >> 2) + 1;
    v4 = 4 * v7;
    do
    {
      v8 = *(_DWORD *)(v6 - 8);
      v6 += 16;
      --v7;
      *(float *)(v8 + 3816) = *(float *)(v5 + 12) + 1.0;
      *(float *)(*(_DWORD *)(v6 - 20) + 3816) = *(float *)(v5 + 12) + 1.0;
      *(float *)(*(_DWORD *)(v6 - 16) + 3816) = *(float *)(v5 + 12) + 1.0;
      *(float *)(*(_DWORD *)(v6 - 12) + 3816) = *(float *)(v5 + 12) + 1.0;
    }
    while ( v7 );
    v2 = (int)v33;
  }
  if ( v4 < v3 )
  {
    v9 = dword_106B31C8;
    do
    {
      v10 = *(_DWORD *)(v25[0] + 4 * v4++);
      *(float *)(v10 + 3816) = *(float *)(v9 + 12) + 1.0;
    }
    while ( v4 < v3 );
  }
  if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
    sub_100DAE60(v2);
  if ( *(_DWORD *)(v2 + 3832) )
  {
    v12 = *(_DWORD *)(v2 + 3812);
    if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(v2 + 3812) & 0xFFF) + 2] != v12 >> 12 )
      v13 = 0;
    else
      v13 = off_1061BE18[4 * (*(_DWORD *)(v2 + 3812) & 0xFFF) + 1];
    v11 = v13;
  }
  else
  {
    v11 = 0;
  }
  if ( (*(_DWORD *)(v11 + 252) & 0x800) != 0 )
    sub_100DAE60(v11);
  v30 = *(float *)(v11 + 580) - *(float *)(v2 + 580);
  v31 = *(float *)(v11 + 584) - *(float *)(v2 + 584);
  v32 = *(float *)(v11 + 588) - *(float *)(v2 + 588);
  off_10689714();
  v32 = RandomFloat(0.5, 1.0);
  off_10689714();
  if ( *(_DWORD *)(v2 + 3832)
    && (v14 = *(_DWORD *)(v2 + 3812), v14 != -1)
    && off_1061BE18[4 * (*(_DWORD *)(v2 + 3812) & 0xFFF) + 2] == v14 >> 12 )
  {
    v15 = off_1061BE18[4 * (*(_DWORD *)(v2 + 3812) & 0xFFF) + 1];
  }
  else
  {
    v15 = 0;
  }
  v16 = *(_DWORD *)(v15 + 424);
  v24 = RandomFloat(150.0, 250.0);
  v23 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v16 + 116))(v16);
  v17 = sub_10247D70(v23, v24);
  v18 = *(_DWORD *)(v2 + 252) >> 11;
  v29[0] = v30 * v17;
  v29[1] = v31 * v17;
  v29[2] = v17 * v32;
  if ( (v18 & 1) != 0 )
    sub_100DAE60(v2);
  (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)v16 + 240))(v16, v29, v2 + 580);
  sub_1023C380((_DWORD *)v2, (int)"NPC_RollerMine.JoltVehicle", 0.0, 0);
  if ( *(_DWORD *)(v2 + 3832)
    && (v19 = *(_DWORD *)(v2 + 3812), v19 != -1)
    && off_1061BE18[4 * (*(_DWORD *)(v2 + 3812) & 0xFFF) + 2] == v19 >> 12 )
  {
    v20 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(v2 + 3812) & 0xFFF) + 1];
  }
  else
  {
    v20 = 0;
  }
  sub_103A1230(v2, v20);
  v22 = RandomFloat(3.0, 6.0);
  result = sub_1010C7F0((float *)dword_10614CA8, v2, "JoltVehicle", v22, 0, 0, 0);
  if ( v26 >= 0 )
  {
    result = v25[0];
    if ( v25[0] )
      return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v25[0]);
  }
  return result;
}
