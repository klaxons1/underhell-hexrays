int __thiscall sub_10431350(int this)
{
  int v2; // ecx
  int result; // eax
  int v4; // ecx
  _DWORD *v5; // esi

  v2 = *(unsigned __int16 *)(this + 44);
  if ( (_WORD)v2 == 0xFFFF )
  {
    if ( *(unsigned __int16 *)(this + 48) == *(_DWORD *)(this + 4) )
    {
      sub_101924C0((_DWORD *)this, 1);
      *(_DWORD *)(this + 52) = *(_DWORD *)this;
    }
    result = *(unsigned __int16 *)(this + 48);
    *(_WORD *)(this + 48) = result + 1;
  }
  else
  {
    result = v2;
    *(_WORD *)(this + 44) = *(_WORD *)(*(_DWORD *)this + 12 * v2 + 10);
  }
  v4 = 12 * (unsigned __int16)result;
  *(_WORD *)(v4 + *(_DWORD *)this + 8) = result;
  *(_WORD *)(v4 + *(_DWORD *)this + 10) = result;
  ++*(_WORD *)(this + 46);
  v5 = (_DWORD *)(v4 + *(_DWORD *)this);
  if ( v5 )
  {
    *v5 = 0x10000;
    v5[1] = 0;
  }
  return result;
}
