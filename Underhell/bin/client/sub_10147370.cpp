unsigned __int16 __thiscall sub_10147370(int this, unsigned __int8 **a2)
{
  unsigned __int16 result; // ax
  unsigned __int8 *v3; // ebx
  int v4; // esi
  unsigned __int8 *v5; // edi
  int *v6; // eax
  int v7; // [esp+0h] [ebp-8h]
  unsigned __int16 v8; // [esp+4h] [ebp-4h]

  result = *(_WORD *)(this + 16);
  v7 = this;
  v8 = result;
  if ( result != 0xFFFF )
  {
    while ( 1 )
    {
      v3 = *a2;
      v4 = 12 * result;
      v5 = *(unsigned __int8 **)(*(_DWORD *)(this + 4) + v4 + 8);
      if ( sub_101421F0(*a2, v5) )
      {
        if ( (dword_1043C8C0 & 1) == 0 )
        {
          dword_1043C8C0 |= 1u;
          dword_1043C8B8 = -1;
          dword_1043C8BC = 0x1FFFF;
        }
        result = v8 == 0xFFFF ? dword_1043C8B8 : *(_WORD *)(v4 + *(_DWORD *)(v7 + 4));
      }
      else
      {
        if ( !sub_101421F0(v5, v3) )
          return v8;
        if ( (dword_1043C8C0 & 1) == 0 )
        {
          dword_1043C8C0 |= 1u;
          dword_1043C8B8 = -1;
          dword_1043C8BC = 0x1FFFF;
        }
        v6 = v8 == 0xFFFF ? &dword_1043C8B8 : (int *)(v4 + *(_DWORD *)(v7 + 4));
        result = *((_WORD *)v6 + 1);
      }
      v8 = result;
      if ( result == 0xFFFF )
        break;
      this = v7;
    }
    return v8;
  }
  return result;
}
