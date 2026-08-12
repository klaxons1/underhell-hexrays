int __cdecl sub_10124C50(int *a1)
{
  char *v1; // eax
  int result; // eax
  int i; // esi
  float *v4; // edi
  float *v5; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // st5
  char *v10; // eax
  _BYTE v11[16]; // [esp+8h] [ebp-84h] BYREF
  float v12; // [esp+18h] [ebp-74h]
  float v13[18]; // [esp+20h] [ebp-6Ch] BYREF
  __int16 v14; // [esp+68h] [ebp-24h]
  int v15; // [esp+6Ch] [ebp-20h]
  int v16; // [esp+70h] [ebp-1Ch]
  int v17; // [esp+74h] [ebp-18h]
  char v18; // [esp+78h] [ebp-14h]
  float v19; // [esp+80h] [ebp-Ch] BYREF
  float v20; // [esp+84h] [ebp-8h]
  float v21; // [esp+88h] [ebp-4h]

  v1 = (char *)sub_100634F0(a1, 1);
  result = sub_1012C5B0(0, v1, 0, 0, 0);
  for ( i = result; result; i = result )
  {
    (*(void (__thiscall **)(int, float *, _DWORD, _DWORD))(*(_DWORD *)i + 528))(i, &v19, 0, 0);
    v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)i + 576))(i);
    v5 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)i + 504))(i, v11);
    v6 = *v4 + *v5;
    v7 = v4[1] + v5[1];
    v8 = v4[2];
    v13[13] = 0.0;
    v9 = v8 + v5[2];
    v13[17] = 0.0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    LODWORD(v13[12]) = 255;
    v18 = 0;
    v12 = v20 * 4.0;
    v13[3] = 0.0;
    v13[4] = 0.0;
    v13[5] = 0.0;
    v13[9] = 0.0;
    v13[10] = 0.0;
    v13[11] = 0.0;
    v13[15] = 0.0;
    v13[16] = 0.0;
    v13[0] = v6 * 0.5 + v19 * 4.0;
    v13[1] = v7 * 0.5 + v12;
    v13[2] = v9 * 0.5 + v21 * 4.0;
    v13[6] = v19;
    v13[7] = v20;
    v13[8] = v21;
    v13[14] = 4.0;
    sub_1028E890("bloodspray", v13);
    v10 = (char *)sub_100634F0(a1, 1);
    result = sub_1012C5B0(i, v10, 0, 0, 0);
  }
  return result;
}
