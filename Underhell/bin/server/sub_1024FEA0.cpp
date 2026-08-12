void __thiscall sub_1024FEA0(_DWORD *this, int *a2)
{
  int v3; // eax
  _DWORD *v4; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // eax

  if ( this[250] )
  {
    v3 = this[200];
    if ( v3 )
    {
      if ( v3 == 1 )
        v4 = (_DWORD *)this[243];
      else
        v4 = 0;
    }
    else
    {
      v4 = (_DWORD *)this[242];
    }
    v5 = *a2;
    if ( *a2 && (*(char **)(v5 + 92) == "func_tracktrain" || sub_100D6240((_DWORD *)v5, "func_tracktrain")) )
    {
      v6 = sub_1024FB70((int)this, (int)v4);
      this[248] = v6;
      if ( v6 == 2 )
      {
        v7 = this[200];
        if ( v7 != this[249] )
        {
          v8 = *this;
          this[250] = 0;
          if ( v7 )
            (*(void (__thiscall **)(_DWORD *))(v8 + 728))(this);
          else
            (*(void (__thiscall **)(_DWORD *))(v8 + 732))(this);
        }
      }
    }
    else
    {
      if ( v4 )
      {
        v9 = sub_101ACC90(v4);
        if ( v9 )
        {
          if ( *(_DWORD *)(this[244] + 800) != v9 && sub_100D62E0(3, this[249]) )
            this[249] = this[249] == 0;
        }
      }
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 744))(this, this[249]);
    }
  }
}
