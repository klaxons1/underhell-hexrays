__int16 __thiscall sub_1009A0C0(int this, _DWORD *a2)
{
  unsigned __int16 v3; // ax
  int v4; // edi
  int v5; // edx
  _DWORD v7[2]; // [esp+8h] [ebp-Ch] BYREF
  int v8; // [esp+10h] [ebp-4h] BYREF

  v7[0] = *a2;
  sub_10095D90((_WORD *)this, (int)v7, (unsigned __int16 *)&v8, &a2);
  v3 = sub_100E3A00(this);
  v4 = v3;
  sub_10097650(this, v3, v8, (char)a2);
  v5 = *(_DWORD *)(this + 4);
  ++*(_WORD *)(this + 18);
  if ( v5 + 16 * v4 != -8 )
  {
    *(_DWORD *)(v5 + 16 * v4 + 8) = v7[0];
    *(_DWORD *)(v5 + 16 * v4 + 12) = v7[1];
  }
  return v4;
}
