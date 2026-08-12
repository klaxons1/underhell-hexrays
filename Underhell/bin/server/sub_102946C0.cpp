void __thiscall sub_102946C0(_DWORD *this, int a2)
{
  int v3; // ebx
  int v4; // edi
  _DWORD *v5; // edi
  __int64 v6; // [esp-8h] [ebp-20h]
  __int64 v7; // [esp-8h] [ebp-20h]
  int v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h] BYREF

  sub_102944E0(&v9, &v8);
  v3 = this[200] - v9;
  v4 = this[201] - v8;
  if ( v4 > v3 )
    v4 = this[200] - v9;
  if ( (int)this[201] > 0 )
  {
    if ( v4 > 10 )
    {
      Msg("**ERROR! ai_allymanager - ReplaceMedics > MAX_ALLIES\n");
      return;
    }
    if ( *(_DWORD *)(dword_106DB03C + 48) )
      DevMsg("Ally manager spawning %d medics\n", v4);
    if ( v4 > 0 )
    {
      v3 -= v4;
      do
      {
        HIDWORD(v6) = this;
        LODWORD(v6) = this;
        sub_1010DD80(this + 264, v6, 0.0);
        --v4;
      }
      while ( v4 );
    }
  }
  if ( v3 >= 1 )
  {
    if ( v3 > 10 )
    {
      Msg("**ERROR! ai_allymanager - ReplaceAllies > MAX_ALLIES\n");
      v3 = 10;
    }
    if ( *(_DWORD *)(dword_106DB03C + 48) )
      DevMsg("Ally manager spawning %d regulars\n", v3);
    v5 = this + 204;
    do
    {
      HIDWORD(v7) = this;
      LODWORD(v7) = this;
      sub_1010DD80(v5, v7, 0.0);
      v5 += 6;
      --v3;
    }
    while ( v3 );
  }
}
