int __cdecl sub_1010B2D0(int a1)
{
  _DWORD *v1; // esi
  int v3; // edi
  _DWORD *v4; // eax

  v1 = off_103E2CB0;
  *(_BYTE *)off_103E2CB0 &= 0xFCu;
  v1[1] = -1;
  sub_1022D0A0((void *)Locale);
  sub_100CEE70(v1 + 47);
  v1[5] = 0;
  if ( *(_DWORD *)a1 != 3 )
    return Msg("cl_pred_track <entindex> <fieldname>\n");
  v3 = sub_10227CC0(*(_DWORD *)(a1 + 1036));
  v4 = (_DWORD *)sub_1007A6A0(off_103DCD78, v3);
  if ( !v4 )
    return Msg("cl_pred_track:  Unknown ent index %d\n", v3);
  if ( *(int *)a1 > 2 )
    return sub_1010B210(off_103E2CB0, v4, *(void **)(a1 + 1040));
  return sub_1010B210(off_103E2CB0, v4, (void *)Locale);
}
