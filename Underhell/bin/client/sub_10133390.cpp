int __stdcall sub_10133390(int *a1, int a2, int *a3, int *a4)
{
  int v5; // eax
  int v6; // eax
  double v7; // st7
  double v8; // st7
  bool v9; // c0
  bool v10; // c3
  int v11; // eax
  int result; // eax
  int v13; // [esp+18h] [ebp+8h]
  int v14; // [esp+18h] [ebp+8h]
  int v15; // [esp+18h] [ebp+8h]

  *a3 = *a1 + 5;
  v5 = *(_DWORD *)(dword_104396F4 + 48);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        v11 = *a1 + (a1[2] - a2 - 10) / 2;
      }
      else
      {
        v13 = *(_DWORD *)(dword_104396F4 + 48);
        v7 = (double)(a1[2] - a2 - 5);
        if ( v7 >= (double)sub_10076740() * 0.0015625 * (double)v13 )
        {
          v14 = *(_DWORD *)(dword_104396F4 + 48);
          v8 = (double)sub_10076740() * 0.0015625 * (double)v14;
          v9 = v8 > 5.0;
          v10 = 5.0 == v8;
          v7 = 5.0;
          if ( v9 || v10 )
          {
            v15 = *(_DWORD *)(dword_104396F4 + 48);
            v7 = (double)sub_10076740() * 0.0015625 * (double)v15;
          }
        }
        v11 = (int)(v7 + (double)*a1);
      }
    }
    else
    {
      v11 = a1[2] - a2 + *a1 - 5;
    }
    *a3 = v11;
  }
  result = a1[3] + a1[1] - 29;
  *a4 = result;
  return result;
}
