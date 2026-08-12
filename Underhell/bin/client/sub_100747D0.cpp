char __stdcall sub_100747D0(int a1, _BYTE *a2)
{
  int v2; // eax

  v2 = (*(int (__thiscall **)(int *, int))(*off_103ED0D8 + 72))(off_103ED0D8, a1);
  if ( !v2 )
    return 0;
  *a2 = *(_BYTE *)(v2 + 8) & 1;
  return 1;
}
