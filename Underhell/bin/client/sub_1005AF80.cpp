int __thiscall sub_1005AF80(_DWORD *this, unsigned __int16 a2, unsigned __int16 a3, unsigned __int16 a4)
{
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // esi
  int result; // eax

  sub_1005ADF0(this, a2, a4);
  v5 = *this + 40 * a4;
  *(_WORD *)(v5 + 36) = a3;
  if ( a3 == 0xFFFF )
  {
    v6 = 10 * a2;
    *(_WORD *)(v5 + 38) = *(_WORD *)(v6 + this[3]);
    *(_WORD *)(v6 + this[3]) = a4;
  }
  else
  {
    v7 = *this + 40 * a3;
    *(_WORD *)(v5 + 38) = *(_WORD *)(v7 + 38);
    *(_WORD *)(v7 + 38) = a4;
  }
  v8 = *(unsigned __int16 *)(v5 + 38);
  if ( (_WORD)v8 == 0xFFFF )
    *(_WORD *)(this[3] + 10 * a2 + 2) = a4;
  else
    *(_WORD *)(*this + 40 * v8 + 36) = a4;
  v9 = this[3];
  ++*(_WORD *)(v9 + 10 * a2 + 4);
  v10 = this[10];
  result = v9 + 10 * a2 + 4;
  if ( v10 )
    *(_WORD *)(v10 + 2 * a4) = a2;
  return result;
}
