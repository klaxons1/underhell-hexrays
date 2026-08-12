float *__thiscall sub_101BE150(float *this, int *a2)
{
  float *v3; // eax
  int *v5; // ecx
  float v6; // [esp+Ch] [ebp+8h]

  v6 = (float)*a2;
  if ( *(_DWORD *)this != LODWORD(v6) )
  {
    v3 = this - 203;
    if ( *((_BYTE *)this - 728) )
    {
      *((_BYTE *)v3 + 88) |= 1u;
      *this = v6;
      return this;
    }
    v5 = (int *)*((_DWORD *)v3 + 6);
    if ( v5 )
      sub_100194B0(v5, 812);
    *this = v6;
  }
  return this;
}
