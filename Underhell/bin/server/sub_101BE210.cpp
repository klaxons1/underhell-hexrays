_DWORD *__thiscall sub_101BE210(_DWORD *this, unsigned __int8 *a2)
{
  int v2; // edi
  _DWORD *v4; // eax
  int *v6; // ecx

  v2 = *a2;
  if ( *this != v2 )
  {
    v4 = this - 206;
    if ( *((_BYTE *)this - 740) )
    {
      *((_BYTE *)v4 + 88) |= 1u;
      *this = v2;
      return this;
    }
    v6 = (int *)v4[6];
    if ( v6 )
      sub_100194B0(v6, 824);
    *this = v2;
  }
  return this;
}
