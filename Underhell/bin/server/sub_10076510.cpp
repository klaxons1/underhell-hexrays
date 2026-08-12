unsigned __int8 __thiscall sub_10076510(int this)
{
  int v1; // ebx
  unsigned __int8 result; // al
  int *v3; // edx

  v1 = dword_106931E0;
  result = *(_BYTE *)(this + 16);
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_106931E0 = v1;
      dword_106931DC = 0x1FFFFFF;
    }
    v3 = result == 0xFF ? &dword_106931DC : (int *)(*(_DWORD *)(this + 4) + 12 * result);
    if ( *(_BYTE *)v3 == 0xFF )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_106931E0 = v1;
      dword_106931DC = 0x1FFFFFF;
    }
    if ( result == 0xFF )
      result = dword_106931DC;
    else
      result = *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * result);
  }
  return result;
}
