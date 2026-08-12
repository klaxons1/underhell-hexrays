int __thiscall sub_103EAA70(_BYTE *this, float *a2)
{
  double v3; // st5
  float v5[6]; // [esp+Ch] [ebp-60h] BYREF
  float v6[3]; // [esp+24h] [ebp-48h] BYREF
  float v7[3]; // [esp+30h] [ebp-3Ch] BYREF
  int v8; // [esp+3Ch] [ebp-30h]
  int v9; // [esp+40h] [ebp-2Ch]
  float v10; // [esp+44h] [ebp-28h]
  float v11; // [esp+48h] [ebp-24h]
  float v12; // [esp+4Ch] [ebp-20h]
  int v13; // [esp+50h] [ebp-1Ch]
  __int16 v14; // [esp+54h] [ebp-18h]
  int v15; // [esp+58h] [ebp-14h]
  int v16; // [esp+5Ch] [ebp-10h]
  int v17; // [esp+60h] [ebp-Ch]
  char v18; // [esp+64h] [ebp-8h]

  v5[3] = 0.0;
  v9 = 0;
  v5[4] = 0.0;
  v13 = 0;
  v5[5] = 0.0;
  v15 = 0;
  v7[0] = 0.0;
  v16 = 0;
  v7[1] = 0.0;
  v17 = 0;
  v7[2] = 0.0;
  v18 = 0;
  v8 = 0;
  v10 = 1.0;
  v11 = 0.0;
  v12 = 0.0;
  v5[0] = *a2;
  v3 = a2[1];
  v14 = 0;
  v5[1] = v3;
  v5[2] = a2[2];
  v6[0] = 0.0;
  v6[1] = 0.0;
  v6[2] = 1.0;
  sub_10422540(v6, v7);
  v10 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          0.0,
          2.0)
      + 10.0;
  if ( (sub_100E87E0(this) & 0x10) != 0 )
    v8 |= 1u;
  return sub_1028E890((int)"waterripple", (int)v5);
}
