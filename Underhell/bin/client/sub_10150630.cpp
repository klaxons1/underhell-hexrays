void sub_10150630()
{
  _DWORD *v0; // esi
  int v1; // ebx
  _DWORD *v2; // edi

  v0 = (_DWORD *)dword_1043CC6C;
  v1 = 0;
  if ( dword_1043CC6C )
  {
    do
    {
      v2 = (_DWORD *)v0[3];
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v0 + 52))(v0) )
      {
        (*(void (__thiscall **)(_DWORD *, int))*v0)(v0, 1);
      }
      else
      {
        v0[3] = v1;
        v1 = (int)v0;
      }
      v0 = v2;
    }
    while ( v2 );
  }
  dword_1043CC6C = v1;
}
