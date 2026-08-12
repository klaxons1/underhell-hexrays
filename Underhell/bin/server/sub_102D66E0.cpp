float *__thiscall sub_102D66E0(float *this, float *a2)
{
  float *v3; // eax
  int *v5; // ecx
  float v6; // [esp+Ch] [ebp+8h]

  v6 = *a2 * *this;
  if ( *(_DWORD *)this != LODWORD(v6) )
  {
    v3 = this - 532;
    if ( *((_BYTE *)this - 2044) )
    {
      *((_BYTE *)v3 + 88) |= 1u;
      *this = v6;
      return this;
    }
    v5 = (int *)*((_DWORD *)v3 + 6);
    if ( v5 )
      sub_100194B0(v5, 2128);
    *this = v6;
  }
  return this;
}
