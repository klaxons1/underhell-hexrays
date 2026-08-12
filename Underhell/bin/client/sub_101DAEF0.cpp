double __cdecl sub_101DAEF0(
        const void *a1,
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
  char v10; // di
  int v11; // ebp
  int v13[2]; // [esp+10h] [ebp-8h] BYREF
  float v14; // [esp+2Ch] [ebp+14h]

  if ( a10 )
  {
    v11 = a9;
    v10 = a8;
  }
  else
  {
    v10 = 8;
    v11 = 0;
  }
  sub_101DA3F0(v10, a1, (float *)v13, a2, a5, a6, v11, a10, a7);
  v14 = sub_101D9E30(v11, a5, a4, (int)a1, (float *)v13, a2, a6, v10, a10);
  *a3 = (int)*(float *)v13;
  a3[1] = (int)*(float *)&v13[1];
  return v14;
}
