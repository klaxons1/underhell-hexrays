int __thiscall sub_1006CEF0(int this, int *a2, int *a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // edx
  int v7; // edi
  int v8; // eax
  _DWORD *v9; // eax
  int v11; // [esp+8h] [ebp-10h] BYREF
  int v12; // [esp+Ch] [ebp-Ch]
  int v13; // [esp+10h] [ebp-8h]
  int v14; // [esp+14h] [ebp-4h]

  v4 = *a3;
  v11 = *a2;
  v5 = a3[1];
  v12 = v4;
  v6 = a3[2];
  v13 = v5;
  v14 = v6;
  sub_1006B270(
    (unsigned __int8 (__cdecl **)(int, int))this,
    (int)&v11,
    (unsigned __int8 (__cdecl **)(int, int))&a3,
    &a2);
  v7 = sub_1006B410((_DWORD *)this);
  sub_1006C110((_DWORD *)this, v7, (int)a3, (char)a2);
  v8 = *(_DWORD *)(this + 4);
  ++*(_DWORD *)(this + 20);
  v9 = (_DWORD *)(32 * v7 + v8 + 16);
  if ( v9 )
  {
    *v9 = v11;
    v9[1] = v12;
    v9[2] = v13;
    v9[3] = v14;
  }
  return v7;
}
