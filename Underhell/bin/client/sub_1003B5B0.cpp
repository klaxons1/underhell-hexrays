int __thiscall sub_1003B5B0(_WORD *this, __int16 a2)
{
  int result; // eax
  int v4; // edi
  void (__thiscall *v5)(_WORD *); // eax

  this[66] = a2;
  result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, a2);
  v4 = result;
  if ( result != *((_DWORD *)this + 23) )
  {
    if ( this[150] != 0xFFFF )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413160 + 16))(
        dword_10413160,
        (unsigned __int16)this[150]);
      this[150] = -1;
    }
    v5 = *(void (__thiscall **)(_WORD *))(*(_DWORD *)this + 368);
    *((_DWORD *)this + 23) = v4;
    v5(this);
    return sub_10039310((int)this);
  }
  return result;
}
