int __thiscall sub_1023AB30(int *this)
{
  int v1; // edi
  int v2; // ebx
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int result; // eax
  int v8; // [esp+30h] [ebp-90h] BYREF
  int v9; // [esp+34h] [ebp-8Ch] BYREF
  int v10; // [esp+38h] [ebp-88h] BYREF
  int v11; // [esp+3Ch] [ebp-84h] BYREF
  wchar_t Buffer[64]; // [esp+40h] [ebp-80h] BYREF

  v1 = dword_1047CA70;
  v2 = *(_DWORD *)dword_1047CA70;
  v4 = (*(int (__thiscall **)(int *, int *, int *))*this)(this, &v10, &v11);
  (*(void (__thiscall **)(int, int))(v2 + 20))(v1, v4);
  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &v9, &v8);
  v5 = v10;
  if ( v10 >= 80 )
    v5 = 80;
  v6 = v11;
  if ( v11 >= 80 )
    v6 = 80;
  v9 -= v5 >> 1;
  v8 -= v6 >> 1;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, this[10]);
  (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 56))(
    dword_1047CA6C,
    v9,
    v8,
    v9 + v5,
    v8 + v6);
  result = this[9];
  if ( *(int *)(result + 56) > 1 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, this[10]);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, this[15]);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, v9 + 5, v8 + 2);
    _snwprintf(Buffer, 0x40u, L"[ %i ]", *(_DWORD *)(this[9] + 56));
    return (*(int (__thiscall **)(int, wchar_t *, unsigned int, _DWORD))(*(_DWORD *)dword_1047CA6C + 88))(
             dword_1047CA6C,
             Buffer,
             wcslen(Buffer),
             0);
  }
  return result;
}
