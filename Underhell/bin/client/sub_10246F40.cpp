int __thiscall sub_10246F40(int this, int (__thiscall ***a2)(_DWORD), __int16 a3, int a4)
{
  int v5; // esi
  double v6; // st7
  double v7; // st7
  int result; // eax

  v5 = *(_DWORD *)(this + 232) + 68 * sub_10246520((int *)(this + 232), *(_DWORD *)(this + 244));
  sub_102393F0((_DWORD *)v5, a2);
  *(_WORD *)(v5 + 4) = a3;
  *(_WORD *)(v5 + 6) = *(_WORD *)(a4 + 2);
  *(_DWORD *)(v5 + 44) = *(_DWORD *)(a4 + 20);
  *(float *)(v5 + 48) = *(float *)(a4 + 24);
  v6 = *(float *)(this + 208) + *(float *)(a4 + 28);
  *(float *)(v5 + 52) = v6;
  v7 = v6 + *(float *)(a4 + 32);
  *(_BYTE *)(v5 + 8) = 0;
  *(float *)(v5 + 56) = v7;
  *(_DWORD *)(v5 + 28) = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(v5 + 32) = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(v5 + 36) = *(_DWORD *)(a4 + 12);
  *(_DWORD *)(v5 + 40) = *(_DWORD *)(a4 + 16);
  *(_DWORD *)(v5 + 60) = *(_DWORD *)(a4 + 36);
  result = *(_DWORD *)(a4 + 40);
  *(_DWORD *)(v5 + 64) = result;
  return result;
}
