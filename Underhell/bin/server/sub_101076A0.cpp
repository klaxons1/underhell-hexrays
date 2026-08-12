int __cdecl sub_101076A0(int *a1, int *a2, int a3, float *a4, int a5, int a6, float a7)
{
  int *v7; // esi
  int v8; // ebx
  int result; // eax
  int v10; // esi
  double v11; // st7
  int v12; // [esp+0h] [ebp-30h]
  int v13; // [esp+20h] [ebp-10h]
  int v14; // [esp+28h] [ebp-8h]
  int v15; // [esp+2Ch] [ebp-4h] BYREF
  int savedregs; // [esp+30h] [ebp+0h] BYREF

  v7 = a2;
  v8 = 0;
  if ( a2 )
    sub_10105C00(a2, a3, (int)a4);
  v15 = 0;
  result = sub_10246700(&v15);
  v13 = result;
  v14 = 0;
  if ( result > 0 )
  {
    do
    {
      v10 = *(unsigned __int16 *)(v15 + 2 * v8);
      result = sub_10245550(v10);
      if ( (*(_BYTE *)(result + 12) & 8) != 0 )
      {
        v11 = sub_10100630((int)a1, result, v10, a5) * a7;
        *(float *)&v12 = v11 - (double)(int)v11;
        result = sub_10107490((int)&savedregs, a1, 0, a3, a4, v10, v12, a5, a6, 1.0, a7);
        v8 = v14;
      }
      v14 = ++v8;
    }
    while ( v8 < v13 );
    v7 = a2;
  }
  if ( v7 )
    return sub_101062E0(v7, a3, (int)a4);
  return result;
}
