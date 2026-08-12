int __thiscall sub_1008AD80(_DWORD *this, unsigned __int16 a2)
{
  int *v2; // esi
  int v3; // edi
  int v4; // eax
  _DWORD *v5; // ebx
  int v6; // eax
  int v7; // ecx
  int result; // eax

  v2 = this + 1;
  v3 = 10 * a2;
  v4 = *(unsigned __int16 *)(v3 + this[1]);
  if ( (_WORD)v4 != 0xFFFF )
  {
    v5 = this + 8;
    sub_100880A0(
      this + 8,
      *((_WORD *)this + *((unsigned __int16 *)this + *(unsigned __int16 *)(this[8] + 16 * v4) + 53) + 44),
      0xFFFFu,
      *(_WORD *)(v3 + this[1]));
    *(_DWORD *)(*v5 + 16 * *(unsigned __int16 *)(*v2 + 10 * a2) + 8) = -1;
    v6 = *v5 + 16 * *(unsigned __int16 *)(*v2 + 10 * a2);
    v7 = *(unsigned __int16 *)(v6 + 4);
    if ( (_WORD)v7 != 0xFFFF )
    {
      *(_WORD *)(*v2 + 10 * v7) = -1;
      *(_WORD *)(v6 + 4) = -1;
    }
  }
  result = sub_1005A8B0(v2, a2);
  LOWORD(result) = *((_WORD *)v2 + 8);
  *(_WORD *)(*v2 + v3 + 8) = result;
  *((_WORD *)v2 + 8) = a2;
  return result;
}
