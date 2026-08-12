int __thiscall sub_100B55B0(int this)
{
  int result; // eax
  int i; // edi
  int (__thiscall ***v4)(_DWORD, int); // ecx

  result = sub_100D0480(&unk_10430F68);
  for ( i = *(_DWORD *)(this + 40) - 1; i >= 0; --i )
  {
    result = *(_DWORD *)(this + 28);
    v4 = *(int (__thiscall ****)(_DWORD, int))(result + 4 * i);
    if ( v4 )
      result = (**v4)(v4, 1);
  }
  *(_DWORD *)(this + 40) = 0;
  if ( *(int *)(this + 36) >= 0 )
  {
    result = *(_DWORD *)(this + 28);
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 28));
      *(_DWORD *)(this + 28) = 0;
    }
    *(_DWORD *)(this + 32) = 0;
  }
  *(_DWORD *)(this + 44) = *(_DWORD *)(this + 28);
  *(_BYTE *)(this + 48) = 0;
  return result;
}
