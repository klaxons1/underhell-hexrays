void __thiscall sub_103959C0(int *this, int a2)
{
  int v3; // edi
  int v4; // eax

  this[1408] = -1;
  v3 = (*(int (__thiscall **)(int *, int))(*this + 932))(this, this[593]);
  if ( sub_100BDCE0((int)this, v3) != -1 && v3 != this[593] )
    sub_10039F40(this, v3);
  v4 = (*(int (__thiscall **)(int *, int))(*this + 932))(this, this[593]);
  if ( v4 != this[593] )
    sub_10039F40(this, v4);
}
