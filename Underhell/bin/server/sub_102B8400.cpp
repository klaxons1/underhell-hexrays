char __thiscall sub_102B8400(int this)
{
  unsigned int v2; // eax
  int v3; // ecx

  sub_100C1080(this);
  LOBYTE(v2) = dword_106B31C8;
  if ( *(_DWORD *)(dword_106B31C8 + 72) == 2 )
  {
    v2 = *(_DWORD *)(this + 1136);
    if ( v2 == -1
      || (v2 >>= 12, off_1061BE18[4 * (*(_DWORD *)(this + 1136) & 0xFFF) + 2] != v2)
      || !off_1061BE18[4 * (*(_DWORD *)(this + 1136) & 0xFFF) + 1] )
    {
      if ( *(_DWORD *)(this + 1140) )
        LOBYTE(v2) = sub_102B7B10(
                       (float *)this,
                       1,
                       *(_BYTE *)(this + 1140),
                       *(_BYTE *)(this + 1141),
                       *(_BYTE *)(this + 1142),
                       *(unsigned __int8 *)(this + 1143));
    }
  }
  v3 = *(_DWORD *)(this + 424);
  if ( v3 )
    LOBYTE(v2) = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 96))(v3);
  return v2;
}
