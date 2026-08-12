void __thiscall sub_102C6CD0(_DWORD *this, int a2, int a3)
{
  double v4; // st7
  int v5; // eax
  double v6; // st7
  int v7; // edi
  unsigned int v8; // eax
  int v9; // esi
  int v10; // ebx
  const char *v11; // eax
  char *v12; // esi
  int v13; // eax
  const char *v14; // eax
  int *v15; // esi
  int v16; // eax
  int *v17; // ecx
  _WORD v18[2]; // [esp+Ch] [ebp-Ch] BYREF
  __int16 v19; // [esp+10h] [ebp-8h]
  int v20; // [esp+14h] [ebp-4h]

  v20 = (int)this;
  sub_1015F650(this, a2, a3);
  if ( (*(_BYTE *)(a3 + 64) & 0x20) != 0 )
    ++*(_QWORD *)(this[23] + 312);
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  v4 = *(float *)(a2 + 584);
  v18[0] = (int)*(float *)(a2 + 580);
  v5 = (int)v4;
  v6 = *(float *)(a2 + 588);
  v18[1] = v5;
  v19 = (int)v6;
  v7 = v20;
  sub_1015EFA0(v20, "CEP2GameStats::Event_PlayerKilled at location [%d %d %d]\n", v18[0], (__int16)v5, v19);
  v8 = *(_DWORD *)(a3 + 40);
  if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(a3 + 40) & 0xFFF) + 2] != v8 >> 12 )
    v9 = 0;
  else
    v9 = off_1061BE18[4 * (*(_DWORD *)(a3 + 40) & 0xFFF) + 1];
  if ( *(_DWORD *)(a3 + 44) == -1 || off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 2] != *(_DWORD *)(a3 + 44) >> 12 )
    v10 = 0;
  else
    v10 = off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 1];
  if ( v9 )
  {
    v11 = *(const char **)(v9 + 92);
    if ( !v11 )
      v11 = String;
    sub_1015EFA0(v20, "Inflictor: %s\n", v11);
  }
  if ( v10 )
  {
    v12 = *(char **)(v10 + 92);
    if ( !v12 )
      v12 = (char *)String;
    v13 = sub_102C5F80((_DWORD *)v20, v12);
    if ( v13 )
      sub_1015EFA0(v7, "Player has been killed %d times by %s's\n", ++*(_DWORD *)(v13 + 4), v12);
    else
      sub_1015EFA0(v20, "Player killed by %s (not tracked)\n", v12);
  }
  v14 = *(const char **)(dword_106B31C8 + 60);
  if ( !v14 )
    v14 = String;
  v15 = (int *)sub_102C6C50(v7, v14);
  v16 = sub_102C1E90(v15 + 21, v15[24], (int)v18);
  v17 = (int *)v15[58];
  if ( v17 )
  {
    if ( *v17 == -1 )
      *v17 = v16;
    sub_1015EFA0(v7, "Player has died %d times since last save/load\n", ++v17[1]);
  }
}
