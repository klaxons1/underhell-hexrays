_DWORD *__thiscall sub_10263860(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int i; // esi
  int v5; // ebx
  int v6; // eax
  char Buffer[64]; // [esp+Ch] [ebp-40h] BYREF

  result = sub_1022ACA0(a2, "lastBarWidth", this[71]);
  for ( i = 0; i < this[68]; ++i )
  {
    v5 = this[54] + 72 * *(unsigned __int8 *)(this[65] + i);
    _snprintf(Buffer, 0x40u, "%d_hidden", i);
    sub_1022ACA0(a2, Buffer, *(_BYTE *)(v5 + 25) != 0);
    _snprintf(Buffer, 0x40u, "%d_width", i);
    v6 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))v5);
    result = sub_1022ACA0(a2, Buffer, v6);
  }
  return result;
}
