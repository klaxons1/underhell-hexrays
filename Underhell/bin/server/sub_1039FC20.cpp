void __fastcall sub_1039FC20(int a1)
{
  _DWORD *v1; // esi
  int *v2; // ecx
  BOOL v3; // [esp+0h] [ebp-4h] BYREF

  v3 = a1;
  if ( *(_BYTE *)(a1 + 3838) == 1 )
  {
    v1 = (_DWORD *)(a1 + 848);
    if ( *(_DWORD *)(a1 + 848) != 2 )
    {
      if ( *(_BYTE *)(a1 + 84) )
      {
        *(_BYTE *)(a1 + 88) |= 1u;
        *v1 = 2;
      }
      else
      {
        v2 = *(int **)(a1 + 24);
        if ( v2 )
          sub_100194B0(v2, 848);
        *v1 = 2;
      }
    }
  }
  else
  {
    v3 = *(_BYTE *)(a1 + 3829) == 1;
    sub_10031670((_DWORD *)(a1 + 848), &v3);
  }
}
