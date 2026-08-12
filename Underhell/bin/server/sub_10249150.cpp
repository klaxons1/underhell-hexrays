void __thiscall sub_10249150(_BYTE *this, int a2)
{
  _BYTE *v3; // esi
  unsigned int v4; // eax
  int v5; // eax

  v3 = this + 225;
  if ( this[225] )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 480))(this, this + 225);
    *v3 = 0;
  }
  if ( this[224] != 2 )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 472))(this, this + 224);
    this[224] = 2;
  }
  v4 = *(_DWORD *)(a2 + 40);
  if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1];
  sub_1010DD80((_DWORD *)this + 250, __SPAIR64__((unsigned int)this, v5), 0.0);
}
