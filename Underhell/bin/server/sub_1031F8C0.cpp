int *__thiscall sub_1031F8C0(float *this)
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
  v3 = dword_106E3BE4;
  v4 = dword_106E3BE4;
  if ( dword_106E3BE4 + 1 > dword_106E3BDC )
  {
    sub_102ABFC0(&dword_106E3BD8, dword_106E3BE4 - dword_106E3BDC + 1);
    v3 = dword_106E3BE4;
  }
  v5 = dword_106E3BD8;
  dword_106E3BE4 = v3 + 1;
  v6 = v3 - v4;
  dword_106E3BE8 = dword_106E3BD8;
  if ( v6 > 0 )
  {
    memcpy((void *)(dword_106E3BD8 + 4 * v4 + 4), (const void *)(dword_106E3BD8 + 4 * v4), 4 * v6);
    v5 = dword_106E3BD8;
  }
  result = (int *)(v5 + 4 * v4);
  if ( result )
    *result = v2;
  return result;
}
