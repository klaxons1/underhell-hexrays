int __thiscall sub_102064F0(void *this)
{
  int v2; // esi
  int v3; // ebx
  int v4; // eax
  char *v5; // eax
  char v6; // al
  int v7; // ecx
  int v8; // eax
  int v10; // edi
  int v11; // [esp-14h] [ebp-20h]
  int v12; // [esp-10h] [ebp-1Ch]

  if ( sub_1042A310(32) )
    v2 = sub_1042A330(String);
  else
    v2 = 0;
  v3 = *(_DWORD *)dword_106B31F0;
  v12 = sub_100D7240(this);
  v11 = (*(int (__thiscall **)(int))(v3 + 72))(dword_106B31F0);
  v4 = sub_100D7240(this);
  v5 = (char *)(*(int (__thiscall **)(int, int, int))(v3 + 12))(dword_106B31F0, v4, v11);
  v6 = sub_1042BFB0(v5, v12, 0, 0);
  v7 = v2;
  if ( !v6 )
    goto LABEL_7;
  v8 = sub_1042ACB0("prop_data", 0);
  if ( !v8 )
  {
    v7 = v2;
LABEL_7:
    sub_1042B1A0(v7);
    return 2;
  }
  v10 = sub_10215EB0(this, v8, v2);
  sub_1042B1A0(v2);
  return v10;
}
