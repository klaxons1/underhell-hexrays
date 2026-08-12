void __thiscall sub_104134D0(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // ecx
  float v5[13]; // [esp+0h] [ebp-60h] BYREF
  int v6; // [esp+34h] [ebp-2Ch]
  float v7; // [esp+38h] [ebp-28h]
  float v8; // [esp+3Ch] [ebp-24h]
  float v9; // [esp+40h] [ebp-20h]
  int v10; // [esp+44h] [ebp-1Ch]
  __int16 v11; // [esp+48h] [ebp-18h]
  int v12; // [esp+4Ch] [ebp-14h]
  int v13; // [esp+50h] [ebp-10h]
  int v14; // [esp+54h] [ebp-Ch]
  char v15; // [esp+58h] [ebp-8h]

  v5[0] = 0.0;
  v5[1] = 0.0;
  v5[2] = 0.0;
  v5[3] = 0.0;
  v5[12] = 0.0;
  v5[4] = 0.0;
  v6 = 0;
  v5[5] = 0.0;
  v10 = 0;
  v5[6] = 0.0;
  v11 = 0;
  v5[7] = 0.0;
  v5[8] = 0.0;
  v12 = 0;
  v5[9] = 0.0;
  v13 = 0;
  v5[10] = 0.0;
  v14 = 0;
  v5[11] = 0.0;
  v15 = 0;
  v2 = this[6];
  v7 = 1.0;
  v8 = 0.0;
  v9 = 0.0;
  v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v2);
  v4 = this[435];
  v7 = 1.0;
  v6 = v3;
  v10 = v4;
  sub_1028E890((int)"ChopperMuzzleFlash", (int)v5);
  sub_100C1B10((int)this);
}
