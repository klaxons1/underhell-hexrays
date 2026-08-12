__int16 __thiscall sub_100A2200(_WORD *this, int *a2)
{
  int v3; // eax
  int v5; // [esp+Ch] [ebp-30h] BYREF
  int v6; // [esp+10h] [ebp-2Ch]
  int v7; // [esp+14h] [ebp-28h]
  __int16 v8; // [esp+18h] [ebp-24h]
  char v9; // [esp+1Ah] [ebp-22h]
  float v10; // [esp+1Bh] [ebp-21h]
  float v11; // [esp+1Fh] [ebp-1Dh]
  char v12; // [esp+23h] [ebp-19h]
  int v13; // [esp+24h] [ebp-18h]
  _DWORD v14[5]; // [esp+28h] [ebp-14h] BYREF

  v10 = 0.0;
  v11 = 0.0;
  v12 &= 0x80u;
  v13 = -1;
  memset(v14, 0, sizeof(v14));
  v6 = 0;
  v7 = 0;
  v8 = sub_10065220(1.0);
  v3 = *a2;
  v9 = 0;
  v5 = v3;
  LOWORD(this) = sub_1009CE50(this, (int)&v5);
  sub_10184660(v6);
  sub_10184660(v7);
  sub_102375F0(v14);
  return (__int16)this;
}
