bool __cdecl sub_102A22E0(_DWORD *a1, float *a2, float a3)
{
  float *v4; // eax
  _BYTE v5[12]; // [esp+4h] [ebp-2Ch] BYREF
  float v6[3]; // [esp+10h] [ebp-20h] BYREF
  float v7; // [esp+1Ch] [ebp-14h]
  float v8; // [esp+20h] [ebp-10h]
  float v9; // [esp+24h] [ebp-Ch]
  float v10; // [esp+28h] [ebp-8h]
  float v11; // [esp+2Ch] [ebp-4h]
  int v12; // [esp+38h] [ebp+8h]

  if ( !a1 )
    return 0;
  v4 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 504))(a1, v5);
  v7 = *a2 - *v4;
  v8 = a2[1] - v4[1];
  v9 = a2[2] - v4[2];
  v11 = off_10689714();
  sub_100F5A30(a1, (int)v6, 0, 0);
  v10 = v7 * v6[0] + v6[1] * v8 + v6[2] * v9;
  v12 = sub_101EE630((int)a1);
  return cos((double)v12 * 0.5 * 0.017453292) - atan2(a3, v11) < v10;
}
