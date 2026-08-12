double __stdcall sub_100586A0(int (__thiscall ***a1)(_DWORD))
{
  int v1; // eax
  int v2; // eax
  double result; // st7

  if ( !a1 )
    return 0.0;
  v1 = (**a1)(a1);
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 28))(v1);
  if ( !v2 )
    return 0.0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 400))(v2);
  return result;
}
