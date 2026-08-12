__int16 __thiscall sub_100A2290(int this, __int16 a2, char a3)
{
  __int16 v4; // di
  _WORD *v5; // eax

  v4 = sub_1009B7F0(this);
  v5 = (_WORD *)(*(_DWORD *)(this + 4) + 16 * v4);
  v5[1] = -1;
  *v5 = -1;
  v5[2] = a2;
  v5[3] = 0;
  if ( a2 == -1 )
  {
    *(_WORD *)(this + 16) = v4;
  }
  else if ( a3 )
  {
    *(_WORD *)(*(_DWORD *)(this + 4) + 16 * a2) = v4;
  }
  else
  {
    *(_WORD *)(*(_DWORD *)(this + 4) + 16 * a2 + 2) = v4;
  }
  sub_1009FD90(this, v4);
  ++*(_WORD *)(this + 18);
  return v4;
}
