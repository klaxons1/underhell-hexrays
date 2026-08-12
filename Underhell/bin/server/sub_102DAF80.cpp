int __thiscall sub_102DAF80(void *this, void *a2, int a3)
{
  int v4; // edi
  int v5; // esi
  int result; // eax

  sub_101E3BA0(this, a2, a3);
  v4 = sub_1002A680(&dword_10690DF8);
  v5 = 0;
  result = sub_1016BFB0(&dword_10690DF8);
  if ( result > 0 )
  {
    do
    {
      if ( *(_DWORD *)(v4 + 4 * v5) )
      {
        if ( (*(int (__thiscall **)(_DWORD, void *))(**(_DWORD **)(v4 + 4 * v5) + 1080))(*(_DWORD *)(v4 + 4 * v5), this) == 3 )
          (*(void (__thiscall **)(_DWORD, void *, int))(**(_DWORD **)(v4 + 4 * v5) + 1016))(
            *(_DWORD *)(v4 + 4 * v5),
            a2,
            a3);
      }
      ++v5;
      result = sub_1016BFB0(&dword_10690DF8);
    }
    while ( v5 < result );
  }
  return result;
}
