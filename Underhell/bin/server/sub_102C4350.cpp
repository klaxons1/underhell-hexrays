int __thiscall sub_102C4350(int this, unsigned __int16 a2, unsigned __int16 a3, char a4)
{
  _WORD *v4; // eax
  int v5; // eax
  int v6; // edx

  v4 = (_WORD *)(*(_DWORD *)(this + 4) + 392 * a2);
  v4[1] = -1;
  *v4 = -1;
  v4[2] = a3;
  v4[3] = 0;
  if ( a3 == 0xFFFF )
  {
    *(_WORD *)(this + 16) = a2;
    return sub_102C3C90(this, a2);
  }
  else
  {
    v5 = *(_DWORD *)(this + 4);
    v6 = 392 * a3;
    if ( a4 )
      *(_WORD *)(v6 + v5) = a2;
    else
      *(_WORD *)(v6 + v5 + 2) = a2;
    return sub_102C3C90(this, a2);
  }
}
