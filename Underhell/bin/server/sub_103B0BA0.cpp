void __thiscall sub_103B0BA0(int this, float *a2, int a3, float *a4)
{
  int v5; // eax
  void (__thiscall *v6)(int, _DWORD *); // edx
  _DWORD v7[11]; // [esp+18h] [ebp-7Ch] BYREF
  int v8; // [esp+44h] [ebp-50h]
  int v9; // [esp+48h] [ebp-4Ch]
  int v10; // [esp+4Ch] [ebp-48h]
  int v11; // [esp+50h] [ebp-44h]
  int v12; // [esp+54h] [ebp-40h]
  int v13; // [esp+58h] [ebp-3Ch]
  float v14; // [esp+5Ch] [ebp-38h]
  int v15; // [esp+60h] [ebp-34h]
  int v16; // [esp+64h] [ebp-30h]
  __int16 v17; // [esp+68h] [ebp-2Ch]
  char v18; // [esp+6Bh] [ebp-29h]
  __int16 v19; // [esp+6Ch] [ebp-28h]
  int v20[3]; // [esp+70h] [ebp-24h] BYREF
  float v21; // [esp+7Ch] [ebp-18h]
  float v22; // [esp+80h] [ebp-14h]
  float v23; // [esp+84h] [ebp-10h]
  int v24; // [esp+88h] [ebp-Ch] BYREF
  float v25; // [esp+8Ch] [ebp-8h]
  float v26; // [esp+90h] [ebp-4h]

  if ( a2 )
  {
    sub_100BEFA0((void *)(this - 3620), "minigun", (int)&v24, (int)v20);
    v21 = *a2 - *(float *)&v24;
    v22 = a2[1] - v25;
    v23 = a2[2] - v26;
    off_10689714();
    v14 = 1.0;
    v12 = 0;
    v16 = 0;
    v7[1] = v24;
    v10 = 0;
    v19 = 0;
    *(float *)&v7[2] = v25;
    v18 = 0;
    v17 = 1;
    *(float *)&v7[3] = v26;
    v7[0] = 1;
    v9 = 1;
    *(float *)&v7[4] = v21;
    v11 = 0;
    v15 = 0;
    *(float *)&v7[5] = v22;
    v13 = 0;
    *(float *)&v7[6] = v23;
    *(float *)&v7[7] = *a4;
    *(float *)&v7[8] = a4[1];
    *(float *)&v7[9] = a4[2];
    *(float *)&v7[10] = 8192.0;
    if ( *(_BYTE *)(this + 304) )
    {
      v5 = *(_DWORD *)(this - 3620);
      v8 = *(_DWORD *)(this + 28);
      (*(void (__thiscall **)(int, _DWORD *))(v5 + 432))(this - 3620, v7);
    }
    else
    {
      v6 = *(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)(this - 3620) + 432);
      v8 = *(_DWORD *)(this + 24);
      v6(this - 3620, v7);
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)(this - 3620) + 1116))(this - 3620);
    sub_1023C380((_DWORD *)(this - 3620), (int)"NPC_Strider.FireMinigun", 0.0, 0);
  }
}
