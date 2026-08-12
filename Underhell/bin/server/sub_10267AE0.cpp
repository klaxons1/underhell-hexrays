char __usercall sub_10267AE0@<al>(int *a1@<ecx>, int a2@<edi>)
{
  int v3; // ecx
  char *v4; // eax
  const char *v5; // ecx
  const char *v6; // eax
  char result; // al
  float v8; // [esp+4h] [ebp-Ch]

  v3 = a1[373];
  if ( v3 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 292))(v3, 1);
    a1[373] = 0;
  }
  (*(void (__thiscall **)(int *))(*a1 + 852))(a1);
  v4 = (char *)a1[360];
  if ( !v4 )
    v4 = (char *)String;
  if ( (unsigned __int8)sub_10269E50(v4) )
  {
    result = sub_102669C0(a1, a2);
    *((float *)a1 + 427) = 0.0;
    if ( *((_BYTE *)a1 + 225) != 1 )
    {
      result = (*(int (__thiscall **)(int *, int))(*a1 + 480))(a1, (int)a1 + 225);
      *((_BYTE *)a1 + 225) = 1;
    }
    *((_BYTE *)a1 + 1704) = 0;
  }
  else
  {
    v5 = (const char *)a1[360];
    if ( !v5 )
      v5 = String;
    v6 = (const char *)a1[65];
    if ( !v6 )
      v6 = String;
    Warning("Vehicle (%s) unable to properly initialize due to script error in (%s)!\n", v6, v5);
    sub_100EC3F0(a1, (int)sub_10246D70, 0.0, 0);
    v8 = *(float *)(dword_106B31C8 + 12) + 0.1;
    return sub_100EC4A0(a1, v8, 0);
  }
  return result;
}
