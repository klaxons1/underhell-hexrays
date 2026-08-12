char *__thiscall sub_100A5A80(int this, char *Source)
{
  char *v2; // edi
  int v4; // eax
  char *v5; // esi
  _DWORD *v6; // eax
  char *v8; // [esp+Ch] [ebp-8h] BYREF

  v2 = Source;
  if ( Source )
  {
    v8 = Source;
    v4 = sub_1009D9E0((unsigned __int8 (__cdecl **)(int, int))(this + 1356), (int)&v8);
    if ( v4 != -1 )
    {
      v5 = *(char **)(*(_DWORD *)(this + 1360) + 24 * v4 + 20);
      if ( v5 )
        goto LABEL_10;
    }
  }
  v6 = (_DWORD *)sub_10184390(1348);
  if ( !v6 )
  {
    v5 = 0;
    goto LABEL_6;
  }
  v5 = (char *)sub_100A58A0(v6, v2);
  if ( !v5 )
LABEL_6:
    Error("Failed to load response system data from %s", v2);
  if ( !(*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)v5 + 32))(v5) )
    Error("CInstancedResponseSystem:  Failed to init response system from %s!", v2);
  Source = v5;
  sub_100A3440(this + 1356, v2, &Source);
LABEL_10:
  (*(void (__thiscall **)(char *))(*(_DWORD *)v5 + 24))(v5);
  return v5;
}
