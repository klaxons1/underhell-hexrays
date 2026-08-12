__int16 __thiscall sub_1023B2F0(void *this, char *Str)
{
  char *v2; // esi
  int v4; // ebx

  v2 = Str;
  v4 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_106B3204 + 28))(dword_106B3204, Str);
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3204 + 32))(dword_106B3204, v4) )
  {
    sub_1023B0A0((int)this, v4, (int)this, v2);
    sub_1023AA70(v4, (int)this, v4);
  }
  else
  {
    if ( sub_10429530(v2, ".wav") || strstr(v2, ".mp3") )
    {
      byte_106C4E94 = 1;
      sub_1023A7E0(v2);
      byte_106C4E94 = 0;
      return -1;
    }
    if ( *v2 )
    {
      if ( (dword_106C4FC0 & 1) == 0 )
      {
        dword_106C4FC0 |= 1u;
        sub_1042F8A0(0, 32, 0);
        atexit(sub_10473FC0);
      }
      if ( *(_WORD *)sub_1042F670((char *)&Str + 2, v2) == 0xFFFF )
      {
        DevMsg("PrecacheScriptSound '%s' failed, no such sound script entry\n", v2);
        sub_1042F910((int)&Str + 2, v2);
        return v4;
      }
    }
  }
  return v4;
}
