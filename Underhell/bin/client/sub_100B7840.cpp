int __thiscall sub_100B7840(_DWORD *this, int *a2, _DWORD *a3, int a4, _DWORD *a5)
{
  int v6; // esi
  int result; // eax
  unsigned __int16 v8[512]; // [esp+Ch] [ebp-400h] BYREF

  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, this[65]);
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, *a2, *a3);
  (*(void (__thiscall **)(int, const char *, unsigned __int16 *, int))(*(_DWORD *)dword_1047CA78 + 12))(
    dword_1047CA78,
    "O->",
    v8,
    1024);
  if ( a5 )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, *a5);
  else
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, 0);
  (*(void (__thiscall **)(int, unsigned __int16 *, unsigned int, _DWORD))(*(_DWORD *)dword_1047CA6C + 88))(
    dword_1047CA6C,
    v8,
    wcslen(v8),
    0);
  (*(void (__thiscall **)(int, int, unsigned __int16 *, int))(*(_DWORD *)dword_1047CA78 + 12))(
    dword_1047CA78,
    a4,
    v8,
    1024);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 72))(
    dword_1047CA6C,
    *(_DWORD *)((char *)this + 270));
  (*(void (__thiscall **)(int, unsigned __int16 *, unsigned int, _DWORD))(*(_DWORD *)dword_1047CA6C + 88))(
    dword_1047CA6C,
    v8,
    wcslen(v8),
    0);
  v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, this[65]);
  *a3 += v6;
  result = sub_10076720();
  if ( v6 + *a3 >= result )
  {
    *a3 = 50;
    result = (int)((double)sub_10076740() * 0.0015625 * 300.0 + (double)*a2);
    *a2 = result;
  }
  return result;
}
