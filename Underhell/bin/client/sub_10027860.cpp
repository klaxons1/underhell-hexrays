int __thiscall sub_10027860(int this)
{
  int result; // eax
  int v3; // ebx
  int v4; // ecx
  int v5; // eax
  int v6; // esi

  result = 0;
  v3 = 0;
  if ( *(_WORD *)(this + 16) )
  {
    do
    {
      v4 = *(unsigned __int16 *)(this + 12);
      v5 = v3 + *(unsigned __int16 *)(this + 14);
      if ( v5 >= v4 )
        v5 -= v4;
      v6 = *(_DWORD *)(this + 8) + 12 * v5;
      sub_10034930(*(_DWORD *)(v6 + 8));
      result = 0;
      *(_DWORD *)(v6 + 8) = 0;
      *(_DWORD *)(v6 + 4) = 0;
      ++v3;
    }
    while ( v3 < *(unsigned __int16 *)(this + 16) );
  }
  *(_DWORD *)(this + 14) = 0;
  return result;
}
