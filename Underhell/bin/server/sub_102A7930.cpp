char __thiscall sub_102A7930(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  int v6; // eax
  int v7; // edi
  const char *v8; // eax
  int v9; // [esp-Ch] [ebp-10h]

  v2 = this[17];
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (this[17] & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  if ( !(**(unsigned __int8 (__thiscall ***)(int, _DWORD, _DWORD))(v4 + 1488))(v4 + 1488, this[1], 0)
    || !sub_1029F4E0(this, 0) )
  {
    return 0;
  }
  v6 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 344))(this, 0);
  v7 = v6;
  if ( v6 == -1 )
    return 0;
  sub_102A11F0(this, v6);
  (*(void (__thiscall **)(_DWORD *))(*this + 296))(this);
  if ( sub_102F3640() )
  {
    v9 = this[1];
    v8 = sub_100BE1F0(v9, v7);
    sub_102F4480(v8, v9);
  }
  return 1;
}
