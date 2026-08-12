void __thiscall sub_10001390(float *this)
{
  int v2; // eax

  if ( *((_DWORD *)off_10627B10 + 4) )
  {
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 404))(dword_106B31D0);
    (*(void (__thiscall **)(_DWORD, int, _DWORD))(**((_DWORD **)off_10627B10 + 4) + 56))(
      *((_DWORD *)off_10627B10 + 4),
      v2 & 0xFFFFFF,
      0);
    this[115] = Plat_FloatTime();
  }
}
