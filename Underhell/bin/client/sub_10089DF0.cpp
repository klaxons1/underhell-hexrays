int __thiscall sub_10089DF0(int this, int a2)
{
  int v3; // ecx
  int result; // eax
  int i; // edi
  unsigned __int16 v6; // cx
  int v7; // eax
  int v8; // [esp+8h] [ebp-8h]

  v3 = *(unsigned __int16 *)(this + 2 * a2 + 106);
  result = 256 / (1 << v3);
  v8 = v3;
  for ( i = result * result - 1; i >= 0; --i )
  {
    if ( *(_WORD *)(this + 76) == 0xFFFF )
    {
      if ( *(unsigned __int16 *)(this + 80) == *(_DWORD *)(this + 36) )
      {
        sub_1007CFB0((_DWORD *)(this + 32), 1);
        *(_DWORD *)(this + 84) = *(_DWORD *)(this + 32);
      }
      v6 = *(_WORD *)(this + 80);
      *(_WORD *)(this + 80) = v6 + 1;
    }
    else
    {
      v6 = *(_WORD *)(this + 76);
      *(_WORD *)(this + 76) = *(_WORD *)(*(_DWORD *)(this + 32) + 16 * v6 + 14);
    }
    v7 = 2 * v6;
    *(_WORD *)(*(_DWORD *)(this + 32) + 8 * v7 + 12) = v6;
    *(_WORD *)(*(_DWORD *)(this + 32) + 8 * v7 + 14) = v6;
    ++*(_WORD *)(this + 78);
    *(_WORD *)(*(_DWORD *)(this + 32) + 8 * v7) = a2;
    *(_WORD *)(*(_DWORD *)(this + 32) + 8 * v7 + 2) = i;
    *(_WORD *)(*(_DWORD *)(this + 32) + 8 * v7 + 4) = -1;
    *(_DWORD *)(*(_DWORD *)(this + 32) + 8 * v7 + 8) = -1;
    result = sub_100880A0((_DWORD *)(this + 32), *(_WORD *)(this + 2 * v8 + 88), 0xFFFFu, v6);
  }
  return result;
}
