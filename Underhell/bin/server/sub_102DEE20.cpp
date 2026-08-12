char __thiscall sub_102DEE20(_DWORD *this)
{
  int v1; // edi
  int v3; // eax
  char result; // al
  _BYTE *v5; // esi

  v1 = *(_DWORD *)(dword_106E06A4 + 48);
  v3 = sub_100F5E70(this);
  result = sub_100F8040((int)this, (int)this, v3 - v1, 0.40000001, 0);
  if ( result )
  {
    v5 = this + 1272;
    if ( *v5 != 1 )
    {
      result = (**((int (__thiscall ***)(int, _BYTE *))v5 - 2))((int)(v5 - 8), v5);
      *v5 = 1;
    }
  }
  return result;
}
