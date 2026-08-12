void __stdcall sub_10058740(int (__thiscall ***a1)(_DWORD))
{
  int v1; // eax
  int v2; // eax

  if ( a1 )
  {
    v1 = (**a1)(a1);
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 28))(v1);
    if ( v2 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 404))(v2);
  }
}
