__int16 __thiscall sub_102C65B0(int this, int *a2)
{
  unsigned __int16 v3; // ax
  int v4; // edi
  int v5; // edx
  int v7; // [esp+8h] [ebp-184h] BYREF
  int v8[94]; // [esp+10h] [ebp-17Ch] BYREF
  int v9; // [esp+188h] [ebp-4h] BYREF

  sub_102C5700((int)v8);
  v7 = *a2;
  sub_102C0AB0((_WORD *)this, (int)&v7, (unsigned __int16 *)&v9, &a2);
  v3 = sub_102C6370(this);
  v4 = v3;
  sub_102C4350(this, v3, v9, (char)a2);
  v5 = *(_DWORD *)(this + 4);
  ++*(_WORD *)(this + 18);
  if ( 392 * v4 + v5 != -8 )
  {
    *(_DWORD *)(392 * v4 + v5 + 8) = v7;
    sub_102C5AC0(392 * v4 + v5 + 16, (int)v8);
  }
  sub_102C5840(v8);
  return v4;
}
