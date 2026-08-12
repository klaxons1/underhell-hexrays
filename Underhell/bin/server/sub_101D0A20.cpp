_DWORD *__stdcall sub_101D0A20(int a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // esi

  v1 = (_DWORD *)sub_100D6340(5692);
  v2 = v1;
  if ( v1 )
  {
    sub_101CE0E0(v1);
    *v2 = &CRagdollPropAttached::`vftable';
    v2[280] = &CRagdollPropAttached::`vftable';
    *((_BYTE *)v2 + 5684) = 0;
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(_DWORD *, int))(*v2 + 108))(v2, a1);
  return v2 + 3;
}
