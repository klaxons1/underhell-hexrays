int __fastcall sub_100FB060(int a1, int a2)
{
  int *v3; // ecx

  sub_100E0970(a1, a2, 0, 0);
  sub_10112C00(0);
  if ( *(_BYTE *)(a1 + 113) != 2 )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(a1 + 24);
      if ( v3 )
        sub_100194B0(v3, 113);
    }
    *(_BYTE *)(a1 + 113) = 2;
  }
  sub_100EAB80((_DWORD *)a1, 80);
  return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 100))(a1);
}
