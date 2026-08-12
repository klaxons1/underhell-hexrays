double __thiscall sub_10206920(void *this)
{
  int v2; // esi
  int v3; // ebx
  int v4; // eax
  char *v5; // eax
  int v7; // [esp-8h] [ebp-20h]
  int v8; // [esp-4h] [ebp-1Ch]

  if ( sub_1042A310(32) )
    v2 = sub_1042A330(String);
  else
    v2 = 0;
  v3 = *(_DWORD *)dword_106B31F0;
  v8 = sub_100D7240(this);
  v7 = (*(int (__thiscall **)(int))(v3 + 72))(dword_106B31F0);
  v4 = sub_100D7240(this);
  v5 = (char *)(*(int (__thiscall **)(int, int, int))(v3 + 12))(dword_106B31F0, v4, v7);
  if ( (unsigned __int8)sub_1042BFB0(v5, v8, 0, 0) && sub_1042ACB0("physgun_interactions", 0) )
  {
    sub_1042AE90("carry_distance_offset", 0.0);
    sub_1042B1A0(v2);
    return (float)0.0;
  }
  else
  {
    sub_1042B1A0(v2);
    return 0.0;
  }
}
