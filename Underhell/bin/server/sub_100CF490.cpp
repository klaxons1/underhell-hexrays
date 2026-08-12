void __thiscall sub_100CF490(char *this, int a2, int a3)
{
  _DWORD *v4; // eax
  char *v5; // esi
  int v6; // ebx

  if ( a2 > 0 )
  {
    v4 = (_DWORD *)sub_102D9B20();
    if ( sub_100BA1B0(v4, a3) != -2 && !*(_DWORD *)(dword_106984AC + 48) )
    {
      v5 = &this[4 * a3 + 1780];
      v6 = (*(_DWORD *)v5 - a2) & ((*(_DWORD *)v5 - a2 <= 0) - 1);
      if ( *(_DWORD *)v5 != v6 )
      {
        (*(void (__thiscall **)(char *, char *))(*(_DWORD *)this + 1140))(this, v5);
        *(_DWORD *)v5 = v6;
      }
    }
  }
}
