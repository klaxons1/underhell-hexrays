void __thiscall sub_10034840(_DWORD *this, int a2, int a3, int a4, char a5, int a6)
{
  int v7; // edi
  int v8; // eax
  int v9; // eax

  if ( !a5
    || ((*(void (__thiscall **)(int, int, int, _DWORD *, int))(*(_DWORD *)dword_104131A0 + 8))(
          dword_104131A0,
          a2,
          1174421507,
          this,
          a6),
        1.0 != *(float *)(a6 + 44)) )
  {
    v7 = *(_DWORD *)dword_10413164;
    v8 = (*(int (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 40))(this, a3, 0, 0);
    v9 = (*(int (__thiscall **)(_DWORD *, int))(*this + 36))(this, v8);
    (*(void (__thiscall **)(int, int, _DWORD, _DWORD, int))(v7 + 4))(dword_10413164, a4, this[20], this[23], v9);
  }
}
