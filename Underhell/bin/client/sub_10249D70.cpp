void __thiscall sub_10249D70(int (__thiscall ***this)(_DWORD), int a2, int a3)
{
  _DWORD *v4; // edi
  int v5; // eax

  v4 = this + 67;
  if ( sub_10237C80(this + 67) && a2 == (**this)(this) && !sub_10241360((unsigned int *)this) )
  {
    v5 = sub_10237C80(v4);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 48))(v5, 0);
  }
  else
  {
    sub_10237260(this, a2, a3);
  }
}
