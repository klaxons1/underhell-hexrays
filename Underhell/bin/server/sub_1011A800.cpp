void __thiscall sub_1011A800(_BYTE *this, int a2)
{
  int *v3; // eax
  int v4; // eax

  if ( !this[1268] )
  {
    this[1162] = 1;
    if ( !this[1268] )
    {
      if ( dword_1069C05C != -1 )
      {
        v3 = &off_1061BE18[4 * (dword_1069C05C & 0xFFF) + 1];
        if ( off_1061BE18[4 * (dword_1069C05C & 0xFFF) + 2] == (unsigned int)dword_1069C05C >> 12 )
        {
          if ( *v3 )
          {
            if ( off_1061BE18[4 * (dword_1069C05C & 0xFFF) + 2] == (unsigned int)dword_1069C05C >> 12 )
              v4 = *v3;
            else
              v4 = 0;
            if ( *(_BYTE *)(v4 + 1268) )
              sub_101194F0(v4, 1);
          }
        }
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)off_10627F88 + 100))(off_10627F88);
      if ( this[1268] )
      {
        sub_101194F0((int)this, 1);
      }
      else
      {
        sub_10118C00((int)this);
        dword_1069C05C = *(_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 8))(this);
        dword_1069C060 = *(_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 8))(this);
      }
    }
  }
}
