int __thiscall sub_1008AE30(int this)
{
  sub_1011A810(this + 296);
  sub_10087F10((int *)(this + 276));
  if ( *(int *)(this + 284) >= 0 )
  {
    if ( *(_DWORD *)(this + 276) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 276));
      *(_DWORD *)(this + 276) = 0;
    }
    *(_DWORD *)(this + 280) = 0;
  }
  sub_1011A810(this + 248);
  sub_10089920(this + 220);
  sub_100897C0((unsigned __int16 *)(this + 96));
  sub_10087F70((_WORD *)(this + 68));
  if ( *(int *)(this + 76) >= 0 )
  {
    if ( *(_DWORD *)(this + 68) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 68));
      *(_DWORD *)(this + 68) = 0;
    }
    *(_DWORD *)(this + 72) = 0;
  }
  sub_10233380(this + 64);
  sub_100879E0((int *)(this + 36));
  if ( *(int *)(this + 44) >= 0 )
  {
    if ( *(_DWORD *)(this + 36) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 36));
      *(_DWORD *)(this + 36) = 0;
    }
    *(_DWORD *)(this + 40) = 0;
  }
  sub_10233380(this + 32);
  sub_10233210(this + 28);
  sub_10233210(this + 24);
  sub_10233210(this + 20);
  return sub_100D3350(this);
}
