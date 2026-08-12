void __thiscall sub_1002A690(int *this, int a2, char a3)
{
  bool v4; // zf
  unsigned int v5; // ecx
  int *v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // edi
  _DWORD *v12; // eax

  if ( *((_BYTE *)this + 2940) )
  {
    DevMsg("Unexpected double-death-cleanup\n");
  }
  else
  {
    v4 = this[581] == 4;
    *((_BYTE *)this + 2940) = 1;
    if ( v4 )
    {
      v5 = this[672];
      if ( v5 != -1 )
      {
        v6 = &off_1061BE18[4 * (this[672] & 0xFFF) + 1];
        v7 = v5 >> 12;
        if ( off_1061BE18[4 * (this[672] & 0xFFF) + 2] == v7 )
        {
          if ( *v6 )
          {
            if ( off_1061BE18[4 * (this[672] & 0xFFF) + 2] == v7 )
              v8 = *v6;
            else
              v8 = 0;
            sub_102320D0(v8);
          }
        }
      }
    }
    v9 = this[722];
    if ( v9 != -1 && off_1061BE18[4 * (this[722] & 0xFFF) + 2] == v9 >> 12 && off_1061BE18[4 * (this[722] & 0xFFF) + 1] )
    {
      sub_10070510(0.0);
      sub_100448D0(0);
    }
    if ( a3 )
      sub_1010DD80(a2, (int)this, 0.0);
    sub_1004AF00(this);
    if ( this[699] )
    {
      if ( this[581] == 1 && a2 )
      {
        v10 = (*(int (__thiscall **)(int *))(*this + 1868))(this);
        if ( !sub_10077420(v10) )
        {
          v11 = *this;
          v12 = sub_10019640(this);
          (*(void (__thiscall **)(int *, int, _DWORD *, _DWORD))(v11 + 1876))(this, a2, v12, 0);
        }
      }
      sub_100B1AB0(this, 1);
      this[699] = 0;
    }
    sub_10227360(this, 0, 0, 0);
  }
}
