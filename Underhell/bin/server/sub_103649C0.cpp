char __thiscall sub_103649C0(int this)
{
  unsigned int v2; // eax
  int v3; // ecx
  unsigned int v4; // eax

  LOBYTE(v2) = sub_10041D00((_DWORD *)this);
  v3 = *(_DWORD *)(this + 3624);
  if ( v3 )
    LOBYTE(v2) = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 88))(v3);
  if ( !*(_BYTE *)(this + 306) )
  {
    v4 = *(_DWORD *)(this + 308);
    if ( v4 == -1
      || (v2 = v4 >> 12, off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 2] != v2)
      || !off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 1] )
    {
      sub_10364970(this);
      LOBYTE(v2) = sub_10027740(this);
    }
  }
  return v2;
}
