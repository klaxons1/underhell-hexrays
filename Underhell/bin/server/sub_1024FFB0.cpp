void __thiscall sub_1024FFB0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v6; // eax
  _DWORD *v7; // edi
  int v8; // eax
  int v9; // eax
  bool v10; // zf
  int v11; // eax
  int v12; // eax

  if ( this[250] )
  {
    v6 = this[200];
    if ( v6 )
    {
      if ( v6 == 1 )
        v7 = (_DWORD *)this[243];
      else
        v7 = 0;
    }
    else
    {
      v7 = (_DWORD *)this[242];
    }
    if ( *(char **)(a2 + 92) == "func_tracktrain" || sub_100D6240((_DWORD *)a2, "func_tracktrain") )
    {
      v8 = sub_1024FB70((int)this, (int)v7);
      this[248] = v8;
      if ( v8 == 2 )
      {
        v9 = this[200];
        if ( v9 != this[249] )
        {
          v10 = v9 == 0;
          v11 = *this;
          this[250] = 0;
          if ( v10 )
            (*(void (__thiscall **)(_DWORD *))(v11 + 732))(this);
          else
            (*(void (__thiscall **)(_DWORD *))(v11 + 728))(this);
        }
      }
    }
    else
    {
      if ( v7 )
      {
        v12 = sub_101ACC90(v7);
        if ( v12 )
        {
          if ( *(_DWORD *)(this[244] + 800) != v12 && sub_100D62E0(a4, this[249]) )
            this[249] = this[249] == 0;
        }
      }
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 744))(this, this[249]);
    }
  }
}
