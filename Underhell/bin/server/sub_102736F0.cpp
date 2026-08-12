char __cdecl sub_102736F0(_DWORD *a1)
{
  _DWORD *v1; // eax
  int v2; // eax
  _DWORD *v3; // esi
  __int16 *v4; // eax
  int v5; // ebx
  int v6; // edi
  _DWORD *v8; // [esp+0h] [ebp-4h]

  LOBYTE(v1) = sub_10273440();
  if ( (_BYTE)v1 && a1 )
  {
    v2 = 2;
    if ( byte_1069362E )
      v2 = 3;
    v1 = (_DWORD *)sub_101E29E0(a1, v2);
    v3 = v1;
    if ( v1 )
    {
      v1 = (_DWORD *)sub_10123F00(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_10693628 + 804) + 12) + 4 * *v1), 0);
      if ( v1 == (_DWORD *)2 )
      {
        LOBYTE(v1) = Msg("Worldcraft failed on deletion...\n");
      }
      else if ( !v1 )
      {
        v3[16] |= 0x20000000u;
        v3[15] = 1;
        LOBYTE(v1) = sub_10086130(*(_DWORD **)(dword_10693628 + 804));
        dword_10693630 = (int)v3;
        v8 = 0;
        if ( (int)v3[21] > 0 )
        {
          do
          {
            v4 = *(__int16 **)(v3[18] + 4 * (_DWORD)v8);
            v5 = v4[1];
            v6 = *v4;
            if ( sub_10069A30(v6, v5)
              && sub_10123F40(
                   *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_10693628 + 804) + 12) + 4 * v6),
                   *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_10693628 + 804) + 12) + 4 * v5),
                   0) == 2 )
            {
              Msg("Worldcraft failed on node link deletion...\n");
            }
            v1 = (_DWORD *)((char *)v8 + 1);
            v8 = v1;
          }
          while ( (int)v1 < v3[21] );
        }
      }
    }
  }
  return (char)v1;
}
