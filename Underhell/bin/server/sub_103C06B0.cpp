void __thiscall sub_103C06B0(int this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // [esp-8h] [ebp-Ch]

  sub_100E38F0((float *)this);
  v2 = *(_DWORD *)(this + 844);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 424);
    if ( v3 )
    {
      v4 = *(_DWORD *)(this + 836);
      v6 = this + 800;
      if ( v4 )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 4))(v4, v6);
      }
      else
      {
        v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 116))(dword_106BAFF4, v6);
        *(_DWORD *)(this + 836) = v5;
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 8))(v5, v3, 1);
      }
    }
    else
    {
      sub_1025FAC0(this);
    }
  }
  else
  {
    sub_1025FAC0(this);
  }
}
