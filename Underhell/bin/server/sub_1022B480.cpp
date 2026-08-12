void __thiscall sub_1022B480(int this, _DWORD *a2)
{
  if ( !*(_BYTE *)(this + 884) && !*(_BYTE *)(this + 925) && !*(_BYTE *)(this + 926) )
  {
    sub_1022A500((_DWORD *)this);
    if ( *a2 )
      *(_DWORD *)(this + 1512) = *(_DWORD *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2);
    else
      *(_DWORD *)(this + 1512) = -1;
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 752))(this);
  }
}
