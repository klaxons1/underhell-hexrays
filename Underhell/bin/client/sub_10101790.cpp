void __cdecl sub_10101790(int a1, int a2, float a3, int a4, int a5)
{
  int v6; // edi
  int v7; // eax
  int v8; // edx
  int v9; // esi
  int v10; // eax
  float v11; // [esp+24h] [ebp+8h]

  if ( a1 )
  {
    if ( a3 >= 75.0 && a4 >= 0 )
    {
      v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10436258 + 20))(dword_10436258, a5);
      v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10436258 + 20))(dword_10436258, a4);
      if ( *(_WORD *)(v6 + 72) != 88 && *(_WORD *)(v7 + 72) != 88 )
      {
        v8 = *(unsigned __int16 *)(v7 + 54);
        v9 = v7 + 86;
        if ( *(_WORD *)(v7 + 52) )
        {
          if ( *(float *)(v7 + 32) > (double)*(float *)(v6 + 28) )
            v8 = *(unsigned __int16 *)(v7 + 52);
        }
        v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10436258 + 24))(dword_10436258, v8);
        v11 = a3 * 0.000064516127 * (a3 * 0.000064516127);
        sub_100F5E20(v9, a1, a2, v10, v9, v11);
      }
    }
  }
}
