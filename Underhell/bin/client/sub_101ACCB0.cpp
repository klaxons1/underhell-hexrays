unsigned int __thiscall sub_101ACCB0(int this)
{
  unsigned int result; // eax
  _DWORD *v3; // edi
  int v4; // ebx
  int v5; // edi
  _DWORD *v6; // eax
  int v7; // [esp+4h] [ebp-Ch] BYREF
  int v8; // [esp+8h] [ebp-8h] BYREF
  int v9; // [esp+Ch] [ebp-4h] BYREF

  sub_100D1000((float *)this);
  result = *(_DWORD *)(this + 432);
  if ( result == -1
    || (result >>= 12, *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 432) & 0xFFF) + 2) != result)
    || !*((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 432) & 0xFFF) + 1) )
  {
    if ( *(_DWORD *)(this + 444) )
    {
      (*(void (__thiscall **)(int, _DWORD, int, int *, int *))(*(_DWORD *)dword_1047CA6C + 288))(
        dword_1047CA6C,
        *(_DWORD *)(this + 328),
        this + 216,
        &v9,
        &v7);
      v3 = *(_DWORD **)(this + 444);
      v8 = (v9 + v3[39] - v3[40]) / 2;
      v4 = (int)((double)v8 + *(float *)(this + 336));
      v8 = v7 + (v3[42] - v3[41]) / 2;
      v5 = (int)(*(float *)(this + 344) - (double)v8);
      v6 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this + 228))(this, &v8);
      return sub_100B3BE0(*(_DWORD **)(this + 444), v4, v5, v6);
    }
  }
  return result;
}
