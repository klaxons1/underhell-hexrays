int __cdecl sub_1011B7F0(int a1, float *a2)
{
  float v3; // edx
  float v4; // eax
  char v5; // dl
  char v6; // cl
  double v7; // st6
  double v8; // st7
  float v9[3]; // [esp+0h] [ebp-30h] BYREF
  float v10[3]; // [esp+Ch] [ebp-24h] BYREF
  float v11; // [esp+18h] [ebp-18h]
  float v12; // [esp+1Ch] [ebp-14h]
  float v13; // [esp+20h] [ebp-10h]
  float v14; // [esp+24h] [ebp-Ch]
  float v15; // [esp+28h] [ebp-8h]
  float v16; // [esp+2Ch] [ebp-4h]

  if ( !a1 )
    return -1;
  (*(void (__thiscall **)(int, float *, float *, _DWORD))(*(_DWORD *)a1 + 528))(a1, v10, v9, 0);
  v3 = a2[2];
  v4 = a2[3];
  v11 = a2[1];
  v12 = v3;
  v14 = -v11;
  v13 = v4;
  v15 = -v3;
  v16 = -v4;
  off_10689714();
  v5 = 0;
  v6 = 0;
  v7 = v10[2] * v16 + v10[1] * v15 + v10[0] * v14;
  v8 = v16 * v9[2] + v14 * v9[0] + v15 * v9[1];
  if ( v7 < 0.0 )
  {
    v5 = 1;
    v7 = v7 * -1.0;
  }
  if ( v8 < 0.0 )
  {
    v6 = 1;
    v8 = v8 * -1.0;
  }
  if ( v7 >= v8 )
    return 2 * (v5 == 1) + 392;
  else
    return 2 * (v6 == 1) + 393;
}
