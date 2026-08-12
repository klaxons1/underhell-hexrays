void __stdcall sub_102702B0(int a1, char *String1, char *String)
{
  char v3; // bl
  double v4; // [esp+4h] [ebp-8h] BYREF
  float Stringa; // [esp+1Ch] [ebp+10h]
  float Stringb; // [esp+1Ch] [ebp+10h]
  float Stringc; // [esp+1Ch] [ebp+10h]

  if ( !_stricmp(String1, "clamp") )
  {
    v3 = atoi(String) != 0;
    if ( v3 != *(_BYTE *)(a1 + 4) )
    {
      (**(void (__thiscall ***)(int, int))a1)(a1, a1 + 4);
      *(_BYTE *)(a1 + 4) = v3;
    }
  }
  else if ( !_stricmp(String1, "pitchcurvezero") )
  {
    Stringa = atof(String);
    if ( *(_DWORD *)(a1 + 8) != LODWORD(Stringa) )
    {
      (**(void (__thiscall ***)(int, int))a1)(a1, a1 + 8);
      *(float *)(a1 + 8) = Stringa;
    }
  }
  else if ( !_stricmp(String1, "pitchcurvelinear") )
  {
    Stringb = atof(String);
    if ( *(_DWORD *)(a1 + 12) != LODWORD(Stringb) )
    {
      (**(void (__thiscall ***)(int, int))a1)(a1, a1 + 12);
      *(float *)(a1 + 12) = Stringb;
    }
  }
  else if ( !_stricmp(String1, "rollcurvezero") )
  {
    Stringc = atof(String);
    if ( *(_DWORD *)(a1 + 16) != LODWORD(Stringc) )
    {
      (**(void (__thiscall ***)(int, int))a1)(a1, a1 + 16);
      *(float *)(a1 + 16) = Stringc;
    }
  }
  else if ( !_stricmp(String1, "rollcurvelinear") )
  {
    v4 = atof(String);
    sub_1026FC50((float *)(a1 + 20), &v4);
  }
  else if ( !_stricmp(String1, "yawmin") )
  {
    v4 = atof(String);
    sub_1026F6A0((float *)(a1 + 28), &v4);
  }
  else if ( !_stricmp(String1, "yawmax") )
  {
    v4 = atof(String);
    sub_1026F6D0((float *)(a1 + 32), &v4);
  }
  else if ( !_stricmp(String1, "pitchmin") )
  {
    v4 = atof(String);
    sub_1026F700((float *)(a1 + 36), &v4);
  }
  else if ( !_stricmp(String1, "pitchmax") )
  {
    v4 = atof(String);
    sub_1026F730((float *)(a1 + 40), &v4);
  }
  else if ( !_stricmp(String1, "fov") )
  {
    v4 = atof(String);
    sub_1026FC80((float *)(a1 + 24), &v4);
  }
}
