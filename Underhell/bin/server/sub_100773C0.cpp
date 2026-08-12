int __thiscall sub_100773C0(int this, int a2, char a3)
{
  int v3; // eax
  unsigned __int8 v5; // al
  int v7; // [esp+4h] [ebp-10h] BYREF
  int v8; // [esp+Ch] [ebp-8h] BYREF

  v3 = a2;
  if ( a2 == 800 )
    v3 = 0;
  v8 = v3;
  v5 = sub_10076390((_BYTE *)this, (int)&v8);
  if ( v5 == 0xFF && (!a3 || (v7 = 0, v5 = sub_10076390((_BYTE *)this, (int)&v7), v5 == 0xFF)) )
    return 0;
  else
    return *(_DWORD *)(*(_DWORD *)(this + 4) + 12 * v5 + 8);
}
