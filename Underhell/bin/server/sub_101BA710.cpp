void __cdecl sub_101BA710(int a1, int a2, int a3, int a4, __int16 a5, float a6, float a7)
{
  double v7; // st6
  int v8; // eax
  float v9; // [esp+0h] [ebp-Ch]

  if ( a6 >= 0.050000001 && a7 >= 70.0 )
  {
    v7 = a7 * a7 * 0.0000097656248;
    if ( v7 > 1.0 )
      v7 = 1.0;
    v9 = v7;
    v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a1 + 24));
    sub_101B94F0(dword_10637A2C, a1, v8, a3, a2, a4, a5, v9, a7);
  }
}
