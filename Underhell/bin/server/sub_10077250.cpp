void __stdcall sub_10077250(int *a1)
{
  _DWORD *v1; // esi
  unsigned __int8 v2; // al
  unsigned __int8 i; // [esp+Ch] [ebp+8h]

  v1 = (_DWORD *)*a1;
  v2 = sub_10076510(*a1);
  for ( i = v2; v2 != 0xFF; i = v2 )
  {
    sub_10184660(*(_DWORD *)(v1[1] + 12 * v2 + 8));
    v2 = sub_100765B0(v1, i);
  }
  sub_10076460((int)v1);
}
