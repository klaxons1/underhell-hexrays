void __thiscall sub_101DD840(_DWORD *this, int a2, int a3)
{
  int v4; // ecx
  __int64 v5; // [esp-8h] [ebp-18h]
  __int64 v6; // [esp-8h] [ebp-18h]
  __int64 v7; // [esp-4h] [ebp-14h]

  if ( a3 == 1 )
  {
    HIDWORD(v7) = this - 201;
    LODWORD(v7) = a2;
    sub_1010DD80(this + 76, v7, 0.0);
  }
  v4 = *(this - 95);
  if ( v4 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 40))(v4) )
  {
    if ( (*(this - 139) & 0x20000) == 0 )
      return;
    sub_101DCE10((int)(this - 201));
  }
  HIDWORD(v5) = this - 201;
  LODWORD(v5) = a2;
  sub_1010DD80(this + 70, v5, 0.0);
  if ( a3 != 1 )
  {
    if ( !a3 )
    {
      HIDWORD(v6) = this - 201;
      LODWORD(v6) = a2;
      sub_1010DD80(this + 82, v6, 0.0);
    }
    if ( a2 )
      this[100] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    else
      this[100] = -1;
  }
}
