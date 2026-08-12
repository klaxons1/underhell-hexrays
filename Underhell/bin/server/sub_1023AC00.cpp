void __stdcall sub_1023AC00(char *Str)
{
  int v1; // esi

  v1 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_106B3204 + 28))(dword_106B3204, Str);
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3204 + 32))(dword_106B3204, v1) )
  {
    sub_1023AB60(v1);
  }
  else if ( sub_10429530(Str, ".wav") || strstr(Str, ".mp3") )
  {
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_106B31E8 + 8))(dword_106B31E8, Str);
  }
}
