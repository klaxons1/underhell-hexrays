int __thiscall sub_10209080(_DWORD *this, float a2, char a3, float a4, char a5)
{
  int result; // eax
  _DWORD *v7; // eax

  result = this[64] >> 27;
  if ( (this[64] & 0x8000000) == 0 )
  {
    result = (*(int (__thiscall **)(_DWORD *, int))(this[280] + 92))(this + 280, 8);
    if ( (_BYTE)result )
    {
      sub_100C3150(this, a2, a3, a4, a5);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 480))(dword_106B3CDC) )
      {
        v7 = (_DWORD *)sub_100BD8F0(this);
        sub_100EAB80(v7, 4);
      }
      if ( (this[63] & 0x800) != 0 )
        sub_100DAE60((int)this);
      return sub_1023D4B0(8, (int)(this + 145), 128, 1.0, (int)this, 2, 0);
    }
  }
  return result;
}
