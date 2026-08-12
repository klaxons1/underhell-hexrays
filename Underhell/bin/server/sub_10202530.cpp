int __thiscall sub_10202530(int *this, int a2, void *Src, int a4)
{
  int v5; // eax
  const char *v6; // esi
  unsigned int v8; // edx
  char v9[64]; // [esp+8h] [ebp-144h] BYREF
  _BYTE v10[64]; // [esp+88h] [ebp-C4h] BYREF
  _BYTE v11[64]; // [esp+C8h] [ebp-84h] BYREF
  int v12; // [esp+108h] [ebp-44h] BYREF

  v5 = sub_1024B6F0(a2, Src, a4);
  if ( v5 == -1 )
  {
    v6 = (const char *)this[65];
    if ( !v6 )
      v6 = String;
    return Warning("point_template %s failed to add template.\n", v6);
  }
  else
  {
    v8 = (unsigned int)this[63] >> 11;
    v12 = v5;
    if ( (v8 & 1) != 0 )
      sub_100DAE60((int)this);
    if ( (this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    sub_10425A30(this + 145, this + 176);
    sub_10426040(v11);
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
      sub_100DAE60(a2);
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
      sub_100DAE60(a2);
    sub_10425A30(a2 + 580, a2 + 704);
    sub_10425BE0(v11, v9, v10);
    sub_10425750(v10);
    return sub_10202220(this + 221, this[224], &v12);
  }
}
