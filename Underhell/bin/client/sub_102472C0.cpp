void __thiscall sub_102472C0(_DWORD *this, const char *a2)
{
  const char *v2; // edi
  int v4; // ebx
  _DWORD *v5; // eax

  v2 = a2;
  if ( a2 )
  {
    v5 = (_DWORD *)sub_10247260((int)this, (int)a2);
    if ( v5 )
      sub_10245B30(v5, 1);
    else
      Msg("No such Panel Animation class %s\n", a2);
  }
  else if ( (int)this[17] > 0 )
  {
    v4 = 0;
    do
    {
      sub_10245B30(*(_DWORD **)(this[13] + v4 + 20), 0);
      ++v2;
      v4 += 24;
    }
    while ( (int)v2 < this[17] );
  }
}
