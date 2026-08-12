char __thiscall sub_10249FC0(int this, int a2)
{
  int v3; // eax
  _DWORD *v4; // ecx

  LOBYTE(v3) = sub_1023E0F0((_DWORD *)(this + 820), &a2);
  if ( *(_BYTE *)(this + 84) )
  {
    *(_BYTE *)(this + 88) |= 1u;
  }
  else
  {
    v4 = *(_DWORD **)(this + 24);
    if ( v4 )
    {
      *v4 |= 0x101u;
      v3 = sub_10153460(v4);
      *(_WORD *)(v3 + 2) = 0;
    }
  }
  return v3;
}
