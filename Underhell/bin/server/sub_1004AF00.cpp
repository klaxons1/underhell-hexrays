void __thiscall sub_1004AF00(_DWORD *this)
{
  int v2; // eax
  int v3; // [esp-4h] [ebp-8h]

  if ( this[699] )
  {
    v3 = this[701];
    v2 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
    sub_100B2740(v2, v3);
    this[701] = -1;
  }
}
