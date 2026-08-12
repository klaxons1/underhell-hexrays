int __thiscall sub_10102D40(_DWORD *this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  char *v6; // eax
  char v7; // al
  int v8; // ecx
  char *v9; // eax
  int v11; // esi
  int v12; // [esp-10h] [ebp-20h]

  if ( sub_10229D00(32) )
    v2 = sub_10229D20(Locale);
  else
    v2 = 0;
  v3 = *(_DWORD *)dword_10413178;
  v12 = (*(int (__thiscall **)(_DWORD *))(this[1] + 36))(this + 1);
  v4 = (*(int (__thiscall **)(int))(v3 + 72))(dword_10413178);
  v5 = (*(int (__thiscall **)(_DWORD *, int))(this[1] + 36))(this + 1, v4);
  v6 = (char *)(*(int (__thiscall **)(int, int))(v3 + 12))(dword_10413178, v5);
  v7 = sub_1022C1A0(v6, v12, 0, 0);
  v8 = v2;
  if ( !v7 )
    goto LABEL_7;
  v9 = (char *)sub_1022A6A0("prop_data", 0);
  if ( !v9 )
  {
    v8 = v2;
LABEL_7:
    sub_1022AF00(v8);
    return 2;
  }
  v11 = sub_1010BB30((int)this, v9, v2);
  sub_1022AF00(v2);
  return v11;
}
