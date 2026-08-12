void __thiscall sub_1025E230(_DWORD *this)
{
  int v2; // eax
  bool v3; // sf

  if ( *((_BYTE *)this + 244)
    && (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA80 + 24))(dword_1047CA80) >= this[53] )
  {
    v2 = this[54] + (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA80 + 24))(dword_1047CA80);
    v3 = ++this[52] < 0;
    this[53] = v2;
    if ( v3 || this[52] >= this[58] )
      this[52] = 0;
    (*(void (__thiscall **)(_DWORD *))(*this + 16))(this);
  }
}
