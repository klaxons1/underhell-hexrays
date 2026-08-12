int __thiscall sub_10010170(_DWORD *this, char a2)
{
  int result; // eax
  int v3; // [esp+0h] [ebp-4h]

  LOWORD(v3) = this[22];
  BYTE2(v3) = BYTE2(this[22]);
  HIBYTE(v3) = a2;
  result = v3;
  if ( this[22] != v3 )
    this[22] = v3;
  return result;
}
