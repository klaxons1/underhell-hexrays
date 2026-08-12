void __thiscall sub_10238E30(_BYTE **this, char a2)
{
  _BYTE *v3; // eax

  if ( a2 )
  {
    *this[9] = a2;
  }
  else
  {
    v3 = this[9];
    if ( v3[1] )
    {
      (*((void (__thiscall **)(_BYTE **, _DWORD, int, _DWORD))*this + 170))(this, 0, -1, 0);
      *this[9] = 0;
    }
    else
    {
      *v3 = 0;
    }
  }
}
