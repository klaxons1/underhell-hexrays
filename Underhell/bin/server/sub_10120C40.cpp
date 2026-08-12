void __thiscall sub_10120C40(int this, int a2)
{
  __int64 v3; // [esp-8h] [ebp-14h]

  if ( *(_DWORD *)(this + 1000) )
    sub_1011F650((_BYTE *)this, a2);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) && (*(_DWORD *)(this + 248) & 0x400) != 0 )
  {
    if ( *(_DWORD *)(this + 912) && !(unsigned __int8)sub_10260340(*(char **)(this + 912), a2) )
      sub_1011FE20(this, this + 928, 1, 0);
    if ( *(_BYTE *)(this + 972) )
    {
      HIDWORD(v3) = a2;
      LODWORD(v3) = a2;
      sub_1010DD80((_DWORD *)(this + 1200), v3, 0.0);
      sub_1011FE20(this, this + 928, 1, 0);
    }
    else
    {
      *(_DWORD *)(this + 880) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
      if ( sub_10120BA0(this) )
        *(_DWORD *)(this + 196) = 0;
    }
  }
}
