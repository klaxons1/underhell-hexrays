int *__thiscall sub_1009C000(_DWORD *this, int *a2, int a3, int a4, int a5)
{
  _DWORD *v6; // edi

  v6 = &this[4 * a4 + 1];
  *v6 = a3;
  if ( a5 != -1 )
    this[4 * a4 + 2] = a5;
  sub_1009BCC0(this + 16385, (int)v6);
  *a2 = a4 | (v6[1] << 12);
  (*(void (__thiscall **)(int, int *))(*(_DWORD *)a3 + 4))(a3, a2);
  (*(void (__thiscall **)(_DWORD *, int, int))*this)(this, a3, *a2);
  return a2;
}
