int __thiscall sub_100C7460(int this, int a2, char a3)
{
  int result; // eax
  _DWORD *v5; // ecx

  result = sub_100C71D0((volatile signed __int32 *)this, a2, 0);
  if ( result >= 0 && result < *(_DWORD *)(this + 1132) )
  {
    v5 = (_DWORD *)(*(_DWORD *)(this + 1120) + 76 * result);
    if ( (*(_BYTE *)v5 & 1) != 0 )
    {
      if ( a3 )
        *v5 |= 2u;
      else
        *v5 &= ~2u;
    }
  }
  return result;
}
