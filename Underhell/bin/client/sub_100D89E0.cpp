int __thiscall sub_100D89E0(_DWORD *this, int a2, int a3)
{
  int v3; // esi
  _DWORD v5[10]; // [esp+0h] [ebp-54h] BYREF
  char v6; // [esp+28h] [ebp-2Ch]
  int v7; // [esp+2Ch] [ebp-28h]
  int v8; // [esp+30h] [ebp-24h]
  int v9; // [esp+34h] [ebp-20h]
  __int16 v10; // [esp+38h] [ebp-1Ch]
  __int16 v11; // [esp+3Ah] [ebp-1Ah]
  char v12; // [esp+3Ch] [ebp-18h]
  _DWORD v13[5]; // [esp+40h] [ebp-14h] BYREF

  memset(v13, 0, sizeof(v13));
  *(float *)&v5[3] = 0.0;
  *(float *)&v5[4] = 0.0;
  *(float *)&v5[5] = 0.0;
  *(float *)&v5[6] = 0.0;
  v5[1] = 0;
  *(float *)&v5[7] = 0.0;
  v5[2] = 0;
  *(float *)&v5[8] = 0.0;
  v5[9] = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v12 = 0;
  v10 = 0;
  v11 = 0;
  v3 = this[60] + 84 * (a3 % 90);
  v5[0] = &CUserCmd::`vftable';
  sub_1012A940(a2, v3, v5);
  v5[0] = &CUserCmd::`vftable';
  return sub_1011A810(v13);
}
