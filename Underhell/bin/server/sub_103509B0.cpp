int __thiscall sub_103509B0(_DWORD *this)
{
  int v2; // eax
  int v3; // esi
  float v5[13]; // [esp+4h] [ebp-60h] BYREF
  int v6; // [esp+38h] [ebp-2Ch]
  float v7; // [esp+3Ch] [ebp-28h]
  float v8; // [esp+40h] [ebp-24h]
  float v9; // [esp+44h] [ebp-20h]
  int v10; // [esp+48h] [ebp-1Ch]
  __int16 v11; // [esp+4Ch] [ebp-18h]
  int v12; // [esp+50h] [ebp-14h]
  int v13; // [esp+54h] [ebp-10h]
  int v14; // [esp+58h] [ebp-Ch]
  char v15; // [esp+5Ch] [ebp-8h]

  sub_100C7B50(this);
  v5[0] = 0.0;
  v5[1] = 0.0;
  v5[2] = 0.0;
  v11 = 0;
  v5[3] = 0.0;
  v5[4] = 0.0;
  v5[5] = 0.0;
  v5[12] = 0.0;
  v5[6] = 0.0;
  v6 = 0;
  v5[7] = 0.0;
  v10 = 0;
  v5[8] = 0.0;
  v12 = 0;
  v5[9] = 0.0;
  v13 = 0;
  v5[10] = 0.0;
  v14 = 0;
  v5[11] = 0.0;
  v15 = 0;
  v7 = 1.0;
  v8 = 0.0;
  v9 = 0.0;
  v2 = sub_100BEF30((int)this, "muzzle");
  v3 = this[6];
  v10 = v2;
  v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v3);
  return sub_1028E890((int)"GunshipMuzzleFlash", (int)v5);
}
