void sub_10069A80()
{
  _DWORD *v0; // esi
  int v1; // eax

  v0 = (_DWORD *)dword_10692E2C;
  if ( dword_10692E2C )
  {
    do
    {
      v1 = v0[203];
      if ( v1 < 0 || v1 >= *(_DWORD *)(dword_106935D8 + 4) )
        ++dword_10691DE0;
      if ( !sub_1008D320(v0[204]) )
      {
        if ( sub_10123F40(
               *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_10693628 + 804) + 12) + 4 * v0[203]),
               *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_10693628 + 804) + 12) + 4 * v0[204]),
               0) == 2 )
          DevMsg("Worldcraft failed in PurgeDynamicLinks...\n");
        sub_1025FAC0(v0);
      }
      v0 = (_DWORD *)v0[200];
    }
    while ( v0 );
  }
}
