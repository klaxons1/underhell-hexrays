void __cdecl sub_101776C0(int *a1)
{
  int v1; // ecx
  int v2; // edx
  int v3; // ecx
  int v4; // edx
  int v5[4]; // [esp+8h] [ebp-28h] BYREF
  int v6[3]; // [esp+18h] [ebp-18h] BYREF
  int v7[3]; // [esp+24h] [ebp-Ch] BYREF

  v1 = *a1;
  *(float *)v5 = 50.0;
  v2 = a1[1];
  *(float *)&v5[1] = 50.0;
  v6[0] = v1;
  *(float *)&v5[2] = 50.0;
  v6[2] = a1[2];
  *(float *)&v5[3] = 255.0;
  v3 = a1[10];
  v6[1] = v2;
  v4 = a1[9];
  v7[1] = v3;
  v7[0] = v4;
  v7[2] = a1[11];
  sub_101775E0((float *)v6, (int)v7, a1[13], a1[17], 100.0, (float *)v5);
}
