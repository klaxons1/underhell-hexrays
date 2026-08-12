char __thiscall sub_10206850(void *this, char *Str, int a3)
{
  int v4; // esi
  int v5; // ebx
  int v6; // eax
  char *v7; // eax
  char *v8; // eax
  int v10; // [esp-14h] [ebp-20h]
  int v11; // [esp-10h] [ebp-1Ch]

  if ( sub_1042A310(32) )
    v4 = sub_1042A330(String);
  else
    v4 = 0;
  v5 = *(_DWORD *)dword_106B31F0;
  v11 = sub_100D7240(this);
  v10 = (*(int (__thiscall **)(int))(v5 + 72))(dword_106B31F0);
  v6 = sub_100D7240(this);
  v7 = (char *)(*(int (__thiscall **)(int, int, int))(v5 + 12))(dword_106B31F0, v6, v10);
  if ( (unsigned __int8)sub_1042BFB0(v7, v11, 0, 0)
    && sub_1042ACB0("physgun_interactions", 0)
    && (v8 = (char *)sub_1042B460(Str, (int)String)) != 0
    && *v8 )
  {
    sub_10264F10(a3, v8);
    sub_1042B1A0(v4);
    return 1;
  }
  else
  {
    sub_1042B1A0(v4);
    return 0;
  }
}
