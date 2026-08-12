int __thiscall sub_1024BCC0(_DWORD *this)
{
  int (__thiscall ***v2)(_DWORD); // esi
  int v3; // eax
  int v5; // eax
  int v6; // esi

  v2 = (int (__thiscall ***)(_DWORD))(this + 54);
  v3 = (*(int (__thiscall **)(_DWORD *))(this[54] + 28))(this + 54);
  if ( !v3 || (_DWORD *)v3 == this )
  {
    v5 = (**v2)(v2);
    v6 = v5;
    if ( v5 )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 48))(v5, 0);
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 368))(v6);
    }
    return sub_10252370(this);
  }
  else
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 48))(v3, 0);
    return sub_10252370(this);
  }
}
