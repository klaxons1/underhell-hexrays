void __cdecl sub_10273590(_DWORD *a1)
{
  __int16 *v1; // eax
  __int16 *v2; // esi
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  _DWORD *v6; // eax

  if ( sub_10273440() )
  {
    v1 = sub_101E2A40(a1);
    v2 = v1;
    if ( v1 )
    {
      if ( (v1[7] & 2) != 0 )
      {
        v3 = sub_10123F40(
               *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_10693628 + 804) + 12) + 4 * *v1),
               *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_10693628 + 804) + 12) + 4 * v1[1]),
               0);
        if ( v3 == 2 )
        {
          Msg("Worldcraft failed on node link creation...\n");
        }
        else if ( !v3 )
        {
          v4 = v2[1];
          v5 = *v2;
          *((_BYTE *)v2 + 14) &= ~2u;
          v6 = sub_10069A30(v5, v4);
          sub_1025FAC0((int)v6);
        }
      }
    }
  }
}
