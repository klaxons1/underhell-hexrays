unsigned int *__thiscall sub_1020F050(unsigned int *this)
{
  unsigned int *v1; // esi
  unsigned int *result; // eax
  unsigned int v3; // edi
  int *v4; // ecx

  v1 = this + 62;
  result = (unsigned int *)(this[62] >> 11);
  if ( (this[62] & 0x800) != 0 )
  {
    result = (unsigned int *)sub_101CFB90((int)this);
    v3 = *v1 & 0xFFFFF7FF;
    if ( *v1 != v3 )
    {
      result = v1 - 62;
      if ( *((_BYTE *)v1 - 164) )
      {
        *((_BYTE *)result + 88) |= 1u;
        *v1 = v3;
      }
      else
      {
        v4 = (int *)result[6];
        if ( v4 )
          result = (unsigned int *)sub_100194B0(v4, 248);
        *v1 = v3;
      }
    }
  }
  return result;
}
