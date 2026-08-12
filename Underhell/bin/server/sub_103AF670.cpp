void __cdecl sub_103AF670(int a1, int a2)
{
  int v3; // eax
  char *v4; // esi
  char v5; // bl
  char v6; // [esp+10h] [ebp+Ch]

  v3 = *(_DWORD *)(a2 + 96);
  if ( v3 && *(_WORD *)(v3 + 816) == 904 )
  {
    v4 = (char *)sub_1012BC90(&dword_1069E3E0, 0, "npc_strider");
    v5 = 0;
    if ( !v4 )
    {
      v5 = 1;
      v6 = sub_100E8650();
      sub_100E8660(1);
      v4 = (char *)sub_101811E0("npc_strider", -1);
      v4[3848] = 1;
      sub_10260750(v4);
      sub_100E8660(v6);
    }
    (*(void (__thiscall **)(char *, _DWORD, int))(*(_DWORD *)v4 + 2040))(v4, 0, a2 + 4);
    if ( v5 )
      sub_1025FAC0((int)v4);
  }
}
