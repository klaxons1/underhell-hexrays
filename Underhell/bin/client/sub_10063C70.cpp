int __thiscall sub_10063C70(_DWORD *this)
{
  _DWORD *v1; // esi
  int i; // edi
  int result; // eax

  v1 = this + 14;
  this[30] = 1 - this[30];
  sub_1022E020(0);
  for ( i = v1[5 * v1[16] + 20] - 1; i >= 0; --i )
    sub_10034930(*(_DWORD *)(v1[5 * v1[16] + 17] + 4 * i));
  result = (int)&v1[5 * v1[16] + 17];
  v1[5 * v1[16] + 20] = 0;
  return result;
}
