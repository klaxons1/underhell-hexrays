unsigned int __thiscall sub_1025EE30(unsigned int *this, int a2)
{
  int v2; // edi
  unsigned int result; // eax

  v2 = a2;
  sub_10241570(this, a2);
  result = this[56];
  if ( result )
  {
    result = *(_DWORD *)(*(int (__thiscall **)(int, int *, unsigned int, unsigned int))(*(_DWORD *)v2 + 20))(
                          v2,
                          &a2,
                          result,
                          this[54]);
    this[54] = result;
  }
  return result;
}
