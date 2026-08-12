void __thiscall sub_1016F8A0(_DWORD *this, int a2)
{
  _DWORD v3[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( this[4] )
  {
    v3[2] = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F8 + 36))(dword_106B31F8, a2);
    v3[1] = (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)a2 + 24))(a2, "priority", -1);
    v3[0] = *(_DWORD *)(dword_106B31C8 + 24);
    sub_1016F6E0((int)(this + 100), (int)v3);
  }
}
