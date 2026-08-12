char __cdecl sub_100764F0(int a1, int a2, int *a3)
{
  int v4; // esi
  _DWORD *v5; // eax

  if ( *a3 < 0 )
  {
    v4 = (unsigned __int16)sub_1007AC10(0);
    sub_1007B870(0xFFFF, v4);
    v5 = (_DWORD *)(dword_103DC874 + 16 * v4);
    if ( v5 )
    {
      *v5 = a1;
      v5[1] = a2;
      v5[2] = a3;
    }
    *a3 = v4;
    return 1;
  }
  else
  {
    if ( !a2 )
      *(_DWORD *)(16 * *(unsigned __int16 *)a3 + dword_103DC874 + 4) = 0;
    return 0;
  }
}
