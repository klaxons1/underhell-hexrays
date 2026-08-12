void __thiscall sub_1003C5D0(_DWORD *this)
{
  int v2; // eax
  int v3; // esi
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // eax

  if ( this[284] == -1 )
  {
    v2 = dword_10404D6C;
    v3 = dword_10404D6C;
    if ( dword_10404D6C + 1 > dword_10404D64 )
    {
      sub_1010AFF0(dword_10404D6C - dword_10404D64 + 1);
      v2 = dword_10404D6C;
    }
    v4 = dword_10404D60;
    dword_10404D6C = v2 + 1;
    v5 = v2 - v3;
    dword_10404D70 = dword_10404D60;
    if ( v5 > 0 )
    {
      memcpy((void *)(dword_10404D60 + 4 * v3 + 4), (const void *)(dword_10404D60 + 4 * v3), 4 * v5);
      v4 = dword_10404D60;
    }
    v6 = (_DWORD *)(v4 + 4 * v3);
    if ( v6 )
      *v6 = this;
    this[284] = v3;
  }
}
