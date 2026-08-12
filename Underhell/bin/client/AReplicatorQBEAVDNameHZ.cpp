int __thiscall Replicator::operator[](_DWORD *this, int a2, unsigned int a3)
{
  _DWORD *v3; // ecx
  int result; // eax

  if ( a3 > 9 )
  {
    DName::DName((int **)a2, 3);
    return a2;
  }
  else if ( *this == -1 || (signed int)a3 > *this )
  {
    result = a2;
    *(_DWORD *)(a2 + 4) &= 0xFFFF00FF;
    *(_DWORD *)a2 = 0;
    *(_BYTE *)(a2 + 4) = 2;
  }
  else
  {
    v3 = (_DWORD *)this[a3 + 1];
    result = a2;
    *(_DWORD *)a2 = *v3;
    *(_DWORD *)(a2 + 4) = v3[1];
  }
  return result;
}
