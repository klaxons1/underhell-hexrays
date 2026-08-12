int *__thiscall sub_1031F9C0(float *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // esi
  int v5; // ecx
  int v6; // eax
  int *result; // eax

  sub_100E38F0(this);
  if ( this )
    v2 = *(_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 8))(this);
  else
    v2 = -1;
  v3 = dword_106E3BFC;
  v4 = dword_106E3BFC;
  if ( dword_106E3BFC + 1 > dword_106E3BF4 )
  {
    sub_102ABFC0(&dword_106E3BF0, dword_106E3BFC - dword_106E3BF4 + 1);
    v3 = dword_106E3BFC;
  }
  v5 = dword_106E3BF0;
  dword_106E3BFC = v3 + 1;
  v6 = v3 - v4;
  dword_106E3C00 = dword_106E3BF0;
  if ( v6 > 0 )
  {
    memcpy((void *)(dword_106E3BF0 + 4 * v4 + 4), (const void *)(dword_106E3BF0 + 4 * v4), 4 * v6);
    v5 = dword_106E3BF0;
  }
  result = (int *)(v5 + 4 * v4);
  if ( result )
    *result = v2;
  return result;
}
