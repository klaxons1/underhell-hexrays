int sub_10108110()
{
  int v0; // ebx
  int i; // esi
  _BYTE *v2; // eax
  _DWORD *v3; // edi
  int v4; // eax

  v0 = (*(int (__thiscall **)(char *))(*((_DWORD *)off_103DCD78 + 16389) + 24))((char *)off_103DCD78 + 65556);
  for ( i = 0; i <= v0; ++i )
  {
    v2 = (_BYTE *)sub_1007A6A0(off_103DCD78, i);
    v3 = v2;
    if ( v2 && !sub_10034D10(v2) )
      sub_1003CC70(v3, (int)"ReinitPredictables");
  }
  v4 = ((int (__thiscall *)(int (__stdcall ***)(int)))(*off_103D89CC)[1])(off_103D89CC);
  return Msg("Reinitialized %i predictable entities\n", v4);
}
