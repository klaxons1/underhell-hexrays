void __thiscall sub_1040E150(int *this)
{
  unsigned int v2; // eax
  _DWORD *v3; // ecx
  unsigned int v4; // eax
  int v5; // eax
  int *v6; // esi
  int v7; // edi

  sub_100EC3F0(this, 0, 0.0, 0);
  this[49] = 0;
  v2 = this[544];
  if ( v2 == -1 || off_1061BE18[4 * (this[544] & 0xFFF) + 2] != v2 >> 12 )
    v3 = 0;
  else
    v3 = (_DWORD *)off_1061BE18[4 * (this[544] & 0xFFF) + 1];
  sub_100EC3F0(v3, 0, 0.0, 0);
  v4 = this[544];
  if ( v4 == -1 || off_1061BE18[4 * (this[544] & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (this[544] & 0xFFF) + 1];
  sub_1025FAC0(v5);
  sub_1025FAC0((int)this);
  v6 = this + 549;
  v7 = 2;
  do
  {
    if ( *v6 )
      sub_1025FAC0(*v6);
    ++v6;
    --v7;
  }
  while ( v7 );
}
