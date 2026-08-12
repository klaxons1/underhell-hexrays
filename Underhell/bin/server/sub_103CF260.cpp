void __thiscall sub_103CF260(_DWORD *this)
{
  if ( (this[581] != 1
     || 0.0 != ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                 dword_106B31E4,
                 0.0,
                 1.0))
    && !sub_1032E9B0((int)this) )
  {
    sub_1023C380(this, (int)"Zombine.Idle", 0.0, 0);
    sub_1032C950(this, 360.0, 0.5);
  }
}
