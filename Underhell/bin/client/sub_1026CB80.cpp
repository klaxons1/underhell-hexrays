void __thiscall sub_1026CB80(_DWORD *this, int a2, int a3)
{
  int v4; // ebx
  int v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // ecx
  int v9; // edi
  _DWORD *i; // eax
  int v11; // eax
  int v12; // ecx
  _DWORD *v13; // ecx
  int v14; // eax
  bool v15; // zf
  _DWORD *v16; // eax

  v4 = this[75];
  v5 = 0;
  if ( v4 > 0 )
  {
    v6 = (_DWORD *)this[72];
    v7 = this + 72;
    while ( *v6 != a2 )
    {
      ++v5;
      ++v6;
      if ( v5 >= v4 )
        return;
    }
    if ( this[75] - v5 - 1 > 0 )
      memcpy((void *)(*v7 + 4 * v5), (const void *)(*v7 + 4 * v5 + 4), 4 * (this[75] - v5 - 1));
    --this[75];
    if ( v5 < v4 )
    {
      v8 = this[75];
      v9 = 0;
      if ( v8 > 0 )
      {
        for ( i = (_DWORD *)*v7; *i != a3; ++i )
        {
          if ( ++v9 >= v8 )
            return;
        }
        v11 = this[75];
        v12 = this[73];
        if ( v11 + 1 > v12 )
          sub_1010AFF0(this + 72, v11 - v12 + 1);
        ++this[75];
        v13 = (_DWORD *)*v7;
        v14 = this[75] - v9 - 1;
        v15 = this[75] - v9 == 1;
        this[76] = this[72];
        if ( v14 >= 0 && !v15 )
          memcpy(&v13[v9 + 1], &v13[v9], 4 * v14);
        v16 = (_DWORD *)(*v7 + 4 * v9);
        if ( v16 )
          *v16 = a2;
      }
    }
  }
}
