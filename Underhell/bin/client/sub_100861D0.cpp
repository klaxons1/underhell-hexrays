int __thiscall sub_100861D0(_DWORD **this, unsigned __int16 a2)
{
  float *v3; // edi
  int result; // eax
  int v5; // eax

  (*(void (__thiscall **)(_DWORD *, int))(*this[1] + 56))(this[1], dword_1042C508);
  v3 = (float *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1041318C + 20))(
                  dword_1041318C,
                  *(unsigned __int16 *)(dword_1042C4EC + 168 * a2 + 4));
  (*(void (__thiscall **)(_DWORD *, float *))(*this[4] + 76))(this[4], v3);
  (*(void (__thiscall **)(_DWORD *, float *, int))(*this[2] + 48))(this[2], v3 + 19, 2);
  (*(void (__thiscall **)(_DWORD *, float *, int))(*this[3] + 48))(this[3], v3 + 21, 2);
  (*(void (__stdcall **)(float))(*this[5] + 12))(v3[16]);
  (*(void (__stdcall **)(float))(*this[6] + 12))(v3[17]);
  (*(void (__stdcall **)(float))(*this[7] + 12))(v3[18]);
  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    v5 = ((int (__thiscall *)(_DWORD **))(*this)[3])(this);
    return sub_101BCA60(v5);
  }
  return result;
}
