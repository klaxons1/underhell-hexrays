int __thiscall sub_10275030(int this)
{
  int result; // eax
  int v2; // ebx
  int *v3; // edx

  result = *(unsigned __int16 *)(this + 16);
  v2 = dword_106CFE44;
  while ( 1 )
  {
    if ( (v2 & 1) == 0 )
    {
      dword_106CFE3C = -1;
      dword_106CFE40 = 0x1FFFF;
      v2 |= 1u;
      dword_106CFE44 = v2;
    }
    v3 = (_WORD)result == 0xFFFF ? &dword_106CFE3C : (int *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)result);
    if ( *(_WORD *)v3 == 0xFFFF )
      break;
    if ( (v2 & 1) == 0 )
    {
      dword_106CFE3C = -1;
      dword_106CFE40 = 0x1FFFF;
      v2 |= 1u;
      dword_106CFE44 = v2;
    }
    if ( (_WORD)result == 0xFFFF )
      result = (unsigned __int16)dword_106CFE3C;
    else
      result = *(unsigned __int16 *)(*(_DWORD *)(this + 4) + 16 * (unsigned __int16)result);
  }
  return result;
}
