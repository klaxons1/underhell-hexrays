void __thiscall sub_101B1650(int this, int a2, int a3, int *a4)
{
  double v5; // st4
  double v6; // st7
  double v7; // st4
  double v8; // st5
  int v9; // esi
  int v10; // eax
  int v11; // [esp-Ch] [ebp-1Ch]
  int v12; // [esp-8h] [ebp-18h]
  float *v13; // [esp-4h] [ebp-14h]
  float v14; // [esp+0h] [ebp-10h]
  char v15; // [esp+0h] [ebp-10h]

  if ( !a3 && *(_DWORD *)(dword_106B31C8 + 24) != *(_DWORD *)(this + 828) )
  {
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
      sub_100DAE60(a2);
    v5 = *(float *)*a4 - *(float *)(a2 + 580);
    v6 = v5 * v5;
    v7 = *(float *)(*a4 + 4) - *(float *)(a2 + 584);
    v8 = *(float *)(*a4 + 8) - *(float *)(a2 + 588);
    v14 = v8 * v8 + v7 * v7 + v6;
    if ( off_10689708(v14) > *(float *)(this + 832) )
    {
      *(_DWORD *)(this + 828) = *(_DWORD *)(dword_106B31C8 + 24);
      v9 = *(_DWORD *)(this + 800);
      v15 = *(_BYTE *)(*a4 + 24);
      v13 = (float *)(*a4 + 12);
      v12 = *a4;
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 24))(v9);
      v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 20))(v9);
      sub_101B0F90((_DWORD *)a2, v10, v11, v12, v13, v15);
    }
  }
}
