_WORD *__stdcall sub_10167820(_WORD **a1, int a2)
{
  _WORD *v2; // edi
  _WORD *result; // eax
  _BYTE Src[1024]; // [esp+8h] [ebp-400h] BYREF

  v2 = *a1;
  (*(void (__thiscall **)(int, _BYTE *, int, _DWORD))(*(_DWORD *)a2 + 80))(a2, Src, 1024, 0);
  result = (_WORD *)sub_1042F910((int)&a1 + 2, Src);
  *v2 = *result;
  return result;
}
