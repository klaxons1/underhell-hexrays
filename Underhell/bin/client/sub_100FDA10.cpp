int __thiscall sub_100FDA10(int this)
{
  int result; // eax
  int v2; // ebx
  int *v3; // edx

  result = *(unsigned __int16 *)(this + 16);
  v2 = dword_104360DC;
  while ( 1 )
  {
    if ( (v2 & 1) == 0 )
    {
      dword_104360D4 = -1;
      dword_104360D8 = 0x1FFFF;
      v2 |= 1u;
      dword_104360DC = v2;
    }
    v3 = (_WORD)result == 0xFFFF ? &dword_104360D4 : (int *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)result);
    if ( *(_WORD *)v3 == 0xFFFF )
      break;
    if ( (v2 & 1) == 0 )
    {
      dword_104360D4 = -1;
      dword_104360D8 = 0x1FFFF;
      v2 |= 1u;
      dword_104360DC = v2;
    }
    if ( (_WORD)result == 0xFFFF )
      result = (unsigned __int16)dword_104360D4;
    else
      result = *(unsigned __int16 *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)result);
  }
  return result;
}
