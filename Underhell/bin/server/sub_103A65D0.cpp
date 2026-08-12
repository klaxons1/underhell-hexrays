void __usercall sub_103A65D0(int a1@<ecx>, int a2@<ebx>, const char *a3@<edi>)
{
  float *v4; // edi
  const char *v5; // [esp+8h] [ebp-Ch]
  float v6; // [esp+Ch] [ebp-8h]
  float v7; // [esp+Ch] [ebp-8h]

  if ( (*(_BYTE *)(a1 + 252) & 1) == 0 )
  {
    v6 = 25.0;
    if ( *(_BYTE *)(a1 + 3968) )
    {
      sub_101674F0(a3, (_DWORD *)a1, 1, 500.0, 250.0, (int)"models/gibs/Shield_Scanner_Gib1.mdl", v6);
      sub_101674F0(a3, (_DWORD *)a1, 1, 500.0, 250.0, (int)"models/gibs/Shield_Scanner_Gib2.mdl", 25.0);
      sub_101674F0(a3, (_DWORD *)a1, 1, 500.0, 250.0, (int)"models/gibs/Shield_Scanner_Gib3.mdl", 25.0);
      sub_101674F0(a3, (_DWORD *)a1, 1, 500.0, 250.0, (int)"models/gibs/Shield_Scanner_Gib4.mdl", 25.0);
      sub_101674F0(a3, (_DWORD *)a1, 1, 500.0, 250.0, (int)"models/gibs/Shield_Scanner_Gib5.mdl", 25.0);
      v7 = 25.0;
      v5 = "models/gibs/Shield_Scanner_Gib6.mdl";
    }
    else
    {
      sub_101674F0(a3, (_DWORD *)a1, 1, 500.0, 250.0, (int)"models/gibs/scanner_gib01.mdl", v6);
      sub_101674F0(a3, (_DWORD *)a1, 1, 500.0, 250.0, (int)"models/gibs/scanner_gib02.mdl", 25.0);
      sub_101674F0(a3, (_DWORD *)a1, 1, 500.0, 250.0, (int)"models/gibs/scanner_gib04.mdl", 25.0);
      v7 = 25.0;
      v5 = "models/gibs/scanner_gib05.mdl";
    }
    sub_101674F0(a3, (_DWORD *)a1, 1, 500.0, 250.0, (int)v5, v7);
    if ( (*(_DWORD *)(a1 + 248) & 0x2000) == 0
      && ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           0.0,
           1.0) < 0.30000001 )
    {
      v4 = (float *)sub_101811E0("item_battery", -1);
      if ( v4 )
      {
        if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
          sub_100DAE60(a1);
        sub_100E0D20((int)v4, (float *)(a1 + 580));
        if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
          sub_100DAFD0(a1);
        sub_100DD660((int)v4, (float *)(a1 + 476));
        sub_100D7260(v4, (float *)(a1 + 488));
        sub_101778A0((int)v4);
        (*(void (__thiscall **)(float *))(*(_DWORD *)v4 + 96))(v4);
      }
    }
    sub_103A5280(a1);
    sub_1032A9D0(a1, a2);
  }
}
