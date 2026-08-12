int __thiscall sub_10054C60(_DWORD *this, int a2, _DWORD *a3, int *a4, int *a5)
{
  int v5; // eax
  int v6; // edi
  int v7; // ebx
  int result; // eax

  v5 = a2 / (this[436] * this[435]);
  *a5 = v5;
  v6 = this[435];
  v7 = this[436] * v6 * v5;
  result = (a2 - v7) / v6;
  *a4 = result;
  *a3 = a2 - result * this[435] - v7;
  return result;
}
