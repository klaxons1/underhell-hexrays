_DWORD *__thiscall sub_1007D8D0(_DWORD *this, int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  int v5; // eax
  int v6; // edx
  int v7; // edx
  _DWORD *result; // eax

  v5 = this[3] + 16 * a2;
  v6 = *(unsigned __int16 *)(v5 + 4);
  *(_DWORD *)(v5 + 8) = a3;
  *a4 = v6;
  v7 = *(unsigned __int16 *)(v5 + 6);
  result = a5;
  *a5 = v7;
  return result;
}
