int __stdcall sub_100D9850(int *a1, int *a2, int *a3, int *a4)
{
  int result; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // [esp+0h] [ebp-18h] BYREF
  int v9; // [esp+4h] [ebp-14h] BYREF
  int v10; // [esp+8h] [ebp-10h] BYREF
  int v11; // [esp+Ch] [ebp-Ch] BYREF
  int v12; // [esp+10h] [ebp-8h] BYREF
  int v13; // [esp+14h] [ebp-4h] BYREF

  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA6C + 204))(dword_1047CA6C);
  if ( (_BYTE)result )
  {
    (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1041315C + 20))(dword_1041315C, &v11, &v10);
    sub_10131F10(&v12, &v13);
    v12 -= v11 >> 1;
    v13 -= v10 >> 1;
    (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA6C + 148))(dword_1047CA6C, &v9, &v8);
    v5 = v9 / 2 + v12;
    v13 += v8 / 2;
    if ( a3 )
      *a3 = v5;
    if ( a4 )
      *a4 = v13;
    v12 = v5 < 0 ? 0 : v5;
    if ( sub_10076740() < v12 )
      v12 = sub_10076740();
    v13 &= (v13 < 0) - 1;
    v6 = sub_10076720();
    v7 = v13;
    if ( v6 < v13 )
      v7 = sub_10076720();
    result = v12;
    *a1 = v12;
    *a2 = v7;
  }
  return result;
}
