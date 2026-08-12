int __thiscall sub_1002A720(int this, int a2, float *a3)
{
  __int64 v3; // rax
  int v4; // esi

  v3 = 0;
  if ( *(_WORD *)(this + 16) )
  {
    do
    {
      v4 = *(unsigned __int16 *)(this + 12);
      LODWORD(v3) = HIDWORD(v3) + *(unsigned __int16 *)(this + 14);
      if ( (int)v3 >= v4 )
        LODWORD(v3) = v3 - v4;
      *(float *)(*(_DWORD *)(*(_DWORD *)(this + 8) + 12 * v3 + 8) + 4 * a2) = *a3;
      LODWORD(v3) = *(unsigned __int16 *)(this + 16);
      ++HIDWORD(v3);
    }
    while ( SHIDWORD(v3) < (int)v3 );
  }
  return v3;
}
