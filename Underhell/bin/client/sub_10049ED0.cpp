void __thiscall sub_10049ED0(_DWORD *this)
{
  _DWORD *v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // [esp+4h] [ebp-4h] BYREF

  if ( !this[313] )
  {
    v2 = (_DWORD *)sub_100F32D0(&v5, "C_EntityDissolve");
    v3 = *v2;
    if ( *v2 != this[313] )
    {
      if ( v3 )
        sub_100F2950(*v2);
      if ( this[313] )
        sub_100F2FF0();
      this[313] = v3;
    }
    if ( v5 )
      sub_100F2FF0();
    v4 = (*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
    sub_100F3060(v4);
  }
}
