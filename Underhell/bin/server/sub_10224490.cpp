void __thiscall sub_10224490(char *this)
{
  int v2; // edi
  const char *v3; // eax
  double v4; // st7
  const char *v5; // eax
  const char *v6; // eax

  v2 = *((_DWORD *)this + 244);
  if ( v2 && !this[1448] )
  {
    if ( this[924] )
    {
      if ( !this[816] || !(unsigned __int8)sub_102DC130(this + 812) )
        return;
      this[816] = 0;
    }
    if ( !this[908] )
    {
      if ( !(unsigned __int8)sub_1041CE70(v2) )
        return;
      if ( *((_DWORD *)this + 228) == 1 )
      {
        v3 = (const char *)*((_DWORD *)this + 201);
        if ( !v3 )
          v3 = String;
        sub_1022F660("%s : PauseThink canceling playback\n", (char)v3);
        (*(void (__thiscall **)(char *))(*(_DWORD *)this + 764))(this);
      }
      else
      {
        (*(void (__thiscall **)(char *))(*(_DWORD *)this + 760))(this);
      }
      goto LABEL_27;
    }
    v4 = *(float *)(dword_106B31C8 + 16) + *((float *)this + 230);
    *((float *)this + 230) = v4;
    if ( *((float *)this + 229) <= 0.0 || v4 >= *((float *)this + 229) )
    {
      if ( *((_DWORD *)this + 228) == 1 )
      {
        v6 = (const char *)*((_DWORD *)this + 201);
        if ( !v6 )
          v6 = String;
        sub_1022F660("%s : Automatically canceling playback\n", (char)v6);
        (*(void (__thiscall **)(char *))(*(_DWORD *)this + 764))(this);
      }
      else
      {
        v5 = (const char *)*((_DWORD *)this + 201);
        if ( *((_DWORD *)this + 228) == 2 )
        {
          if ( !v5 )
            v5 = String;
          sub_1022F660("%s : Automatically resuming playback\n", (char)v5);
          (*(void (__thiscall **)(char *))(*(_DWORD *)this + 760))(this);
        }
        else
        {
          if ( !v5 )
            v5 = String;
          sub_1022F660("%s : Unknown action %i, automatically resuming playback\n", (char)v5);
          (*(void (__thiscall **)(char *))(*(_DWORD *)this + 760))(this);
        }
      }
LABEL_27:
      this[924] = 0;
      *((float *)this + 230) = 0.0;
      *((_DWORD *)this + 228) = 0;
      *((float *)this + 229) = 0.0;
      this[908] = 0;
    }
  }
}
