int __thiscall sub_10092140(_DWORD *this)
{
  int v3; // [esp+4h] [ebp-8h] BYREF
  int v4; // [esp+8h] [ebp-4h] BYREF

  (*(void (__thiscall **)(_DWORD *))(*this + 144))(this);
  sub_102361D0(&v3, &v4);
  sub_10236200(0, 0, v3, v4);
  if ( this[110] )
    sub_10236200(0, 0, v3, v4);
  return sub_1024DDC0(this);
}
