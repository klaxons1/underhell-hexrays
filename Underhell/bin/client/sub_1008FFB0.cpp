void __thiscall sub_1008FFB0(int *this, char a2, float a3)
{
  _BYTE *v4; // esi
  char v5; // bl

  v4 = (char *)this + 42;
  v5 = (int)a3;
  if ( v5 != *((_BYTE *)this + 42) )
  {
    (*(void (__thiscall **)(int *, _BYTE *))(*this + 72))(this, (_BYTE *)this + 42);
    *v4 = v5;
  }
  if ( a2 )
    sub_1008FB60(this, *((_WORD *)this + 18) | 0x80);
  else
    sub_1008FB60(this, this[9] & 0xFF7F);
}
