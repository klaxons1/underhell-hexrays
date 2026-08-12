int __thiscall sub_102483B0(_DWORD *this, int a2)
{
  int result; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  bool v6; // zf
  const char *v7; // eax
  _DWORD v8[2]; // [esp+Ch] [ebp-8h] BYREF

  result = sub_10247260((int)this, a2);
  if ( !result )
  {
    sub_102422F0();
    v4 = sub_1022FF30(this);
    v5 = v4;
    if ( v4 )
    {
      *v4 = 0;
      v4[1] = 0;
      v4[2] = 0;
      v4[3] = 0;
      v4[4] = 0;
      v4[5] = 0;
      v4[6] = 0;
    }
    v6 = sub_10227C80(a2, "vgui::", 6) == 0;
    v7 = (const char *)(a2 + 6);
    if ( !v6 )
      v7 = (const char *)a2;
    v8[0] = sub_10001FD0(v7);
    v8[1] = v5;
    sub_102473C0((int)(this + 12), (int)v8);
    return (int)v5;
  }
  return result;
}
