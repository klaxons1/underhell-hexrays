int __thiscall sub_1024E260(_DWORD *this, int a2, char a3)
{
  int v4; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // eax

  if ( !this[72] )
  {
    if ( sub_100DDA40(100) )
      v4 = sub_1027D150(Locale);
    else
      v4 = 0;
    this[72] = v4;
  }
  (*(void (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)this[72] + 104))(this[72], a2, 0);
  if ( a3 )
  {
    v5 = dword_1047CA6C;
    v6 = *(_DWORD *)dword_1047CA6C;
    v7 = (*(int (__thiscall **)(_DWORD *, int))*this)(this, a2);
    (*(void (__thiscall **)(int, int))(v6 + 180))(v5, v7);
  }
  return (*(int (__thiscall **)(_DWORD *))(*this + 16))(this);
}
