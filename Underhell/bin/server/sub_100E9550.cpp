int __thiscall sub_100E9550(_DWORD *this, int a2, int a3, char a4, int a5)
{
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // edx

  if ( !this[6] || (this[63] & 1) != 0 )
    return 0;
  (*(void (__thiscall **)(_DWORD *))(*this + 592))(this);
  sub_10112C00(a2);
  sub_101129A0(a3);
  if ( !a2 )
    return 0;
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v7 = (*(int (__thiscall **)(_DWORD *))(*this + 24))(this);
  v8 = sub_101DB090(this, v7, this + 145, this + 176, a5);
  v9 = v8;
  if ( v8 )
  {
    sub_100E9500(this, v8);
    sub_100E0970((int)this, v10, 6, 0);
    if ( !a4 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 96))(v9);
  }
  return v9;
}
