bool __thiscall sub_10096EA0(_DWORD *this, char *String1, char a3)
{
  char *v3; // eax
  unsigned __int16 v5; // ax
  int v6; // edi
  int v7; // eax
  unsigned int v9; // ecx
  int *v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  char *v13; // [esp+Ch] [ebp-Ch] BYREF
  char *v14; // [esp+14h] [ebp-4h]

  v3 = dword_10693788;
  if ( !dword_10693788 )
  {
    sub_101811E0("ai_ally_speech_manager", -1);
    v3 = dword_10693788;
    if ( dword_10693788 )
    {
      sub_10260750(dword_10693788);
      v3 = dword_10693788;
    }
  }
  v14 = v3;
  v13 = String1;
  v5 = sub_10095220(word_106938B8, (int)&v13);
  if ( v5 == 0xFFFF )
  {
    v6 = 0;
  }
  else
  {
    v6 = *(_DWORD *)(dword_106938BC + 16 * v5 + 12);
    if ( v6 )
    {
      v7 = *(_DWORD *)(v6 + 4);
      goto LABEL_9;
    }
  }
  v7 = 0;
LABEL_9:
  if ( !sub_10093A00((int)this, v7, a3) )
    return 0;
  v9 = this[1102];
  if ( v9 != -1 )
  {
    v10 = &off_1061BE18[4 * (this[1102] & 0xFFF) + 1];
    v11 = v9 >> 12;
    if ( off_1061BE18[4 * (this[1102] & 0xFFF) + 2] == v11 )
    {
      if ( *v10 )
      {
        v12 = off_1061BE18[4 * (this[1102] & 0xFFF) + 2] == v11 ? *v10 : 0;
        if ( *(_BYTE *)(v12 + 812)
          && (String1 == "TLK_HELLO"
           || String1 && !_stricmp(String1, "TLK_HELLO")
           || sub_10092650(String1, "TLK_HELLO_NPC")) )
        {
          return 0;
        }
      }
    }
  }
  if ( !sub_10096760((int)v14, String1) )
    return 0;
  if ( v6 )
  {
    if ( (*(_BYTE *)(v6 + 32) & 1) != 0 )
    {
      (*(void (__thiscall **)(_DWORD *))(*this + 1656))(this);
      if ( (unsigned __int8)sub_100AFBB0(String1) )
        return 0;
    }
  }
  (*(void (__thiscall **)(_DWORD *))(*this + 1656))(this);
  return (unsigned __int8)sub_100AF9C0(String1) != 0;
}
