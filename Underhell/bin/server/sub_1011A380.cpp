void __thiscall sub_1011A380(int this)
{
  int v1; // eax
  int v2; // eax

  if ( byte_1069BF89 )
  {
    v1 = *(_DWORD *)(dword_106B31C8 + 72);
    if ( v1 != 1 && v1 != 3 )
    {
      *(_BYTE *)(this + 28) = 0;
      sub_101198C0((float *)this);
      v2 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_106B31F8 + 24))(
             dword_106B31F8,
             "playing_commentary",
             0);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F8 + 32))(dword_106B31F8, v2);
    }
  }
}
