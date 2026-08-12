int __thiscall sub_1023F0C0(int this, int a2)
{
  int v3; // eax
  int v5; // esi
  int v6; // [esp+4h] [ebp-1Ch] BYREF
  __int16 v7; // [esp+8h] [ebp-18h]
  __int16 v8; // [esp+Ah] [ebp-16h]
  int v9[5]; // [esp+Ch] [ebp-14h] BYREF

  v7 = -1;
  v8 = -1;
  memset(v9, 0, sizeof(v9));
  v6 = a2;
  v3 = sub_1023CCF0((unsigned __int8 (__cdecl **)(int, int))this, (int)&v6);
  if ( v3 == -1 )
  {
    sub_1011A810(v9);
    return 0;
  }
  else
  {
    v5 = 44 * v3 + *(_DWORD *)(this + 4) + 16;
    sub_1011A810(v9);
    return v5;
  }
}
