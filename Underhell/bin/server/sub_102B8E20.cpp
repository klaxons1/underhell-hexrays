void __thiscall sub_102B8E20(int this, int a2)
{
  void (__noreturn ***v3)(); // eax

  if ( !*(_BYTE *)(this + 1177) && *(_DWORD *)(this + 1204) == 3 )
  {
    if ( *(_DWORD *)(this + 1200) )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF4 + 88))(dword_106BAFF4, *(_DWORD *)(this + 1200));
      *(_DWORD *)(this + 1200) = 0;
    }
    *(_BYTE *)(this + 1176) = 1;
    sub_102B7300((volatile signed __int32 *)this, 0);
    *(_DWORD *)(this + 1204) = 0;
    v3 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v3)[12])(
      v3,
      *(_DWORD *)(this + 1164),
      0.0,
      0.1);
    sub_102B7B10((float *)this, 0, 0, 0, 0, 0);
    sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
  }
}
