int __thiscall sub_101BA180(_BYTE *this, int a2)
{
  int result; // eax
  int v4; // edi
  int v5; // esi

  result = a2;
  if ( a2 )
    v4 = *(_DWORD *)(a2 + 172);
  else
    v4 = 0;
  if ( v4 )
  {
    if ( this[52] )
    {
      if ( sub_10229D00(32) )
        v5 = sub_10229D20("deleted");
      else
        v5 = 0;
      sub_101BC9C0(v4, v5);
      sub_1022AF00(v5);
      result = a2;
    }
    return (*(int (__thiscall **)(_BYTE *, int))(*((_DWORD *)this - 1) + 8))(this - 4, result);
  }
  return result;
}
