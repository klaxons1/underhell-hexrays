unsigned __int8 __thiscall sub_10076F20(int this, unsigned __int8 a2, char a3)
{
  unsigned __int8 v4; // bl
  int v5; // eax

  v4 = sub_10075BE0(this);
  v5 = *(_DWORD *)(this + 4) + 12 * v4;
  *(_BYTE *)(v5 + 2) = a2;
  *(_WORD *)v5 = -1;
  *(_BYTE *)(v5 + 3) = 0;
  if ( a2 == 0xFF )
  {
    *(_BYTE *)(this + 16) = v4;
  }
  else if ( a3 )
  {
    *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * a2) = v4;
  }
  else
  {
    *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * a2 + 1) = v4;
  }
  sub_10075FC0(this, v4);
  ++*(_BYTE *)(this + 17);
  return v4;
}
