void __cdecl sub_101B5D80(int a1, int a2)
{
  BOOL v3; // ebx
  double v4; // st7
  double v5; // st7
  float v6; // [esp+4h] [ebp-30h]
  float v7; // [esp+10h] [ebp-24h]
  int v8[3]; // [esp+28h] [ebp-Ch] BYREF
  float v9; // [esp+40h] [ebp+Ch]

  v3 = a2 == 0;
  v4 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(a1 + 4 * a2) + 116))(*(_DWORD *)(a1 + 4 * a2));
  v9 = v4;
  if ( v4 >= 500.0
    && (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4 * v3) + 4))(*(_DWORD *)(a1 + 4 * v3))
    && ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4 * a2) + 76))(*(_DWORD *)(a1 + 4 * a2)) & 0x40) == 0 )
  {
    if ( v9 > 2000.0 )
      v9 = 2000.0;
    if ( *(float *)(a1 + 24) > 30.0 && *(float *)(a1 + 20) > 0.25 )
    {
      (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(a1 + 28) + 4))(*(_DWORD *)(a1 + 28), v8);
      v5 = *(float *)(dword_106BA224 + 44) * 0.000066666667 * (v9 * *(float *)(a1 + 24));
      v7 = 60.0 * v5;
      v6 = v5;
      sub_10261B70((int)v8, v6, *(float *)(dword_106BA26C + 44), *(float *)(dword_106BA2B4 + 44), v7, 0, 0);
    }
  }
}
