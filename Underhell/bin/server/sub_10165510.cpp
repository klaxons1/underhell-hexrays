char __thiscall sub_10165510(_DWORD *this)
{
  int v2; // esi
  int v3; // eax
  char *v4; // eax
  int v5; // eax
  int i; // esi
  char *v7; // eax
  int v9; // [esp-18h] [ebp-20h]
  int v10; // [esp-14h] [ebp-1Ch]
  int v11; // [esp+4h] [ebp-4h]

  if ( !this[1043] )
  {
    if ( sub_1042A310(32) )
      v11 = sub_1042A330(String);
    else
      v11 = 0;
    v2 = *(_DWORD *)dword_106B31F0;
    v10 = sub_100D7240(this);
    v9 = (*(int (__thiscall **)(int))(v2 + 72))(dword_106B31F0);
    v3 = sub_100D7240(this);
    v4 = (char *)(*(int (__thiscall **)(int, int, int))(v2 + 12))(dword_106B31F0, v3, v9);
    if ( (unsigned __int8)sub_1042BFB0(v4, v10, 0, 0) )
    {
      v5 = sub_1042ACB0("bone_followers", 0);
      if ( v5 )
      {
        for ( i = sub_1042A2F0(v5); i; i = sub_1042A300(i) )
        {
          v7 = (char *)sub_1042B460(0, (int)String);
          sub_101BD8F0((int)this, v7, 0);
        }
      }
    }
    sub_1042B1A0(v11);
  }
  return 1;
}
