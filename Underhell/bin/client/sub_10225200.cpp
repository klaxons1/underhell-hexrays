int __thiscall sub_10225200(int this, int a2, float *a3)
{
  int v5; // eax
  double v6; // st7
  int v7; // eax
  int result; // eax
  int i; // [esp+Ch] [ebp+8h]

  v5 = 0;
  *a3 = 0.0;
  for ( i = 0; v5 < *(_DWORD *)(this + 44); a3[v5] = v6 / (double)*(int *)(this + 44) )
  {
    v6 = (double)i;
    i = ++v5;
  }
  v7 = sub_101F7960(*(_DWORD *)(a2 + 64));
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 20))(v7);
  *(float *)(this + 52) = 1.0 / ((double)result * *(float *)(this + 48));
  return result;
}
