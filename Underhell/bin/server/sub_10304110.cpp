_DWORD *__thiscall sub_10304110(_BYTE *this)
{
  int (__thiscall *v2)(_BYTE *); // edx
  int v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // ecx
  int v7; // eax
  _DWORD *result; // eax

  sub_102467A0(this);
  v2 = *(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 8);
  this[804] = 1;
  v3 = *(_DWORD *)v2(this);
  v4 = dword_106E2DA0;
  v5 = dword_106E2DA0;
  if ( dword_106E2DA0 + 1 > dword_106E2D98 )
  {
    sub_102ABFC0(&dword_106E2D94, dword_106E2DA0 - dword_106E2D98 + 1);
    v4 = dword_106E2DA0;
  }
  v6 = dword_106E2D94;
  dword_106E2DA0 = v4 + 1;
  v7 = v4 - v5;
  dword_106E2DA4 = dword_106E2D94;
  if ( v7 > 0 )
  {
    memcpy((void *)(dword_106E2D94 + 4 * v5 + 4), (const void *)(dword_106E2D94 + 4 * v5), 4 * v7);
    v6 = dword_106E2D94;
  }
  result = (_DWORD *)(v6 + 4 * v5);
  if ( result )
    *result = v3;
  return result;
}
