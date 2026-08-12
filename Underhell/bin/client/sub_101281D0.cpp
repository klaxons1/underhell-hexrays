int __thiscall sub_101281D0(int *this, int a2, int a3)
{
  int result; // eax
  _DWORD *v5; // eax
  int v6; // eax
  int v7; // ecx

  result = a2;
  *this = a2;
  this[1] = 0;
  this[5] = 0;
  if ( *this )
  {
    if ( a3 )
    {
      v5 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a3 + 156))(a3, 0);
      this[8] = (int)v5;
      this[7] = *v5 - 1;
    }
    if ( *(_DWORD *)(*this + 336) )
    {
      v6 = sub_10128960();
      sub_101280C0(this, v6);
    }
    sub_10128160(this + 11, *(_DWORD *)(*this + 156));
    sub_10128160(this + 16, *(_DWORD *)(*this + 156));
    result = 0;
    if ( *(int *)(*this + 156) > 0 )
    {
      v7 = 0;
      do
      {
        *(_DWORD *)(this[11] + 4 * result) = *(_DWORD *)(v7 + *(_DWORD *)(*this + 160) + *this + 160);
        *(_DWORD *)(this[16] + 4 * result++) = *(_DWORD *)(v7 + *(_DWORD *)(*this + 160) + *this + 4);
        v7 += 216;
      }
      while ( result < *(_DWORD *)(*this + 156) );
    }
  }
  return result;
}
