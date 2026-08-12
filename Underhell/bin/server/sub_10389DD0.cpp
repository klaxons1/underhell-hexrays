void __thiscall sub_10389DD0(int this)
{
  int v2; // ecx
  int v3; // eax

  v2 = *(_DWORD *)(this + 3624);
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 92))(v2);
  sub_1002F7B0((float *)this);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
  {
    if ( sub_10023D10((_DWORD *)this, 30) )
    {
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      sub_10388B80((void *)this, v3);
    }
  }
}
