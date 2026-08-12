int *__thiscall sub_1031F7C0(float *this)
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
  v3 = dword_106E3BCC;
  v4 = dword_106E3BCC;
  if ( dword_106E3BCC + 1 > dword_106E3BC4 )
  {
    sub_102ABFC0(&dword_106E3BC0, dword_106E3BCC - dword_106E3BC4 + 1);
    v3 = dword_106E3BCC;
  }
  v5 = dword_106E3BC0;
  dword_106E3BCC = v3 + 1;
  v6 = v3 - v4;
  dword_106E3BD0 = dword_106E3BC0;
  if ( v6 > 0 )
  {
    memcpy((void *)(dword_106E3BC0 + 4 * v4 + 4), (const void *)(dword_106E3BC0 + 4 * v4), 4 * v6);
    v5 = dword_106E3BC0;
  }
  result = (int *)(v5 + 4 * v4);
  if ( result )
    *result = v2;
  return result;
}
