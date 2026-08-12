void __thiscall sub_1002A400(_DWORD *this)
{
  int v1; // esi
  int v2; // edx
  int v3; // eax
  int v4; // esi
  int v5; // esi
  int v6; // edi
  _DWORD *v7; // eax
  int v8; // ebx
  int v9; // eax

  v1 = this[326];
  if ( v1 != -1 )
  {
    v2 = dword_104037AC;
    v3 = dword_104037AC - 1;
    if ( dword_104037AC - 1 == v1 )
    {
      if ( dword_104037AC > 0 )
      {
        v4 = dword_104037A0;
        *(_DWORD *)(dword_104037A0 + 8 * v3) = *(_DWORD *)(dword_104037A0 + 8 * dword_104037AC - 8);
        *(_DWORD *)(dword_104037A0 + 8 * v3 + 4) = *(_DWORD *)(v4 + 8 * v2 - 4);
        --dword_104037AC;
        this[326] = -1;
        return;
      }
    }
    else
    {
      v5 = dword_104037A0;
      v6 = *(_DWORD *)(dword_104037A0 + 8 * v3);
      v7 = (_DWORD *)(dword_104037A0 + 8 * v3);
      v8 = v7[1];
      if ( dword_104037AC > 0 )
      {
        *v7 = *(_DWORD *)(dword_104037A0 + 8 * dword_104037AC - 8);
        v7[1] = *(_DWORD *)(v5 + 8 * v2 - 4);
        --dword_104037AC;
      }
      *(_DWORD *)(v6 + 1304) = this[326];
      v9 = this[326];
      *(_DWORD *)(dword_104037A0 + 8 * v9) = v6;
      *(_DWORD *)(dword_104037A0 + 8 * v9 + 4) = v8;
    }
    this[326] = -1;
  }
}
