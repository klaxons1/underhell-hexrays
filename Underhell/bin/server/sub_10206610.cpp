void __thiscall sub_10206610(int *this)
{
  int v2; // esi
  int v3; // eax
  char *v4; // eax
  int v5; // eax
  int i; // esi
  char *v7; // eax
  int v8; // esi
  int v9; // eax
  _WORD *v10; // eax
  int v11; // [esp-18h] [ebp-20h]
  int v12; // [esp-14h] [ebp-1Ch]
  int v13; // [esp+4h] [ebp-4h]

  if ( !this[388] )
  {
    if ( sub_1042A310(32) )
      v13 = sub_1042A330(String);
    else
      v13 = 0;
    v2 = *(_DWORD *)dword_106B31F0;
    v12 = sub_100D7240(this);
    v11 = (*(int (__thiscall **)(int))(v2 + 72))(dword_106B31F0);
    v3 = sub_100D7240(this);
    v4 = (char *)(*(int (__thiscall **)(int, int, int))(v2 + 12))(dword_106B31F0, v3, v11);
    if ( (unsigned __int8)sub_1042BFB0(v4, v12, 0, 0) )
    {
      v5 = sub_1042ACB0("bone_followers", 0);
      if ( v5 )
      {
        for ( i = sub_1042A2F0(v5); i; i = sub_1042A300(i) )
        {
          v7 = (char *)sub_1042B460(0, (int)String);
          sub_101BD8F0(this + 388, (int)this, v7, 0);
        }
      }
      sub_1042B1A0(v13);
    }
    if ( !this[388] )
    {
      v8 = *(_DWORD *)dword_106B31F0;
      v9 = (*(int (__thiscall **)(int *))(*this + 24))(this);
      v10 = (_WORD *)(*(int (__thiscall **)(int, int))(v8 + 16))(dword_106B31F0, v9);
      if ( v10 )
      {
        if ( (*v10 & 0x7FFFu) > 1 )
          sub_101BD9B0((int)this, this + 388, (int)v10);
      }
    }
  }
}
