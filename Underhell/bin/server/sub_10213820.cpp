_DWORD *__thiscall sub_10213820(_WORD *this, int a2, int a3)
{
  int v3; // esi
  unsigned __int16 v4; // ax
  int v5; // edi
  int v6; // eax
  _DWORD *result; // eax
  int v8; // [esp+8h] [ebp-Ch] BYREF
  int v9; // [esp+Ch] [ebp-8h]
  int v10; // [esp+10h] [ebp-4h] BYREF

  v8 = a2;
  v3 = (int)(this + 6);
  v9 = a3;
  sub_1020ADA0(this + 6, (int)&v8, (unsigned __int16 *)&v10, &a3);
  v4 = sub_10243CD0(v3);
  v5 = v4;
  sub_1020EFD0(v3, v4, v10, a3);
  v6 = *(_DWORD *)(v3 + 4);
  ++*(_WORD *)(v3 + 18);
  result = (_DWORD *)(v6 + 16 * v5 + 8);
  if ( result )
  {
    *result = v8;
    result[1] = v9;
  }
  return result;
}
