char __thiscall sub_1040B030(_DWORD *this, _DWORD *a2)
{
  int v4; // edi
  int v5; // esi
  int v6; // eax
  int v7; // eax
  _BYTE v8[72]; // [esp+4h] [ebp-48h] BYREF

  if ( this[427] || !a2 )
    return 0;
  v4 = a2[106];
  if ( !v4 )
    return 0;
  v5 = this[106];
  sub_100CFA00(v8);
  sub_100CFD60(v8, v4, v5);
  v6 = (*(int (__thiscall **)(int, int, int, _DWORD, _BYTE *))(*(_DWORD *)dword_106BAFF4 + 68))(
         dword_106BAFF4,
         v4,
         v5,
         0,
         v8);
  if ( !v6 )
    return 0;
  this[427] = v6;
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v6 + 12))(v6, this);
  v7 = sub_10019B00(a2);
  sub_10019680(this + 428, v7);
  sub_101DAB60(v4, v5);
  return 1;
}
