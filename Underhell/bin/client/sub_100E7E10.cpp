__int16 __thiscall sub_100E7E10(int this, int *a2, int *a3)
{
  int v4; // edx
  int v5; // eax
  unsigned __int16 v6; // ax
  int v7; // edi
  int v8; // ecx
  int v10; // [esp+8h] [ebp-Ch] BYREF
  int v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+10h] [ebp-4h]

  v4 = *a3;
  v5 = a3[1];
  v10 = *a2;
  v11 = v4;
  v12 = v5;
  sub_100E3630((_WORD *)this, (int)&v10, (unsigned __int16 *)&a3, &a2);
  v6 = sub_100C0EB0(this);
  v7 = v6;
  sub_100E5660(this, v6, (unsigned __int16)a3, (char)a2);
  v8 = *(_DWORD *)(this + 4);
  ++*(_WORD *)(this + 18);
  if ( v8 + 20 * v7 != -8 )
  {
    *(_DWORD *)(v8 + 20 * v7 + 8) = v10;
    *(_DWORD *)(v8 + 20 * v7 + 12) = v11;
    *(_DWORD *)(v8 + 20 * v7 + 16) = v12;
  }
  return v7;
}
