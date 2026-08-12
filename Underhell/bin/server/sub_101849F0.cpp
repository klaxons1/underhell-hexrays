int *__thiscall sub_101849F0(float *this)
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
  v3 = dword_106B6D38;
  v4 = dword_106B6D38;
  if ( dword_106B6D38 + 1 > dword_106B6D30 )
  {
    sub_102ABFC0(dword_106B6D38 - dword_106B6D30 + 1);
    v3 = dword_106B6D38;
  }
  v5 = dword_106B6D2C;
  dword_106B6D38 = v3 + 1;
  v6 = v3 - v4;
  dword_106B6D3C = dword_106B6D2C;
  if ( v6 > 0 )
  {
    memcpy((void *)(dword_106B6D2C + 4 * v4 + 4), (const void *)(dword_106B6D2C + 4 * v4), 4 * v6);
    v5 = dword_106B6D2C;
  }
  result = (int *)(v5 + 4 * v4);
  if ( result )
    *result = v2;
  return result;
}
