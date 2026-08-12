void __thiscall sub_10057B10(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // eax

  if ( !a2 )
  {
    v3 = *(_DWORD *)dword_1041315C;
    v4 = (*(int (__thiscall **)(_DWORD *))(*(this - 2) + 20))(this - 2);
    (*(void (__thiscall **)(int, _DWORD, int))(v3 + 408))(dword_1041315C, this[296], v4);
  }
}
