int sub_10153E30()
{
  if ( g_pCVar )
  {
    if ( !(unsigned __int8)sub_1042C180(&unk_106B33C8) )
      (*(void (__thiscall **)(int, void *))(*(_DWORD *)g_pCVar + 24))(g_pCVar, &unk_106B33C8);
    if ( !(unsigned __int8)sub_1042C180(&unk_106B33EC) )
      (*(void (__thiscall **)(int, void *))(*(_DWORD *)g_pCVar + 24))(g_pCVar, &unk_106B33EC);
    if ( !(unsigned __int8)sub_1042C180(&unk_106B3410) )
      (*(void (__thiscall **)(int, void *))(*(_DWORD *)g_pCVar + 24))(g_pCVar, &unk_106B3410);
  }
  return ((int (__thiscall *)(int (***)()))(*off_10646704)[1])(off_10646704);
}
