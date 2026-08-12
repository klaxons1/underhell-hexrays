bool __thiscall sub_10244520(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // ebp
  bool result; // al
  int v7; // [esp+Ch] [ebp-10h] BYREF
  int v8; // [esp+10h] [ebp-Ch] BYREF
  int v9; // [esp+14h] [ebp-8h] BYREF
  int v10; // [esp+18h] [ebp-4h] BYREF

  v2 = this[77];
  v7 = 0;
  v8 = 0;
  if ( v2 )
  {
    (*(void (__thiscall **)(int, int, int *, int *))(*(_DWORD *)dword_1047CA70 + 20))(dword_1047CA70, v2, &v10, &v9);
    (*(void (__thiscall **)(int, _DWORD, int *, int *))(*(_DWORD *)dword_1047CA70 + 12))(
      dword_1047CA70,
      this[77],
      &v7,
      &v8);
  }
  else
  {
    (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA6C + 148))(dword_1047CA6C, &v10, &v9);
  }
  v3 = v7;
  v4 = v8;
  v5 = v10;
  result = this[78] != v7 || this[79] != v8 || this[80] != v10 || this[81] != v9;
  this[81] = v9;
  this[80] = v5;
  this[78] = v3;
  this[79] = v4;
  return result;
}
