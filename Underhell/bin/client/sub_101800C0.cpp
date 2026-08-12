int __thiscall sub_101800C0(int *this)
{
  int result; // eax
  int *v3; // esi
  _BYTE *v4; // eax
  _BYTE *v5; // eax
  int v6; // ecx
  int v7; // ecx
  int i; // [esp+8h] [ebp-4h]

  result = 0;
  for ( i = 0; result < this[3]; i = result )
  {
    v3 = *(int **)(*this + 4 * result);
    if ( v3 )
    {
      if ( *v3 && *(_BYTE *)*v3 )
      {
        sub_10034930(*v3);
        *v3 = 0;
      }
      v4 = (_BYTE *)v3[1];
      if ( v4 && *v4 )
      {
        sub_10034930(v3[1]);
        v3[1] = 0;
      }
      v5 = (_BYTE *)v3[2];
      if ( v5 && *v5 )
      {
        sub_10034930(v3[2]);
        v3[2] = 0;
      }
      v6 = v3[3];
      if ( v6 )
      {
        sub_1022AF00(v6);
        v3[3] = 0;
      }
      sub_10034930((int)v3);
      result = i;
    }
    ++result;
  }
  this[3] = 0;
  if ( this[2] < 0 )
  {
    this[4] = *this;
  }
  else
  {
    result = *this;
    if ( *this )
    {
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, *this);
      *this = 0;
    }
    v7 = *this;
    this[1] = 0;
    this[4] = v7;
  }
  return result;
}
