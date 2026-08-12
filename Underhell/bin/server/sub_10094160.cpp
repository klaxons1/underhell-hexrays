char __thiscall sub_10094160(int this)
{
  int v1; // ebx
  char result; // al
  int *v3; // edx

  v1 = dword_10693990;
  result = *(_BYTE *)(this + 16);
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10693990 = v1;
      dword_1069398C = 0x1FFFFFF;
    }
    v3 = result == -1 ? &dword_1069398C : (int *)(*(_DWORD *)(this + 4) + 12 * result);
    if ( *(_BYTE *)v3 == 0xFF )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10693990 = v1;
      dword_1069398C = 0x1FFFFFF;
    }
    if ( result == -1 )
      result = dword_1069398C;
    else
      result = *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * result);
  }
  return result;
}
