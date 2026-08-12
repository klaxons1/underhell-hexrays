int __thiscall sub_1022D6C0(_DWORD *this, unsigned __int16 a2, unsigned __int16 a3, unsigned __int16 a4)
{
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // esi
  int result; // eax

  sub_1022D600(this, a2, a4);
  v5 = *this + 12 * a4;
  *(_WORD *)(v5 + 10) = a3;
  if ( a3 == 0xFFFF )
  {
    v6 = 10 * a2;
    *(_WORD *)(v5 + 8) = *(_WORD *)(this[3] + v6 + 2);
    *(_WORD *)(this[3] + v6 + 2) = a4;
  }
  else
  {
    v7 = *this + 12 * a3;
    *(_WORD *)(v5 + 8) = *(_WORD *)(v7 + 8);
    *(_WORD *)(v7 + 8) = a4;
  }
  v8 = *(unsigned __int16 *)(v5 + 8);
  if ( (_WORD)v8 == 0xFFFF )
    *(_WORD *)(this[3] + 10 * a2) = a4;
  else
    *(_WORD *)(*this + 12 * v8 + 10) = a4;
  v9 = this[3];
  ++*(_WORD *)(v9 + 10 * a2 + 4);
  v10 = this[10];
  result = v9 + 10 * a2 + 4;
  if ( v10 )
    *(_WORD *)(v10 + 2 * a4) = a2;
  return result;
}
