int *__thiscall sub_100F3C20(_DWORD *this, int a2, int a3, int a4, float a5)
{
  if ( a4 == 3 && a2 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
    return (int *)(*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a2 + 1472))(a2, this, 1);
  else
    return sub_100DA450(this, a2, a3, a4, a5);
}
