__int16 __thiscall sub_100A4110(void *this, int *a2, const char **a3)
{
  int v4; // eax
  int v6; // [esp+Ch] [ebp-30h] BYREF
  const char *v7; // [esp+10h] [ebp-2Ch] BYREF
  int v8; // [esp+14h] [ebp-28h]
  __int16 v9; // [esp+18h] [ebp-24h]
  char v10; // [esp+1Ah] [ebp-22h]
  float v11; // [esp+1Bh] [ebp-21h]
  float v12; // [esp+1Fh] [ebp-1Dh]
  char v13; // [esp+23h] [ebp-19h]
  int v14; // [esp+24h] [ebp-18h]
  _DWORD v15[5]; // [esp+28h] [ebp-14h] BYREF

  v11 = 0.0;
  v12 = 0.0;
  v13 &= 0x80u;
  v14 = -1;
  memset(v15, 0, sizeof(v15));
  v7 = 0;
  v8 = 0;
  v9 = sub_10065220(1.0);
  v4 = *a2;
  v10 = 0;
  v6 = v4;
  sub_100A1250(&v7, a3);
  LOWORD(this) = sub_100A3670((int)this, (int)&v6);
  sub_10184660(v7);
  sub_10184660(v8);
  sub_102375F0(v15);
  return (__int16)this;
}
