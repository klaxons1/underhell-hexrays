char __thiscall sub_10350950(int this)
{
  char result; // al

  result = sub_10023D10((_DWORD *)this, 30);
  if ( result )
  {
    if ( *(_BYTE *)(this + 4142) )
    {
      result = 8;
      if ( *(int *)(this + 4136) > 8 )
        *(_DWORD *)(this + 4136) = 8;
    }
    *(_BYTE *)(this + 4252) = 1;
  }
  return result;
}
