void __thiscall sub_101327E0(_DWORD *this)
{
  int **i; // esi
  int *v3; // esi
  _DWORD *v4; // ecx
  int *v5; // ebx
  _DWORD *v6; // [esp+8h] [ebp-4h]

  for ( i = (int **)this[8244]; i; i = (int **)*i )
    (*(void (__cdecl **)(int, int *, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, int *))(*(_DWORD *)dword_1047CA64
                                                                                         + 536))(
      dword_1047CA64,
      i[5],
      i[1],
      i[2],
      *((unsigned __int8 *)i + 12),
      *((unsigned __int8 *)i + 13),
      *((unsigned __int8 *)i + 14),
      *((unsigned __int8 *)i + 15),
      i[4]);
  v3 = (int *)this[8244];
  v4 = 0;
  v6 = 0;
  if ( v3 )
  {
    while ( 1 )
    {
      if ( *((float *)off_103DC81C + 3) < (double)*((float *)v3 + 6) )
      {
        v6 = v3;
        v3 = (int *)*v3;
      }
      else
      {
        if ( v4 )
          *v4 = *v3;
        else
          this[8244] = *v3;
        v5 = (int *)*v3;
        sub_10034930(v3[4]);
        v3[4] = 0;
        *v3 = this[8245];
        this[8245] = v3;
        v3 = v5;
      }
      if ( !v3 )
        break;
      v4 = v6;
    }
  }
}
