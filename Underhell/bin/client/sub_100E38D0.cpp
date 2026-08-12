int __thiscall sub_100E38D0(int this)
{
  int result; // eax
  int v2; // ebx
  int *v3; // edx

  result = *(unsigned __int16 *)(this + 16);
  v2 = dword_10435698;
  while ( 1 )
  {
    if ( (v2 & 1) == 0 )
    {
      dword_10435690 = -1;
      dword_10435694 = 0x1FFFF;
      v2 |= 1u;
      dword_10435698 = v2;
    }
    v3 = (_WORD)result == 0xFFFF ? &dword_10435690 : (int *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)result);
    if ( *(_WORD *)v3 == 0xFFFF )
      break;
    if ( (v2 & 1) == 0 )
    {
      dword_10435690 = -1;
      dword_10435694 = 0x1FFFF;
      v2 |= 1u;
      dword_10435698 = v2;
    }
    if ( (_WORD)result == 0xFFFF )
      result = (unsigned __int16)dword_10435690;
    else
      result = *(unsigned __int16 *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)result);
  }
  return result;
}
