int *__thiscall sub_1005F2B0(int this)
{
  int v2; // eax

  sub_10039ED0((unsigned __int16 *)this);
  if ( *(_BYTE *)(this + 1960) )
  {
    if ( *(_DWORD *)(this + 2752) )
    {
      v2 = sub_101218C0();
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 40))(v2, *(_DWORD *)(this + 2752));
      *(_DWORD *)(this + 2752) = 0;
    }
    *(_BYTE *)(this + 2760) = 1;
  }
  return sub_1005EBE0((void *)this);
}
