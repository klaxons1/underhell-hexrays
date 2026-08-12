int *__thiscall sub_1021B540(int *this, _DWORD *a2)
{
  int v3; // edi
  int *v4; // eax
  int *v6; // ecx

  v3 = *this | *a2;
  if ( *this != v3 )
  {
    v4 = this - 201;
    if ( *((_BYTE *)this - 720) )
    {
      *((_BYTE *)v4 + 88) |= 1u;
      *this = v3;
      return this;
    }
    v6 = (int *)v4[6];
    if ( v6 )
      sub_100194B0(v6, 804);
    *this = v3;
  }
  return this;
}
