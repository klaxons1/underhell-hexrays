int __stdcall sub_103136E0(int a1)
{
  int v1; // eax
  int v2; // eax
  float v4[13]; // [esp+0h] [ebp-60h] BYREF
  int v5; // [esp+34h] [ebp-2Ch]
  float v6; // [esp+38h] [ebp-28h]
  float v7; // [esp+3Ch] [ebp-24h]
  float v8; // [esp+40h] [ebp-20h]
  int v9; // [esp+44h] [ebp-1Ch]
  __int16 v10; // [esp+48h] [ebp-18h]
  int v11; // [esp+4Ch] [ebp-14h]
  int v12; // [esp+50h] [ebp-10h]
  int v13; // [esp+54h] [ebp-Ch]
  char v14; // [esp+58h] [ebp-8h]

  v4[0] = 0.0;
  v4[1] = 0.0;
  v4[2] = 0.0;
  v4[12] = 0.0;
  v4[3] = 0.0;
  v5 = 0;
  v4[4] = 0.0;
  v9 = 0;
  v4[5] = 0.0;
  v10 = 0;
  v4[6] = 0.0;
  v4[7] = 0.0;
  v11 = 0;
  v4[8] = 0.0;
  v12 = 0;
  v4[9] = 0.0;
  v13 = 0;
  v4[10] = 0.0;
  v14 = 0;
  v1 = *(_DWORD *)(a1 + 24);
  v4[11] = 0.0;
  v6 = 1.0;
  v7 = 0.0;
  v8 = 0.0;
  v2 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v1);
  v7 = 10.0;
  v6 = 1.0;
  v5 = v2;
  return sub_1028E890((int)"TeslaHitboxes", (int)v4);
}
