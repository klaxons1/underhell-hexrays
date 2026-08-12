void __thiscall sub_103C2C50(int *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // eax

  *((float *)this + 938) = 0.0;
  v2 = this[954];
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (this[954] & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  *(_BYTE *)(v4 + 804) = 1;
  sub_1002B660((int)this, 1);
  if ( *((_BYTE *)this + 224) )
  {
    (*(void (__thiscall **)(int *, int *))(*this + 472))(this, this + 56);
    *((_BYTE *)this + 224) = 0;
  }
  sub_100EBE30((int)this, 0);
  sub_103C0140(this);
}
