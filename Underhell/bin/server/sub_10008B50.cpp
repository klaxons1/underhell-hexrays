int __thiscall sub_10008B50(int this, int *a2, _DWORD *a3)
{
  _DWORD *v3; // ebx
  int v4; // esi
  int v6; // ecx
  int v7; // esi
  int v8; // edx
  int v10; // [esp+Ch] [ebp-18h] BYREF
  _DWORD v11[3]; // [esp+10h] [ebp-14h] BYREF
  int v12; // [esp+1Ch] [ebp-8h]
  int v13; // [esp+20h] [ebp-4h]

  v3 = a3;
  v4 = 0;
  v6 = *a2;
  memset(v11, 0, sizeof(v11));
  v12 = 0;
  v13 = 0;
  v10 = v6;
  if ( v11 != a3 && (int)a3[3] > 0 )
  {
    a2 = (int *)a3[3];
    do
    {
      sub_1013A0E0(v12, v4 + *v3);
      v4 += 12;
      a2 = (int *)((char *)a2 - 1);
    }
    while ( a2 );
  }
  sub_10002320(
    (unsigned __int8 (__cdecl **)(int, int))this,
    (int)&v10,
    (unsigned __int8 (__cdecl **)(int, int))&a3,
    &a2);
  v7 = sub_10008930((_DWORD *)this);
  sub_10003090((_DWORD *)this, v7, (int)a3, (char)a2);
  v8 = *(_DWORD *)(this + 4);
  ++*(_DWORD *)(this + 20);
  if ( v8 + 40 * v7 != -16 )
  {
    *(_DWORD *)(v8 + 40 * v7 + 16) = v10;
    sub_10003100((int *)(v8 + 40 * v7 + 20), v11);
  }
  sub_102375F0(v11);
  return v7;
}
