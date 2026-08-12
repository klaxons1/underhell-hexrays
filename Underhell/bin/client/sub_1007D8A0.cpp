_DWORD *__thiscall sub_1007D8A0(_DWORD *this, int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *result; // eax

  *a3 = *(unsigned __int16 *)(this[3] + 16 * a2 + 4);
  result = a4;
  *a4 = *(unsigned __int16 *)(this[3] + 16 * a2 + 6);
  return result;
}
