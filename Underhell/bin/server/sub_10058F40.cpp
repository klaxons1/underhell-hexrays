char __thiscall sub_10058F40(int this, char *String1)
{
  char result; // al
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  char *v9; // eax
  char String1_3; // [esp+17h] [ebp+Bh]

  if ( !(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 1656))(*(_DWORD *)(this + 4))
    || *(_BYTE *)(this + 121) )
  {
    return 0;
  }
  if ( String1 == "TLK_LEAD_COMINGBACK"
    || !_stricmp(String1, "TLK_LEAD_COMINGBACK")
    || String1 == "TLK_LEAD_CATCHUP"
    || !_stricmp(String1, "TLK_LEAD_CATCHUP")
    || String1 == "TLK_LEAD_RETRIEVE"
    || (String1_3 = 0, !_stricmp(String1, "TLK_LEAD_RETRIEVE")) )
  {
    String1_3 = 1;
  }
  if ( !*(_BYTE *)(this + 122) && String1_3 )
    return 0;
  if ( !*(_DWORD *)(dword_10698344 + 48)
    || (v5 = __RTDynamicCast(
               *(_DWORD *)(this + 4),
               0,
               (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
               (int)&CAI_PlayerAlly `RTTI Type Descriptor',
               0)) == 0 )
  {
    if ( String1_3 && *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 128) )
    {
      sub_10029660(*(_DWORD **)(this + 4), (int)"Leader didn't speak due to Nag timer.\n");
    }
    else
    {
      v8 = *(_DWORD *)(this + 64);
      if ( v8 )
        v9 = (char *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v8 + 4))(v8, String1);
      else
        v9 = 0;
      if ( (unsigned __int8)sub_100B0680(String1, v9, 0, 0, 0) )
      {
        result = 1;
        *(float *)(this + 128) = *(float *)(dword_106B31C8 + 12) + 3.0;
        return result;
      }
    }
    return 0;
  }
  v6 = *(_DWORD *)(this + 64);
  if ( v6 )
    v7 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)v6 + 4))(v6, String1);
  else
    v7 = 0;
  return (*(int (__thiscall **)(int, char *, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 2344))(
           v5,
           String1,
           v7,
           0,
           0,
           0);
}
