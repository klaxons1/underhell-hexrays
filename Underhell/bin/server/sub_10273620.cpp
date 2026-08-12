char __cdecl sub_10273620(_DWORD *a1)
{
  __int16 *v1; // eax
  __int16 *v2; // esi

  LOBYTE(v1) = sub_10273440();
  if ( (_BYTE)v1 )
  {
    v1 = sub_101E2A40(a1);
    v2 = v1;
    if ( v1 )
    {
      v1 = (__int16 *)sub_10123DF0(
                        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_10693628 + 804) + 12) + 4 * *v1),
                        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_10693628 + 804) + 12) + 4 * v1[1]),
                        0);
      if ( v1 == (__int16 *)2 )
      {
        LOBYTE(v1) = Msg("Worldcraft failed on node link creation...\n");
      }
      else if ( !v1 )
      {
        v1 = (__int16 *)sub_101811E0("info_node_link", -1);
        *((_DWORD *)v1 + 203) = *v2;
        *((_DWORD *)v1 + 204) = v2[1];
        *((_DWORD *)v1 + 205) = 0;
        *((_BYTE *)v2 + 14) |= 2u;
      }
    }
  }
  return (char)v1;
}
