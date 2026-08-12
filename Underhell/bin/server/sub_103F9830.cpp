int __usercall sub_103F9830@<eax>(int a1@<eax>, int a2)
{
  int v3; // esi
  _DWORD *v4; // ebx
  int v5; // ebx
  int v6; // edx
  float *v7; // esi
  float *v8; // eax
  double v9; // st6
  double v10; // st7
  float *v11; // edi
  double v12; // st6
  double v13; // st7
  _DWORD v15[9]; // [esp+Ch] [ebp-28h] BYREF
  int v16; // [esp+30h] [ebp-4h]

  v3 = 0;
  v4 = v15;
  do
  {
    sub_10421CE0(a2, v3++, v4);
    v4 += 3;
  }
  while ( v3 < 3 );
  v5 = (a1 + 1) % 3;
  v6 = (a1 + 2) % 3;
  v7 = (float *)&v15[3 * v5];
  v8 = (float *)&v15[3 * a1];
  v9 = v8[2] * *v7 - v7[2] * *v8;
  v10 = v7[1] * *v8 - *v7 * v8[1];
  v11 = (float *)&v15[3 * v6];
  *v11 = v7[2] * v8[1] - v8[2] * v7[1];
  v16 = v6;
  v11[1] = v9;
  v11[2] = v10;
  v12 = *v8 * v11[2] - v8[2] * *v11;
  v13 = v8[1] * *v11 - *v8 * v11[1];
  *v7 = v8[2] * v11[1] - v11[2] * v8[1];
  v7[1] = v12;
  v7[2] = v13;
  off_10689714();
  off_10689714();
  sub_10421D00(v7, v5, a2);
  return sub_10421D00(v11, v16, a2);
}
