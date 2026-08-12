int __thiscall sub_10421180(unsigned __int8 (__cdecl **this)(int, int), int *a2)
{
  int v2; // edx
  int v3; // esi
  int v5; // [esp+4h] [ebp-20h] BYREF
  _DWORD v6[4]; // [esp+8h] [ebp-1Ch] BYREF
  __int16 v7; // [esp+18h] [ebp-Ch]
  __int16 v8; // [esp+1Ah] [ebp-Ah]
  __int16 v9; // [esp+1Ch] [ebp-8h]
  __int16 v10; // [esp+1Eh] [ebp-6h]
  int v11; // [esp+20h] [ebp-4h]

  memset(&v6[1], 0, 12);
  v8 = 0;
  v11 = 0;
  v7 = -1;
  v9 = -1;
  v10 = -1;
  v2 = *a2;
  v6[0] = sub_1041F1A0;
  v5 = v2;
  v3 = sub_10420090(this, (int)&v5);
  sub_10420DE0((int)v6);
  return v3;
}
