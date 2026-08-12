int sub_10075AC0()
{
  int v0; // eax
  int v1; // ecx
  int v2; // esi
  int v3; // eax
  int result; // eax

  LOWORD(v0) = word_103DC880;
  if ( (unsigned __int16)word_103DC880 != 0xFFFF )
  {
    v1 = dword_103DC874;
    do
    {
      v2 = 2 * (unsigned __int16)v0;
      v3 = v1 + 16 * (unsigned __int16)v0;
      **(_DWORD **)(v3 + 8) = -1;
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)v3 + 20))(*(_DWORD *)(v3 + 4));
      v1 = dword_103DC874;
      v0 = *(unsigned __int16 *)(dword_103DC874 + 8 * v2 + 14);
    }
    while ( v0 != 0xFFFF );
  }
  sub_1007AFD0(&dword_103DC874);
  result = dword_103DC874;
  if ( dword_103DC87C >= 0 )
  {
    if ( dword_103DC874 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_103DC874);
      result = 0;
      dword_103DC874 = 0;
    }
    dword_103DC878 = 0;
  }
  word_103DC884 = -1;
  word_103DC888 = -1;
  dword_103DC88C = result;
  return result;
}
