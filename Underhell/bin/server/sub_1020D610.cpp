int __thiscall sub_1020D610(_DWORD *this)
{
  unsigned int v2; // eax
  int v4[11]; // [esp+4h] [ebp-50h] BYREF
  int v5; // [esp+30h] [ebp-24h]

  sub_10247EC0(v4);
  if ( this )
    v5 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 8))(this);
  else
    v5 = -1;
  v2 = this[307];
  if ( v2 == -1 || off_1061BE18[4 * (this[307] & 0xFFF) + 2] != v2 >> 12 )
    return sub_1020BA60((unsigned int)this, 0, (int)v4);
  else
    return sub_1020BA60(
             (unsigned int)this,
             (int (__thiscall ***)(_DWORD))off_1061BE18[4 * (this[307] & 0xFFF) + 1],
             (int)v4);
}
