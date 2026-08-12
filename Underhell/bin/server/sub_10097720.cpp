char __thiscall sub_10097720(int this, char a2, char a3)
{
  char v4; // bl
  int v5; // eax

  v4 = sub_10094590(this);
  v5 = *(_DWORD *)(this + 4) + 12 * v4;
  *(_BYTE *)(v5 + 2) = a2;
  *(_WORD *)v5 = -1;
  *(_BYTE *)(v5 + 3) = 0;
  if ( a2 == -1 )
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
  sub_100955F0(this, v4);
  ++*(_BYTE *)(this + 17);
  return v4;
}
