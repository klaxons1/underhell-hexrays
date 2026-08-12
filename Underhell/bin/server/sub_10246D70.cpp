int __thiscall sub_10246D70(int *this)
{
  _DWORD *v2; // esi

  v2 = this + 55;
  if ( this[55] > 0 )
  {
    (*(void (__thiscall **)(int *, int *))(*this + 464))(this, this + 55);
    *v2 = 0;
    DevWarning(2, "SUB_Remove called on entity with health > 0\n");
  }
  return sub_1025FAC0(this);
}
