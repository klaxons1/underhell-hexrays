int __thiscall sub_1016E1F0(int this, unsigned __int16 a2, unsigned __int16 a3, char a4)
{
  _WORD *v4; // eax
  int v5; // eax

  v4 = (_WORD *)(*(_DWORD *)(this + 4) + 20 * a2);
  v4[1] = -1;
  *v4 = -1;
  v4[2] = a3;
  v4[3] = 0;
  if ( a3 == 0xFFFF )
  {
    *(_WORD *)(this + 16) = a2;
    return sub_1016CFE0(this, a2);
  }
  else
  {
    v5 = *(_DWORD *)(this + 4);
    if ( a4 )
      *(_WORD *)(v5 + 20 * a3) = a2;
    else
      *(_WORD *)(v5 + 20 * a3 + 2) = a2;
    return sub_1016CFE0(this, a2);
  }
}
