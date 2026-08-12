int __thiscall sub_101E4A60(int *this, void *Src, float a3)
{
  int v4; // eax
  int result; // eax
  _DWORD v6[6]; // [esp+4h] [ebp-18h] BYREF

  sub_1022D3E0(v6);
  sub_1022D0A0(Src);
  v4 = this[50];
  *(float *)&v6[4] = a3;
  v6[5] = this;
  result = sub_101E47A0(this + 47, v4, (int)v6);
  if ( v6[2] >= 0 )
  {
    result = v6[0];
    if ( v6[0] )
      return (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v6[0]);
  }
  return result;
}
