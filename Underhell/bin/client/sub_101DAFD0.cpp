void __cdecl sub_101DAFD0(
        int a1,
        unsigned __int16 a2,
        _BYTE *a3,
        void *a4,
        unsigned __int8 a5,
        char a6,
        char a7,
        char a8,
        int a9,
        char a10)
{
  int v10; // eax
  double v11; // st6
  int v12; // ebx
  double v13; // st6
  int v14; // ebx
  double v15; // st6
  float v16[3]; // [esp+0h] [ebp-110h]
  int v17; // [esp+Ch] [ebp-104h]
  int v18[64]; // [esp+10h] [ebp-100h] BYREF

  v10 = 0;
  if ( a2 >= 4u )
  {
    do
    {
      v17 = *(unsigned __int8 *)(a1 + v10);
      v11 = (double)v17;
      v17 = *(unsigned __int8 *)(a1 + v10 + 1);
      v12 = *(unsigned __int8 *)(a1 + v10 + 2);
      v10 += 4;
      v16[v10] = v11 / 255.0;
      v13 = (double)v17;
      v17 = v12;
      v14 = *(unsigned __int8 *)(a1 + v10 - 1);
      v16[v10 + 1] = v13 / 255.0;
      v15 = (double)v17;
      v17 = v14;
      v16[v10 + 2] = v15 / 255.0;
      *(float *)&v18[v10 - 1] = (double)v17 / 255.0;
    }
    while ( v10 < a2 - 3 );
  }
  for ( ; v10 < a2; *(float *)&v18[v10 - 1] = (double)v17 / 255.0 )
  {
    v17 = *(unsigned __int8 *)(v10 + a1);
    ++v10;
  }
  sub_101DAEF0(v18, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
