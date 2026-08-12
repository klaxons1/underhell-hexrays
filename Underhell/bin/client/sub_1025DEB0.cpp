int __thiscall sub_1025DEB0(_DWORD *this, int a2, _DWORD *a3, int a4)
{
  _DWORD *v4; // eax
  int v5; // esi

  if ( a4 > 0 )
  {
    v4 = a3;
    v5 = a4;
    do
    {
      *(_DWORD *)((char *)v4 + a2 - (_DWORD)a3) += this[1];
      *v4++ += this[2];
      --v5;
    }
    while ( v5 );
  }
  return (*(int (__thiscall **)(int, int, _DWORD *, int))(*(_DWORD *)dword_1047CA6C + 64))(dword_1047CA6C, a2, a3, a4);
}
