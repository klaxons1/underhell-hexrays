int *__thiscall sub_10084CA0(_DWORD *this, unsigned __int16 a2, _DWORD *a3, _DWORD *a4, int *a5, int *a6)
{
  unsigned __int16 *v6; // eax
  unsigned int v7; // edi
  int v8; // esi
  int v9; // edx
  int *result; // eax

  v6 = (unsigned __int16 *)(this[8] + 16 * *(unsigned __int16 *)(this[1] + 10 * a2));
  v7 = *v6;
  v8 = 1 << *((_BYTE *)this + 2 * v7 + 106);
  v9 = v6[1] / (256 / v8);
  *a3 = ((v7 - 4 * (v7 >> 2)) << 8) + v8 * (v6[1] - 256 / v8 * v9);
  *a4 = (v7 >> 2 << 8) + v8 * v9;
  result = a6;
  *a5 = v8;
  *a6 = v8;
  return result;
}
