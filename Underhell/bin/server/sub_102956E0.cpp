int __thiscall sub_102956E0(int this)
{
  int v1; // eax
  int v2; // eax

  v1 = 16;
  if ( *(_BYTE *)(this + 27) )
    v1 = 17;
  if ( *(_DWORD *)(dword_106DB0DC + 48) == 3 && (*(_DWORD *)(*(_DWORD *)(this + 4) + 236) & 0x1000) != 0 )
    v1 |= 0x80u;
  if ( *(_BYTE *)(this + 25) )
    v2 = v1 | 2;
  else
    v2 = v1 | 4;
  return sub_10072DB0(*(_DWORD *)(this + 4), 12, v2, *(float *)(this + 48), 0);
}
