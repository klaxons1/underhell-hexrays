void __thiscall sub_10275290(_DWORD *this, int a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // eax
  _DWORD *i; // edx
  int v7; // ecx
  _DWORD *v8; // eax
  _DWORD *v9; // eax

  if ( a2 >= 0 && a2 < this[54] && a2 <= this[60] )
  {
    v3 = 12 * a2 + this[53];
    if ( *(_DWORD *)(v3 + 4) != a2 || *(_DWORD *)(v3 + 8) == a2 )
    {
      v4 = this[72];
      v5 = 0;
      if ( v4 > 0 )
      {
        for ( i = (_DWORD *)this[69]; *i != *(_DWORD *)(12 * a2 + this[53]); ++i )
        {
          if ( ++v5 >= v4 )
            return;
        }
        if ( v5 != -1 )
        {
          v7 = v4 - v5 - 1;
          if ( v7 > 0 )
            memcpy((void *)(this[69] + 4 * v5), (const void *)(this[69] + 4 * v5 + 4), 4 * v7);
          --this[72];
          v8 = (_DWORD *)sub_10229D00(32);
          if ( v8 )
            v9 = sub_1022B1A0(v8, (int)"TreeViewItemDeselected", "itemIndex", a2);
          else
            v9 = 0;
          (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 180))(this, v9);
          this[75] = a2;
        }
      }
    }
  }
}
