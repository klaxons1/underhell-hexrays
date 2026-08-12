int __thiscall sub_1039BCB0(_BYTE *this)
{
  int v2; // edi
  int v3; // eax

  v2 = -1;
  do
  {
    v3 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 2);
    if ( this[v3 + 3848] )
      v2 = v3;
  }
  while ( v2 == -1 );
  return v2;
}
