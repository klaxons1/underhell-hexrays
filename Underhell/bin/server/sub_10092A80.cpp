void __stdcall sub_10092A80(float a1, int a2)
{
  char *v2; // ecx
  float *v3; // esi

  v2 = dword_10693788;
  if ( !dword_10693788 )
  {
    sub_101811E0("ai_ally_speech_manager", -1);
    v2 = dword_10693788;
    if ( dword_10693788 )
    {
      sub_10260750(dword_10693788);
      v2 = dword_10693788;
    }
  }
  if ( -1.0 == a1 )
  {
    v3 = (float *)(v2 + 800);
    if ( flt_106091F4 <= 0.0 )
      *v3 = *(float *)(dword_106B31C8 + 12) + flt_106091F0;
    else
      *v3 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              LODWORD(flt_106091F0),
              LODWORD(flt_106091F4))
          + *(float *)(dword_106B31C8 + 12);
  }
  else
  {
    *((float *)v2 + 200) = a1 + *(float *)(dword_106B31C8 + 12);
  }
}
