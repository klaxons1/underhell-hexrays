__int16 __thiscall sub_100CB7F0(int this, unsigned __int8 *a2)
{
  unsigned __int16 v2; // bx
  int v3; // esi
  unsigned __int8 *v4; // edi
  int v6; // [esp+4h] [ebp-4h]

  v2 = *(_WORD *)(this + 16);
  v6 = this;
  if ( v2 == 0xFFFF )
    return -1;
  while ( 1 )
  {
    v3 = 24 * v2;
    v4 = (unsigned __int8 *)(*(_DWORD *)(this + 4) + v3 + 8);
    if ( sub_100C76F0(a2, v4) )
    {
      if ( (dword_10696910 & 1) == 0 )
      {
        dword_10696910 |= 1u;
        dword_10696908 = -1;
        dword_1069690C = 0x1FFFF;
      }
      v2 = *(_WORD *)(*(_DWORD *)(v6 + 4) + 24 * v2);
    }
    else
    {
      if ( !sub_100C76F0(v4, a2) )
        return v2;
      if ( (dword_10696910 & 1) == 0 )
      {
        dword_10696910 |= 1u;
        dword_10696908 = -1;
        dword_1069690C = 0x1FFFF;
      }
      v2 = *(_WORD *)(v3 + *(_DWORD *)(v6 + 4) + 2);
    }
    if ( v2 == 0xFFFF )
      break;
    this = v6;
  }
  return v2;
}
