int __thiscall sub_10087FE0(_DWORD *this, unsigned __int16 a2, unsigned __int16 a3, unsigned __int16 a4)
{
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // esi
  int result; // eax

  sub_10087920(this, a2, a4);
  v5 = *this + 16 * a4;
  *(_WORD *)(v5 + 14) = a3;
  if ( a3 == 0xFFFF )
  {
    v6 = 10 * a2;
    *(_WORD *)(v5 + 12) = *(_WORD *)(this[3] + v6 + 2);
    *(_WORD *)(this[3] + v6 + 2) = a4;
  }
  else
  {
    v7 = *this + 16 * a3;
    *(_WORD *)(v5 + 12) = *(_WORD *)(v7 + 12);
    *(_WORD *)(v7 + 12) = a4;
  }
  v8 = *(unsigned __int16 *)(v5 + 12);
  if ( (_WORD)v8 == 0xFFFF )
    *(_WORD *)(this[3] + 10 * a2) = a4;
  else
    *(_WORD *)(*this + 16 * v8 + 14) = a4;
  v9 = this[3];
  ++*(_WORD *)(v9 + 10 * a2 + 4);
  v10 = this[10];
  result = v9 + 10 * a2 + 4;
  if ( v10 )
    *(_WORD *)(v10 + 2 * a4) = a2;
  return result;
}
