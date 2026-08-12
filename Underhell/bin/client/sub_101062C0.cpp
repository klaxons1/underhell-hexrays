int __thiscall sub_101062C0(int this)
{
  int result; // eax
  int v2; // ebx
  int *v3; // edx

  result = *(unsigned __int16 *)(this + 16);
  v2 = dword_10436730;
  while ( 1 )
  {
    if ( (v2 & 1) == 0 )
    {
      dword_10436728 = -1;
      dword_1043672C = 0x1FFFF;
      v2 |= 1u;
      dword_10436730 = v2;
    }
    v3 = (_WORD)result == 0xFFFF ? &dword_10436728 : (int *)(*(_DWORD *)(this + 4) + 44 * (unsigned __int16)result);
    if ( *(_WORD *)v3 == 0xFFFF )
      break;
    if ( (v2 & 1) == 0 )
    {
      dword_10436728 = -1;
      dword_1043672C = 0x1FFFF;
      v2 |= 1u;
      dword_10436730 = v2;
    }
    if ( (_WORD)result == 0xFFFF )
      result = (unsigned __int16)dword_10436728;
    else
      result = *(unsigned __int16 *)(*(_DWORD *)(this + 4) + 44 * (unsigned __int16)result);
  }
  return result;
}
