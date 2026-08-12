char __thiscall sub_102730C0(int this, char *String1, char *String)
{
  int *v5; // ecx
  double v6; // [esp+8h] [ebp-8h] BYREF
  float Stringa; // [esp+1Ch] [ebp+Ch]

  if ( String1 == "cheapwaterstartdistance" || !_stricmp(String1, "cheapwaterstartdistance") )
  {
    Stringa = atof(String);
    if ( *(_DWORD *)(this + 800) != LODWORD(Stringa) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(float *)(this + 800) = Stringa;
        return 1;
      }
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 800);
      *(float *)(this + 800) = Stringa;
    }
    return 1;
  }
  else if ( String1 == "cheapwaterenddistance" || !_stricmp(String1, "cheapwaterenddistance") )
  {
    v6 = atof(String);
    sub_10272FA0((float *)(this + 804), &v6);
    return 1;
  }
  else
  {
    return sub_100EBE90(this, String1, String);
  }
}
