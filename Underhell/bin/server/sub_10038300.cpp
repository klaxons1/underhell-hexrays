int __thiscall sub_10038300(char *this, int a2, int a3, int a4)
{
  int v5; // eax
  char v6; // cl
  char *v7; // eax

  (*(void (__thiscall **)(char *, int))(*(_DWORD *)this + 1544))(this, a2);
  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 2160))(this);
  v5 = sub_1007DB30(64);
  if ( v5 != -1 )
  {
    v6 = v5;
    if ( v5 != 999999999 )
    {
      v7 = &this[4 * ((v5 - 1000000000) >> 5) + 2192];
      *(_DWORD *)v7 |= 1 << (v6 & 0x1F);
    }
  }
  return (*(int (__thiscall **)(char *))(*(_DWORD *)this + 1556))(this);
}
