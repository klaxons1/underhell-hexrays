int __thiscall sub_100314B0(int this, float a2)
{
  __int64 v2; // rax
  int v3; // edi
  int i; // esi
  int v5; // eax

  v2 = *(unsigned __int16 *)(this + 16);
  if ( *(_WORD *)(this + 16) )
  {
    v3 = *(unsigned __int16 *)(this + 12);
    for ( i = *(unsigned __int16 *)(this + 14) - v3; ; ++i )
    {
      v5 = HIDWORD(v2) + *(unsigned __int16 *)(this + 14);
      if ( v5 >= v3 )
        v5 = i;
      if ( a2 > (double)*(float *)(*(_DWORD *)(this + 8) + 36 * v5) )
        break;
      LODWORD(v2) = *(unsigned __int16 *)(this + 16);
      ++HIDWORD(v2);
      if ( SHIDWORD(v2) >= (int)v2 )
        return v2;
    }
    LODWORD(v2) = HIDWORD(v2) + 3;
    if ( HIDWORD(v2) + 3 < *(unsigned __int16 *)(this + 16) )
      *(_WORD *)(this + 16) = v2;
  }
  return v2;
}
