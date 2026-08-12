_DWORD *__thiscall sub_100D8D40(_DWORD *this, char a2)
{
  int v3; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // ebx
  _DWORD *v7; // esi
  int v8; // eax
  _DWORD *v10; // [esp+4h] [ebp-4h]

  if ( (a2 & 2) != 0 )
  {
    v3 = *(this - 1);
    v4 = (int)(this - 1);
    v5 = 22 * v3;
    v6 = v3 - 1;
    v10 = this - 1;
    if ( v6 >= 0 )
    {
      v7 = &this[v5 + 16];
      do
      {
        v7 -= 22;
        *(v7 - 16) = &CUserCmd::`vftable';
        v7[3] = 0;
        if ( (int)v7[2] >= 0 )
        {
          if ( *v7 )
          {
            (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v7);
            *v7 = 0;
          }
          v7[1] = 0;
        }
        v8 = *v7;
        v7[4] = *v7;
        if ( (int)v7[2] >= 0 )
        {
          if ( v8 )
          {
            (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v8);
            *v7 = 0;
          }
          v7[1] = 0;
        }
        --v6;
      }
      while ( v6 >= 0 );
      v4 = (int)v10;
    }
    if ( (a2 & 1) != 0 )
      sub_10034930(v4);
    return (_DWORD *)v4;
  }
  else
  {
    *this = &CUserCmd::`vftable';
    sub_1011A810(this + 16);
    if ( (a2 & 1) != 0 )
      sub_10034930((int)this);
    return this;
  }
}
