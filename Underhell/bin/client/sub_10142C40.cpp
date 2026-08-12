void __cdecl sub_10142C40(float *a1, float *a2)
{
  int v2; // ecx
  int v3; // edx
  double v4; // st7
  int v5; // eax
  double v6; // st6
  int v7; // edx
  double v8; // st6
  int v9; // eax
  int v10; // ecx
  int v11[3]; // [esp+Ch] [ebp-20h] BYREF
  int v12[3]; // [esp+18h] [ebp-14h] BYREF
  float v13; // [esp+24h] [ebp-8h]
  int v14; // [esp+28h] [ebp-4h]

  if ( v2 )
  {
    if ( *((float *)off_103DC81C + 3) <= (double)*(float *)(v2 + 56) )
    {
      v3 = *(unsigned __int8 *)(v2 + 25);
      v4 = (*(float *)(v2 + 56) - *((float *)off_103DC81C + 3)) / *(float *)(v2 + 60);
      v14 = *(unsigned __int8 *)(v2 + 24);
      v5 = *(unsigned __int8 *)(v2 + 26);
      v13 = 1.0 - v4;
      v6 = (double)v14;
      v14 = v3;
      v7 = *(unsigned __int8 *)(v2 + 28);
      *(float *)v12 = v6;
      v8 = (double)v14;
      v14 = v5;
      v9 = *(unsigned __int8 *)(v2 + 29);
      v10 = *(unsigned __int8 *)(v2 + 30);
      *(float *)&v12[1] = v8;
      *(float *)&v12[2] = (float)v14;
      *(float *)v11 = (float)v7;
      v14 = v10;
      *(float *)&v11[1] = (float)v9;
      *(float *)&v11[2] = (float)v10;
      sub_10142BC0(v13, a1, (float *)v12);
      sub_10142BC0(v13, a2, (float *)v11);
    }
  }
}
