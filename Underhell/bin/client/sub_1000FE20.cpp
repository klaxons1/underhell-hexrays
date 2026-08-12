void __thiscall sub_1000FE20(int this, int a2)
{
  unsigned int v3; // eax
  const char *v4; // eax
  const char *v5; // eax
  const char *v6; // eax
  int i; // esi
  double v8; // st7
  float v9[3]; // [esp+18h] [ebp-18h] BYREF
  float v10; // [esp+24h] [ebp-Ch] BYREF
  float v11; // [esp+28h] [ebp-8h]
  float v12; // [esp+2Ch] [ebp-4h]

  if ( *(_BYTE *)(this + 316) == 6 )
  {
    v3 = *(_DWORD *)(this + 324);
    if ( v3 != -1
      && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 324) & 0xFFF) + 2) == v3 >> 12
      && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 324) & 0xFFF) + 1) )
    {
      v4 = (const char *)sub_10034D90(this);
      DevWarning("Updating physics on object in hierarchy %s!\n", v4);
    }
    else
    {
      (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)a2 + 188))(a2, v9, &v10);
      if ( (LODWORD(v10) & 0x7F800000) == 0x7F800000
        || (LODWORD(v11) & 0x7F800000) == 0x7F800000
        || (LODWORD(v10) & 0x7F800000) == 0x7F800000 )
      {
        v5 = (const char *)sub_10034E20(this);
        Msg("Infinite angles from vphysics! (entity %s)\n", v5);
        v10 = flt_1045924C;
        v11 = flt_10459250;
        v12 = flt_10459254;
      }
      if ( sub_1000E2E0(v9) )
      {
        sub_10037BA0(v9);
      }
      else
      {
        v6 = (const char *)sub_10034E20(this);
        Msg("Infinite origin from vphysics! (entity %s)\n", v6);
      }
      for ( i = 0; i < 3; ++i )
      {
        v8 = *(&v10 + i);
        sub_101F0660(*(&v10 + i));
        *(&v10 + i) = v8;
      }
      sub_10037CA0(&v10);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2) )
      {
        if ( *(_DWORD *)(this + 736) == 3 )
        {
          *(_DWORD *)(this + 736) = 1;
          sub_1000ECD0((_DWORD *)this);
        }
      }
    }
  }
}
