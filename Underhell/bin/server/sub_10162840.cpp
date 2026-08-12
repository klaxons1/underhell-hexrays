__int16 __thiscall sub_10162840(int this, int *a2)
{
  unsigned __int16 v3; // ax
  int v4; // ebx
  int v5; // edx
  int v7; // [esp+Ch] [ebp-30h] BYREF
  _DWORD v8[10]; // [esp+10h] [ebp-2Ch] BYREF
  int v9; // [esp+38h] [ebp-4h] BYREF

  v7 = *a2;
  memset(v8, 0, 32);
  LOWORD(v8[8]) = 1;
  v8[9] = 0;
  sub_10161620((_WORD *)this, (int)&v7, (unsigned __int16 *)&v9, &a2);
  v3 = sub_10161710(this);
  v4 = v3;
  sub_10162540(this, v3, v9, (char)a2);
  v5 = *(_DWORD *)(this + 4);
  ++*(_WORD *)(this + 18);
  if ( 52 * v4 + v5 != -8 )
  {
    *(_DWORD *)(52 * v4 + v5 + 8) = v7;
    qmemcpy((void *)(52 * v4 + v5 + 12), v8, 0x28u);
  }
  return v4;
}
