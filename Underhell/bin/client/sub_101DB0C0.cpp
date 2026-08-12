void __usercall sub_101DB0C0(char a1@<al>, float *a2, int a3, float a4, float a5, char a6, char a7)
{
  float *v7; // esi
  int v8; // edi
  int v9; // ebx
  double v10; // st7
  double v11; // st7
  bool v12; // c0
  bool v13; // c3
  double v14; // st7
  float v15; // [esp+20h] [ebp-28h]
  float v16; // [esp+20h] [ebp-28h]
  float v17; // [esp+28h] [ebp-20h]
  float v18; // [esp+28h] [ebp-20h]
  float v19; // [esp+28h] [ebp-20h]
  float v20; // [esp+28h] [ebp-20h]
  float v21; // [esp+2Ch] [ebp-1Ch]
  float v22; // [esp+2Ch] [ebp-1Ch]
  float v23; // [esp+2Ch] [ebp-1Ch]
  float v24; // [esp+2Ch] [ebp-1Ch]
  float v25; // [esp+2Ch] [ebp-1Ch]
  float v26[3]; // [esp+30h] [ebp-18h]
  float v27[3]; // [esp+3Ch] [ebp-Ch]

  v26[2] = (float)(1 << a1);
  v26[1] = (float)(1 << a6);
  v26[0] = (float)(1 << a7);
  v27[2] = (float)(1 << (8 - a1));
  v7 = a2;
  v27[1] = (float)(1 << (8 - a6));
  v8 = 0;
  v27[0] = (float)(1 << (8 - a7));
  do
  {
    v9 = 2;
    do
    {
      v15 = floor(*(float *)((char *)v7 + a3 - (_DWORD)a2));
      *v7 = v15;
      v10 = a4;
      if ( a4 < (double)v15 )
      {
        v17 = 128.0 / v26[v8];
        v18 = floor(v17);
        v21 = v18;
        v19 = v15 / v26[v8];
        v20 = floor(v19);
        v22 = v21 - v20 + v15;
        v11 = v22;
        v23 = v11;
        *v7 = v11;
        v12 = a5 < v11;
        v13 = a5 == v11;
        v14 = a5;
        if ( !v12 && !v13 )
          v14 = v23;
        v16 = v14;
        v10 = v16;
      }
      *v7 = v10;
      v24 = *v7 / v27[v8];
      v25 = floor(v24);
      ++v7;
      --v9;
      *(v7 - 1) = v25 * v27[v8];
    }
    while ( v9 );
    ++v8;
  }
  while ( v8 < 3 );
}
