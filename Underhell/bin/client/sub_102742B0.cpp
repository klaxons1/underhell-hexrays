int __thiscall sub_102742B0(_DWORD *this, char a2)
{
  int result; // eax
  _DWORD *v4; // ecx
  int v5; // edi
  int v6; // edi
  int v7; // eax

  result = this[53];
  v4 = (_DWORD *)this[67];
  if ( result >= 0 && result < v4[54] && result <= v4[60] )
  {
    v5 = v4[53];
    if ( *(_DWORD *)(v5 + 12 * result + 4) != result || *(_DWORD *)(v5 + 12 * result + 8) == result )
    {
      result *= 3;
      v6 = *(_DWORD *)(v5 + 4 * result);
      if ( v6 )
      {
        v7 = sub_10273C00(this);
        result = sub_102741A0(v7, (int)this);
        if ( a2 )
          return (*(int (__thiscall **)(_DWORD *, int))(*this + 768))(this, v6);
      }
    }
  }
  return result;
}
