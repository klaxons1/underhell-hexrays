int __thiscall sub_100EA940(int *this, int a2)
{
  int v3; // eax
  int *v4; // esi
  int v5; // edi
  int v7; // [esp+Ch] [ebp-4h]

  v3 = this[64];
  v4 = this + 64;
  v5 = a2 | v3;
  v7 = v3;
  if ( v3 != (a2 | v3) )
  {
    (*(void (__thiscall **)(int *, int *))(*this + 664))(this, this + 64);
    v3 = v7;
    *v4 = v5;
  }
  return sub_1012D9E0(this, v3, *v4);
}
