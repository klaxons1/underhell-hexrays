_DWORD *__thiscall sub_101E63D0(void *this, _DWORD *a2, float a3, float a4)
{
  void (__thiscall *v4)(void *, _DWORD *); // eax
  _DWORD *result; // eax
  int v6; // edx
  int v7; // ecx
  _DWORD v8[10]; // [esp+0h] [ebp-28h] BYREF

  v4 = *(void (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 1496);
  *(float *)&v8[8] = a3;
  *(float *)&v8[9] = a4;
  v8[6] = -1;
  v4(this, v8);
  result = a2;
  v6 = v8[1];
  *a2 = v8[0];
  v7 = v8[2];
  a2[1] = v6;
  a2[2] = v7;
  return result;
}
