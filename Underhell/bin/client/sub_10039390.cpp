int __thiscall sub_10039390(_WORD *this, int a2)
{
  void (__thiscall *v3)(_WORD *); // eax
  int result; // eax

  if ( a2 != *((_DWORD *)this + 23) )
  {
    if ( this[150] != 0xFFFF )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413160 + 16))(
        dword_10413160,
        (unsigned __int16)this[150]);
      this[150] = -1;
    }
    v3 = *(void (__thiscall **)(_WORD *))(*(_DWORD *)this + 368);
    *((_DWORD *)this + 23) = a2;
    v3(this);
    return sub_10039310((int)this);
  }
  return result;
}
