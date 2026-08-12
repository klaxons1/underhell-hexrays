int __cdecl sub_10166610(int a1, int a2, float *a3, float *a4, int a5, int a6, int a7, int a8, int a9)
{
  double v9; // st6
  double v10; // rt0
  float v12; // [esp+20h] [ebp-28h]
  float v13; // [esp+24h] [ebp-24h]
  float v14; // [esp+28h] [ebp-20h]
  float v15; // [esp+2Ch] [ebp-1Ch]
  float v16; // [esp+2Ch] [ebp-1Ch]
  int v17[3]; // [esp+3Ch] [ebp-Ch] BYREF

  v9 = 4.0 * a4[2];
  v10 = a4[1] * 4.0;
  *(float *)v17 = *a4 * 4.0 + *a3;
  *(float *)&v17[1] = v10 + a3[1];
  *(float *)&v17[2] = v9 + a3[2];
  v15 = (float)a9;
  ((void (__thiscall *)(void ***, int *, int, int, int, int, _DWORD, _DWORD, _DWORD))(*off_103E9C2C)[7])(
    off_103E9C2C,
    v17,
    a5,
    a6,
    a7,
    a8,
    word_10412D2C,
    word_10412D30,
    LODWORD(v15));
  v16 = (float)a8;
  v14 = (float)a7;
  v13 = (float)a6;
  v12 = (float)a5;
  sub_101570F0(a8, (int)a3, (int)a4, (float *)v17, a4, v12, v13, v14, v16);
  return sub_10166430(word_10412D30, word_10412D2C, a3, a4, a5, a6, a7, a8, a9);
}
