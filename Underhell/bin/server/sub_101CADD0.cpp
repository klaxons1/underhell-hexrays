int __fastcall sub_101CADD0(_DWORD *a1)
{
  int v1; // esi
  _DWORD *v2; // ebx
  _DWORD *v3; // edi
  _DWORD *v5; // [esp+8h] [ebp-4h]

  v1 = 0;
  v2 = a1 + 283;
  v5 = a1;
  if ( (int)a1[283] > 0 )
  {
    v3 = a1 + 289;
    do
    {
      if ( *v3 )
      {
        (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)off_1063AC88 + 12))(off_1063AC88, *v3);
        a1 = v5;
      }
      ++v1;
      v3 += 6;
    }
    while ( v1 < *v2 );
  }
  sub_100E9500(a1, 0);
  sub_10217A30(v2);
  return sub_100E20F0(v5);
}
