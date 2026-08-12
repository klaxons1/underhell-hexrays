int __stdcall sub_100D9640(int *a1, int *a2)
{
  int v2; // eax
  int result; // eax
  int v4; // [esp+0h] [ebp-8h] BYREF
  int v5; // [esp+4h] [ebp-4h] BYREF

  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1041315C + 20))(dword_1041315C, &v5, &v4);
  v2 = v4;
  *a1 = v5 >> 1;
  result = v2 >> 1;
  *a2 = result;
  return result;
}
