int __thiscall sub_103D9AD0(int this, int a2)
{
  int result; // eax
  bool v3; // zf

  switch ( a2 )
  {
    case '+':
      if ( *(_DWORD *)(this + 3660) == -1 )
        return 90;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 3660) & 0xFFF) + 2] != *(_DWORD *)(this + 3660) >> 12 )
        return 90;
      if ( !off_1061BE18[4 * (*(_DWORD *)(this + 3660) & 0xFFF) + 1] )
        return 90;
      if ( !*(_BYTE *)(this + 3716) )
        return 90;
      v3 = !sub_103D8840((void *)this);
      result = 98;
      if ( v3 )
        return 90;
      break;
    case ',':
      return 92;
    case '3':
      return 91;
    default:
      return sub_10069910((_DWORD *)this, a2);
  }
  return result;
}
