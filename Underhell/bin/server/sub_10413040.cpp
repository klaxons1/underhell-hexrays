int __thiscall sub_10413040(_DWORD *this)
{
  float *v2; // eax
  float *v3; // esi

  v2 = (float *)sub_10184390(536);
  v3 = v2;
  if ( v2 )
  {
    sub_10266790(v2);
    *(_DWORD *)v3 = off_105C5EAC;
    this[373] = v3;
    return (*(int (__thiscall **)(float *, _DWORD *))(*(_DWORD *)v3 + 252))(v3, this);
  }
  else
  {
    this[373] = 0;
    return (*(int (__stdcall **)(_DWORD *))(MEMORY[0] + 252))(this);
  }
}
