void __thiscall sub_1024EF30(void *this, int a2)
{
  int v3; // ebx
  int v4; // edi
  int v5; // ebp
  int v6; // eax

  if ( !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 288))(this) )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 16))(dword_1047CA68);
    if ( !v3
      || (v4 = dword_1047CA70,
          v5 = *(_DWORD *)dword_1047CA70,
          v6 = (**(int (__thiscall ***)(void *))this)(this),
          !(*(unsigned __int8 (__thiscall **)(int, int, int))(v5 + 88))(v4, v3, v6)) )
    {
      (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 48))(this, 0);
    }
  }
  nullsub_5(a2);
}
