int __thiscall sub_101EC900(int this, unsigned __int16 a2, unsigned __int16 a3, char a4)
{
  _WORD *v4; // eax
  int v5; // edx

  v4 = (_WORD *)(*(_DWORD *)(this + 4) + 12 * a2);
  v4[2] = a3;
  v4[1] = -1;
  *v4 = -1;
  v4[3] = 0;
  if ( a3 == 0xFFFF )
  {
    *(_WORD *)(this + 16) = a2;
    return sub_101EBC40(this, a2);
  }
  else
  {
    v5 = *(_DWORD *)(this + 4);
    if ( a4 )
      *(_WORD *)(v5 + 12 * a3) = a2;
    else
      *(_WORD *)(v5 + 12 * a3 + 2) = a2;
    return sub_101EBC40(this, a2);
  }
}
