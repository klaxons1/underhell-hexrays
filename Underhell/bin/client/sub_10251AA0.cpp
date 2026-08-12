void __thiscall sub_10251AA0(_BYTE *this, int C)
{
  bool v3; // zf

  this[284] = this[285];
  this[285] = 0;
  if ( !iswcntrl(C) && (_WORD)C != 9 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 924))(this) )
    {
      if ( (_WORD)C )
      {
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 900))(this);
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 908))(this);
        (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 832))(this, C);
      }
      v3 = this[340] == 0;
      *((_DWORD *)this + 79) = *((_DWORD *)this + 70);
      if ( !v3 )
        (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 996))(this);
    }
    else
    {
      sub_10236D90(this, C);
    }
  }
}
