void __thiscall sub_1038B680(int this, int a2, int a3, int a4, int a5)
{
  int v6; // eax
  int v7; // eax

  if ( !*(_BYTE *)(this + 2680) && (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1080))(this, a2) != 1 )
  {
    v6 = *(_DWORD *)(this + 2324);
    if ( (v6 == 2 || v6 == 1) && (!*(_BYTE *)(this + 4892) || !sub_102A8560(this + 4876)) )
    {
      v7 = sub_101679A0((int)"gordon_precriminal");
      if ( sub_10167A00(v7) == 1 )
      {
        sub_1038B090((float *)this);
        if ( *(_DWORD *)(this + 4364) == 3 )
          sub_1038B180((float *)this);
      }
    }
  }
}
