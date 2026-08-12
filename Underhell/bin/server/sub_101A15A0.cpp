int __thiscall sub_101A15A0(int *this)
{
  int *v2; // esi
  int v3; // edi

  v2 = this + 55;
  if ( this[55] < this[54] / 2 )
  {
    if ( ++this[1253] % 60 )
    {
      v3 = *v2 + 1;
      (*(void (__thiscall **)(int *, int *))(*this + 464))(this, this + 55);
      *v2 = v3;
    }
  }
  return sub_10036B00(this);
}
