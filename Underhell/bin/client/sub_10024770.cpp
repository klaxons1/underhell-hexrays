void __cdecl sub_10024770(int *a1, int *a2, int a3, float *a4, int a5, int a6, float a7)
{
  int *v7; // esi
  int v8; // ebx
  int v9; // esi
  int v10; // eax
  double v11; // st7
  int v12; // [esp+0h] [ebp-30h]
  int v13; // [esp+20h] [ebp-10h]
  int v14; // [esp+28h] [ebp-8h]
  int v15; // [esp+2Ch] [ebp-4h] BYREF
  int savedregs; // [esp+30h] [ebp+0h] BYREF

  v7 = a2;
  v8 = 0;
  if ( a2 )
    sub_10022D80(a2, a3, (int)a4);
  v15 = 0;
  v13 = sub_101289C0(&v15);
  v14 = 0;
  if ( v13 > 0 )
  {
    do
    {
      v9 = *(unsigned __int16 *)(v15 + 2 * v8);
      v10 = sub_10127960(v9);
      if ( (*(_BYTE *)(v10 + 12) & 8) != 0 )
      {
        v11 = sub_1001DC50((int)a1, v10, v9, a5) * a7;
        *(float *)&v12 = v11 - (double)(int)v11;
        sub_10024510((int)&savedregs, a1, 0, a3, a4, v9, v12, a5, a6, 1.0, a7);
        v8 = v14;
      }
      v14 = ++v8;
    }
    while ( v8 < v13 );
    v7 = a2;
  }
  if ( v7 )
    sub_10023460(v7, a3, (int)a4);
}
