void __thiscall sub_1010CED0(void *this, int (__thiscall ***a2)(_DWORD))
{
  int v3; // eax
  int v4; // eax
  int v5; // eax

  if ( a2 )
  {
    v3 = (**a2)(a2);
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 28))(v3);
    if ( v4 )
    {
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 20))(this, v4);
      if ( (unsigned __int8)sub_101BC880() )
      {
        v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 12))(this);
        sub_101BCA60(v5);
      }
    }
  }
}
