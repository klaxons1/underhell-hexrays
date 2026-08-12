void __thiscall sub_10112D90(unsigned __int16 *this, char a2, float a3)
{
  _BYTE *v4; // esi
  char v5; // bl

  v4 = this + 21;
  v5 = (int)a3;
  if ( v5 != *((_BYTE *)this + 42) )
  {
    (*(void (__thiscall **)(unsigned __int16 *, unsigned __int16 *))(*(_DWORD *)this + 72))(this, this + 21);
    *v4 = v5;
  }
  if ( a2 )
    sub_101129A0(this, this[18] | 0x80);
  else
    sub_101129A0(this, this[18] & 0xFF7F);
}
