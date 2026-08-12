void __thiscall sub_1005D890(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // ecx
  int v6; // edx

  v3 = this[2];
  if ( v3 >= 0 )
  {
    v4 = this[1];
    v5 = v4 + a2;
    if ( v3 )
    {
      v4 = v3 * ((v5 - 1) / v3 + 1);
    }
    else
    {
      if ( !v4 )
        v4 = 2;
      for ( ; v4 < v5; v4 *= 2 )
        ;
    }
    this[1] = v4;
    if ( (unsigned __int16)v4 < v5 )
    {
      if ( (_WORD)v4 || v5 > 0xFFFF )
      {
        if ( (unsigned __int16)v5 != v5 )
          return;
        do
        {
          v4 = (v5 + v4) / 2;
          this[1] = v4;
        }
        while ( (unsigned __int16)v4 < v5 );
      }
      else
      {
        this[1] = v4 - 1;
      }
    }
    v6 = *g_pMemAlloc;
    if ( *this )
      *this = (*(int (__stdcall **)(_DWORD, int))(v6 + 12))(*this, 16 * this[1]);
    else
      *this = (*(int (__stdcall **)(int))(v6 + 4))(16 * this[1]);
  }
}
