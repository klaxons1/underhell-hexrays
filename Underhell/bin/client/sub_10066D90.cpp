int __thiscall sub_10066D90(char *this, char *Source)
{
  int result; // eax
  int v4; // edi
  int v5; // esi
  unsigned __int8 (__thiscall *v6)(int, char *, int, int); // eax
  int v7; // esi
  char *v8; // ebx
  int v9; // eax
  char Destination[512]; // [esp+8h] [ebp-234h] BYREF
  int v11[12]; // [esp+208h] [ebp-34h] BYREF
  int v12; // [esp+238h] [ebp-4h]

  sub_102282F0(Destination, Source, 0x200u);
  sub_10228870(Destination, ".vcd", 0x200u);
  sub_10228240(Destination, 92);
  result = (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_104131B4 + 20))(dword_104131B4, Destination);
  v4 = result;
  if ( result )
  {
    v5 = sub_100DDA40(result);
    v6 = *(unsigned __int8 (__thiscall **)(int, char *, int, int))(*(_DWORD *)dword_104131B4 + 24);
    v12 = v5;
    if ( v6(dword_104131B4, Source, v5, v4) )
    {
      if ( (unsigned __int8)sub_101E5F70(v5, v4) )
      {
        if ( sub_100DDA40(536) )
        {
          if ( this )
            v7 = sub_101E99B0(this + 1192);
          else
            v7 = sub_101E99B0(0);
        }
        else
        {
          v7 = 0;
        }
        sub_1022EE70(v12, v4, 8);
        if ( (unsigned __int8)sub_101E8730((int)v11, Destination, (int)off_103DBE70) )
        {
          sub_101E6430(sub_1011BF50);
          if ( this )
            v8 = this + 1192;
          else
            v8 = 0;
          sub_101E6040(v8);
        }
        else
        {
          Warning("Unable to restore binary scene '%s'\n", Destination);
          if ( v7 )
          {
            sub_101E9B00(v7);
            sub_10034930(v7);
          }
          v7 = 0;
        }
        if ( v11[2] >= 0 )
        {
          if ( v11[0] )
            (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v11[0]);
        }
      }
      else
      {
        unknown_libname_5(v5);
        if ( this )
          v9 = (int)(this + 1192);
        else
          v9 = 0;
        v7 = sub_101EA860(Destination, v9, (int)&off_103E4B98, (int)sub_1011BF50);
      }
      sub_10034930(v12);
      return v7;
    }
    else
    {
      sub_10034930(v5);
      return 0;
    }
  }
  return result;
}
