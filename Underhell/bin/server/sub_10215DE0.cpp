char *__thiscall sub_10215DE0(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v6; // [esp+Ch] [ebp-4h]

  sub_10215D00((_WORD *)(this + 800));
  if ( *(int *)(this + 808) >= 0 )
  {
    if ( *(_DWORD *)(this + 800) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 800));
      *(_DWORD *)(this + 800) = 0;
    }
    *(_DWORD *)(this + 804) = 0;
  }
  v2 = *(_DWORD *)(this + 800);
  *(_WORD *)(this + 816) = -1;
  *(_WORD *)(this + 820) = -1;
  *(_DWORD *)(this + 824) = v2;
  sub_1042CBA0("mat_dxlevel");
  v3 = *(_DWORD *)(v6 + 48);
  *(_DWORD *)(this + 832) = v3;
  if ( v3 >= 90 || (v4 = *(_DWORD *)(this + 844), v4 < 0) )
  {
    *(_DWORD *)(this + 836) = *(_DWORD *)(this + 840);
    return sub_100E38F0((float *)this);
  }
  else
  {
    *(_DWORD *)(this + 836) = v4;
    return sub_100E38F0((float *)this);
  }
}
