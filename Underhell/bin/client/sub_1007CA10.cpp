__int16 __thiscall sub_1007CA10(int this, int *a2, __int16 *a3)
{
  __int16 v4; // ax
  unsigned __int16 v5; // ax
  int v6; // edi
  int v7; // ecx
  int v9; // [esp+8h] [ebp-8h] BYREF
  __int16 v10; // [esp+Ch] [ebp-4h]

  v4 = *a3;
  v9 = *a2;
  v10 = v4;
  sub_1007AB20((_WORD *)this, (int)&v9, (unsigned __int16 *)&a3, &a2);
  v5 = sub_100E3A00(this);
  v6 = v5;
  sub_1007B8F0(this, v5, (unsigned __int16)a3, (char)a2);
  v7 = *(_DWORD *)(this + 4);
  ++*(_WORD *)(this + 18);
  if ( v7 + 16 * v6 != -8 )
  {
    *(_DWORD *)(v7 + 16 * v6 + 8) = v9;
    *(_WORD *)(v7 + 16 * v6 + 12) = v10;
  }
  return v6;
}
