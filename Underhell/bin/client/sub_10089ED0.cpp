int __thiscall sub_10089ED0(_DWORD *this, unsigned __int16 a2)
{
  int result; // eax

  result = sub_10087FE0(
             this + 8,
             *((_WORD *)this + *((unsigned __int16 *)this + *(unsigned __int16 *)(this[8] + 16 * a2) + 53) + 44),
             0xFFFFu,
             a2);
  *(_DWORD *)(this[8] + 16 * a2 + 8) = this[35];
  return result;
}
