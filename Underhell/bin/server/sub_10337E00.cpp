void __thiscall sub_10337E00(_DWORD *this, int a2)
{
  bool v3; // bl
  int v4; // edi
  __int64 v5; // [esp-8h] [ebp-14h]
  __int64 v6; // [esp-8h] [ebp-14h]

  v3 = sub_100296A0(this);
  sub_1004AF80(this, a2);
  if ( !sub_100296A0(this) || v3 )
  {
    if ( !sub_100296A0(this) && v3 )
    {
      if ( *(_DWORD *)(dword_106E5F44 + 48) )
        sub_10336B20(this);
      HIDWORD(v6) = this;
      LODWORD(v6) = this;
      sub_1010DD80(this + 1453, v6, 0.0);
    }
  }
  else
  {
    HIDWORD(v5) = this;
    LODWORD(v5) = this;
    sub_1010DD80(this + 1447, v5, 0.0);
    if ( *(_DWORD *)(dword_106E5F44 + 48) )
    {
      v4 = sub_101811E0("squadinsignia", -1);
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 76))(v4, this);
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 96))(v4);
    }
  }
}
