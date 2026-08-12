int __thiscall sub_100432A0(_DWORD *this, float *a2, float *a3)
{
  int v3; // ecx
  int result; // eax

  v3 = this[106];
  if ( v3 )
    return (*(int (__thiscall **)(int, float *, float *))(*(_DWORD *)v3 + 204))(v3, a2, a3);
  if ( a2 )
  {
    *a2 = 0.0;
    a2[1] = 0.0;
    a2[2] = 0.0;
  }
  result = (int)a3;
  if ( a3 )
  {
    *a3 = 0.0;
    a3[1] = 0.0;
    a3[2] = 0.0;
  }
  return result;
}
