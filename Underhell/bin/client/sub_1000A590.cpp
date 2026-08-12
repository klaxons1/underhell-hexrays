void __thiscall sub_1000A590(_DWORD *this, int a2, int a3)
{
  _DWORD *v4; // eax
  int v5; // eax

  if ( a2 > 0 )
  {
    v4 = (_DWORD *)sub_101AB1E0();
    if ( sub_100082F0(v4, a3) != -2 && !*(_DWORD *)(dword_104017E4 + 48) )
    {
      v5 = this[a3 + 756] - a2 <= 0 ? 0 : this[a3 + 756] - a2;
      if ( this[a3 + 756] != v5 )
        this[a3 + 756] = v5;
    }
  }
}
