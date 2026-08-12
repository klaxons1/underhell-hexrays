_DWORD *__thiscall sub_100C54C0(_DWORD *this)
{
  int v2; // eax
  int v3; // esi
  int v4; // ebx
  _DWORD *result; // eax

  v2 = sub_100DDA40(28);
  v3 = 0;
  if ( v2 )
  {
    *(_BYTE *)(v2 + 4) &= 0xFCu;
    *(float *)v2 = 0.0;
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 12) = 0;
    *(_DWORD *)(v2 + 16) = 0;
    *(_DWORD *)(v2 + 20) = 0;
    *(_DWORD *)(v2 + 24) = 0;
    v3 = v2;
  }
  *(_BYTE *)(v3 + 4) &= ~1u;
  sub_100C3E60((_DWORD *)v3, this + 108);
  *(float *)v3 = RandomFloat(1.0, 3.0);
  *(_BYTE *)(v3 + 4) ^= (*(_BYTE *)(v3 + 4) ^ (2 * (RandomInt(0, 1) == 0))) & 2;
  sub_100C5160((_DWORD *)v3, (int)this, this + 108);
  v4 = (unsigned __int16)sub_100EC160(0);
  sub_1016F8E0(0xFFFF, v4);
  result = (_DWORD *)(this[63] + 8 * v4);
  if ( result )
    *result = v3;
  return result;
}
