int __thiscall sub_1039F130(_DWORD *this, int a2, float a3)
{
  int result; // eax

  if ( !sub_10023D10(this, 10) )
    return 0;
  if ( sub_1039E8B0(this) )
    return 21;
  if ( a3 > 4096.0 )
    return 39;
  result = 38;
  if ( a3 >= 1.0 )
    return 21;
  return result;
}
