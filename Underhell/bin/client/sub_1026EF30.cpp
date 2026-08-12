int __thiscall sub_1026EF30(int this)
{
  _BYTE *v2; // eax

  if ( !*(_DWORD *)(this + 372) )
    sub_1025C0B0((_BYTE *)this);
  v2 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 144))(this);
  if ( v2 )
    sub_1026C7A0(v2);
  return (*(int (__thiscall **)(int))(*(_DWORD *)this + 16))(this);
}
