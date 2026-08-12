__int16 __thiscall sub_1022EF50(int this, int *a2, int *a3)
{
  int v4; // eax
  unsigned __int16 v5; // ax
  int v6; // edi
  int v7; // ecx
  int v9; // [esp+8h] [ebp-8h] BYREF
  int v10; // [esp+Ch] [ebp-4h]

  v4 = *a3;
  v9 = *a2;
  v10 = v4;
  sub_10227780((_WORD *)this, (int)&v9, (unsigned __int16 *)&a3, &a2);
  v5 = sub_10243CD0(this);
  v6 = v5;
  sub_1022AA60(this, v5, (unsigned __int16)a3, (char)a2);
  v7 = *(_DWORD *)(this + 4);
  ++*(_WORD *)(this + 18);
  if ( v7 + 16 * v6 != -8 )
  {
    *(_DWORD *)(v7 + 16 * v6 + 8) = v9;
    *(_DWORD *)(v7 + 16 * v6 + 12) = v10;
  }
  return v6;
}
