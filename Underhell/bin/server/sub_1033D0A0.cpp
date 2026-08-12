void __thiscall sub_1033D0A0(_BYTE *this, int a2)
{
  const char *v3; // eax

  if ( a2 )
  {
    if ( a2 == 1 && sub_100A64B0((int *)*(_DWORD *)(*((_DWORD *)this + 647) + 36)) > 240.0 && !this[4173] )
    {
      v3 = "COMBINEPRISONGUARD_FLANK";
      if ( !this[4976] )
        v3 = "COMBINE_FLANK";
      sub_100AC410((int)(this + 4244), v3, 0, 2);
    }
  }
  else
  {
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 2340))(this);
  }
}
