void __thiscall sub_10223420(float *this, int a2, int a3)
{
  int v4; // edi
  int v5; // edi
  double v6; // st7
  char String1[1024]; // [esp+4h] [ebp-400h] BYREF

  if ( !*((_BYTE *)this + 1500) )
  {
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 756))(this);
    this[229] = 0.0;
    *((_BYTE *)this + 924) = 0;
    this[230] = 0.0;
    *((_BYTE *)this + 908) = 0;
    this[228] = 0.0;
    v4 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
           dword_106B31D0,
           a3,
           String1,
           1024);
    if ( !_stricmp(String1, "automate") )
    {
      v5 = (*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
             dword_106B31D0,
             v4,
             String1,
             1024);
      if ( !_stricmp(String1, "Cancel") )
      {
        *((_DWORD *)this + 228) = 1;
      }
      else if ( !_stricmp(String1, "Resume") )
      {
        *((_DWORD *)this + 228) = 2;
      }
      if ( *((_DWORD *)this + 228) )
      {
        (*(void (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_106B31D0 + 224))(
          dword_106B31D0,
          v5,
          String1,
          1024);
        v6 = atof(String1);
        this[229] = v6;
        if ( v6 > 0.0 )
        {
          this[230] = 0.0;
          *((_BYTE *)this + 908) = 1;
        }
      }
    }
  }
}
